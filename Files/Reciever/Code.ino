//  6 Channel Receiver | 6 Kanal Alıcı
//  PWM output on pins D2, D3, D4, D5, D6, D7 (Çıkış pinleri)

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <Servo.h>

int ch_width_1 = 0;
int ch_width_2 = 0;
int ch_width_3 = 0;
int ch_width_4 = 0;
int ch_width_5 = 0;
int ch_width_6 = 0;

Servo ch1;
Servo ch2;
Servo ch3;
Servo ch4;
Servo ch5;
Servo ch6;

struct Signal {
byte throttle;      
byte pitch;
byte roll;
byte yaw;
byte aux1;
byte aux2;
};

Signal data;

const uint64_t pipeIn = 0xE9E8F0F0E1LL;
RF24 radio(9, 10); 

void ResetData()
{
// Define the inicial value of each data input. | Veri girişlerinin başlangıç değerleri
// The middle position for Potenciometers. (254/2=127) | Potansiyometreler için orta konum
data.roll = 127;   // Center | Merkez
data.pitch = 127;  // Center | Merkez
data.throttle = 12; // Motor Stop | Motor Kapalı
data.yaw = 127;   // Center | Merkez
data.aux1 = 127;   // Center | Merkez
data.aux2 = 127;   // Center | Merkez
}

void setup()
{
  //Set the pins for each PWM signal | Her bir PWM sinyal için pinler belirleniyor.
  ch1.attach(2);
  ch2.attach(3);
  ch3.attach(4);
  ch4.attach(5);
  ch5.attach(6);
  ch6.attach(7);

  //Configure the NRF24 module
  ResetData();
  radio.begin();
  radio.openReadingPipe(1,pipeIn);
  radio.setAutoAck(false);
  radio.setDataRate(RF24_250KBPS);
  radio.setPALevel(RF24_PA_HIGH);
  radio.startListening(); //start the radio comunication for receiver | Alıcı olarak sinyal iletişimi başlatılıyor

  pinMode(6,OUTPUT);

}

unsigned long lastRecvTime = 0;

void recvData()
{
while ( radio.available() ) {
radio.read(&data, sizeof(Signal));
lastRecvTime = millis();   // receive the data | data alınıyor
}
}

void loop()
{
recvData();
unsigned long now = millis();
if ( now - lastRecvTime > 1000 ) {
ResetData(); // Signal lost.. Reset data | Sinyal kayıpsa data resetleniyor
}

ch_width_4 = map(data.yaw,      0, 255, 1000, 2000);     // pin D5 (PWM signal)
ch_width_2 = map(data.pitch,    0, 255, 1000, 2000);     // pin D3 (PWM signal)
ch_width_3 = map(data.throttle, 0, 255, 1000, 2000);     // pin D4 (PWM signal)
ch_width_1 = map(data.roll,     0, 255, 1000, 2000);     // pin D2 (PWM signal)

ch_width_5 = map(data.aux1,     0, 255, 1000, 2000);     // pin D6 (PWM signal)
ch_width_6 = map(data.aux2,     0, 255, 1000, 2000);     // pin D7 (PWM signal)

// Write the PWM signal | PWM sinyaller çıkışlara gönderiliyor
ch1.writeMicroseconds(ch_width_1);
ch2.writeMicroseconds(ch_width_2);
ch3.writeMicroseconds(ch_width_3);
ch4.writeMicroseconds(ch_width_4);
ch5.writeMicroseconds(ch_width_5);
ch6.writeMicroseconds(ch_width_6);
}
