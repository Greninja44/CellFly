---
title: "Nano long range FPV Drone"
author: "greninja44"
description: "A long range drone using 18650 batteries"
created_at: "2025-06-16"
Total time spent: 38-40 hours
---
## June 16 Night – Tiny Whoop Research :D  ~~~~ 5-6 hours

Today night I didn’t do any building work,just full research.Got fully into the world of tiny whoops —>kept watching YouTube videos one after another. Started with basic builds but then I ended up seeing modded whoops, freestyle edits, tuning guides, and even long-range micro whoops Even though I’m building a nano 18650 cruiser, watching these gave me lots of ideas. Tiny whoops are crazy efficient — most of them run on 1S and still fly solid for 4–5 mins. People use super light components like micro motors and even BT2.0 connectors instead of bulky XT30. They tune everything so tightly just to save 0.5g.
I saw how clean their wiring is, how compact the builds are. Everything matters in these small frames — even motor wire position and capacitor size. I think some of that applies to my build too. No ducts in my case, but weight saving and clean layout is definitely something I need to focus on more now.

Also watched a few Indian FPV pilots doing whoop builds with parts sourced locally, gave me confidence that even simple setups can perform well if done right. Now I’m thinking, maybe I can apply some whoop techniques to my frame design — especially how they mount batteries and route wires so neatly.

So yeah,. Tomorrow I'll probably go back to Fusion360 and rethink a few things based on what I learnt tonight.

## June 17  – Parts selection :D(1:00 pm) ~~~~ 4-5Hours
First we need brain for our build....
So I picked the Flywoo GOKU F405 Nano 13A AIO because bro, it just makes sense for my build. I’m going with 2x 18650 Li-ion cells, and this AIO handles 1–2S power like a champ—no voltage drama,btw i fried kk2 flight controller before :(. It has  F405 chip, which is solid for Betaflight and doesn’t lag like those cheap chin-e-se-e boards. Plus, the 13A ESCs are already built-in, so I don’t have to mess with extra wires or waste space. It's super compact and lightweight, perfect for a 3-inch drone. And honestly, Flywoo is a chill brand—popular in the community and you can find it online in India without much hassle. Clean setup, decent power, less headache. Total value-for-money   also also it has c typeeeeee  also if i ever switch to Digital fpv this would be easy plug and play


Link :https://robu.in/product/flywoo-goku-f405-hd-1-2s-12a-aio-no-rx-v2-icm42688/?gad_source=1&gad_campaignid=17419548928&gbraid=0AAAAADvLFWcP_heyelJofAKjckUvH3lkh&gclid=CjwKCAjwx8nCBhAwEiwA_z__07bz9Vc_dnlJw5IIb19OjYEXrGtS5e-V2WoIFc9hx4DoJGJ6R078uxoC58kQAvD_BwE

![image](https://github.com/user-attachments/assets/02f79ad3-d2bb-4174-9d02-28265dd39b46)

Next so that we selected aio, we need to look on motors now
I went with the Flywoo ROBO 1202.5 11500KV motor because it's small but powerful—just right for a 3-inch build with 18650 cells. It’s super lightweight, so I won’t lose flight time or efficiency. The 11500KV rating is solid for 1–2S setups, and it’ll give me that quick throttle response without killing the batteries too fast. Also, it matches perfectly with the GOKU no tension BOSS, paisa vasool for sure

You can buy on robu or quadkart :https://robu.in/product/flywoo-robo-1202-5-11500kv-1pc/?gad_source=1&gad_campaignid=17419548928&gbraid=0AAAAADvLFWcP_heyelJofAKjckUvH3lkh&gclid=CjwKCAjwx8nCBhAwEiwA_z__022kY_rbuMXziUq0JqhvDjaNAlSUy6PoJ4jmkEZ93v-s-6t3XgQYkBoCCGcQAvD_BwE

![image](https://github.com/user-attachments/assets/940579c4-a8d2-4700-a74c-5c3ffe68959b)
![image](https://github.com/user-attachments/assets/8130e74e-56cb-4f05-87d1-8d5966e8137f)

I decided to go with both the 2-blade and tri-blade props ( i want to test out and compare the best props) because I wanted flexibility depending on the flying style. The 2 blede are lightweight and super efficient—perfect for longer flight times and chill cruising. On the other hand, the 3 inch  give more control, better grip, and that snappy feel when I want to pull off freestyle tricks or fly tight lines ( which mostly i wont coz im chill guy). Both are 2mm hub, so they fit my motors easily, and honestly, switching them out based on the vibe feels way more fun ( im delusional ).
links: 
3 inch props:  https://www.drkstore.in/gemfan-hurricane-3016-durable-tri-blade-3-prop-4-pack/?attribute_pa_color=purple&attribute_pa_hub=2mm&gad_source=1&gad_campaignid=20102142213&gbraid=0AAAAAoK8pUhz2UhjOhvSReBWcbneg_R1s&gclid=CjwKCAjwx8nCBhAwEiwA_z__01FC64ecfKDJjrRZOa3uDZhGvENwvz3Mqr4Hu0zlMGX6cdBgmp4lxhoCibYQAvD_BwE 


2 inch props: https://www.quadkart.in/gemfan-hurricane-3018-durable-2-blade-propeller-1-5-2mm-shaft-set-of-8/?attribute_pa_shaft=2mm&attribute_pa_colour=grey&gad_source=1&gad_campaignid=22331841763&gbraid=0AAAAACWP_Z6_Tia8EGwzoyRKb4fu0VRJz&gclid=CjwKCAjwx8nCBhAwEiwA_z__09Vqx5RIXff3Qj1RawqYIYNNFkjVhX4trOB45ygwaQa_t3Wg0eOZUhoC_O0QAvD_BwE

![Screenshot 2025-06-18 133111](https://github.com/user-attachments/assets/87bf9151-14a4-46f8-a8fb-83fcd11c29f0)


now we have the core components its time that we look upon the fpv system
I picked the Caddx Ant 1200TVL cause it's seriously clean for FPV ,great detail and ultra-light, so my drone stays nimble even with 18650s 
( yt footages were crazy asf) . It has built-in OSD (  absically displays things like volatge altitude throttle percentage on fpv using betaflight) too. For the VTX, I went with the HGLRC Zeus Nano—compact, powerful (350mW). The combo is like plug-and-play for micro builds. Video feed will be solid, range will be solid, and weight? Barely anything. What more do I need?( Funds)
![image](https://github.com/user-attachments/assets/9e9915a5-c4d3-468c-b528-4bb807c59587)
Comparision between different caddx cameras




![image](https://github.com/user-attachments/assets/e41adb27-f97d-47c5-9ef5-313e06a10a65)



The camera and vtx i choosed


![image](https://github.com/user-attachments/assets/d3ad6278-d3f4-45fc-8669-5e95a49a6ac6)

Links:
camera:https://www.drkstore.in/caddx-ant-1200tvl-osd-ultra-nano-fpv-camera/?attribute_pa_aspect-ratio=43&attribute_pa_color=black&gad_source=1&gad_campaignid=20102142213&gbraid=0AAAAAoK8pUhz2UhjOhvSReBWcbneg_R1s&gclid=CjwKCAjwx8nCBhAwEiwA_z__03LQi2cbWNSuaAvx43gRVkvqpFmxWhhNLqEaExaNUh7CvI0tRgXC7BoCA6kQAvD_BwE


vtx:https://www.quadkart.in/hglrc-zeus-nano-350mw-16mm-20mm-25-5mm-vtx/?gad_source=1&gad_campaignid=14172696879&gbraid=0AAAAACWP_Z7PuZtMm3LYN65hOV1j_BOlf&gclid=CjwKCAjwx8nCBhAwEiwA_z__0xbfNo5PdTe2fyB7_hZxdLA8VxBemp48-f0wwVqCsQyg6dSNpeEbPxoCxqYQAvD_BwE



So now that we choosed our camera and vts its time for the googles
( cheap and avaible in india) which supports my camera and vtx:
https://fpvguru.in/product/iflight-analog-fpv-goggles-with-dvr-function/


![image](https://github.com/user-attachments/assets/8c0514f6-c879-46c1-88ff-4a3875239beb)



I chose the iFlight analog goggles cause they’re perfect for my build—budget-friendly, lightweight, and come with a built-in DVR, so I can record all my flights and cringe later when I crash into a tree ( jking). The screen’s decent size (4.3 inches ah), and the 40-channel receiver means I’ll always find a clean frequency to fly on. Plus, it runs for around 3.5 hours with its own battery, so no stress about external packs. Picked them up from FPVGuru (Bengaluru), so it’s fast shipping, no customs tension, and no imported mark-up. Feels like a smart desi pick for my first proper FPV setup!


The build is almost done: 

now we look for a elrs transmitter for that we gonna buy the og and best transmitter choosen by most of the pple getting into fpv 
THE POCKET:https://www.drkstore.in/radiomaster-pocket-radio-cc2500-elrs/?attribute_pa_model=cc2500&attribute_pa_color=charcoal&gad_source=1&gad_campaignid=20102142213&gbraid=0AAAAAoK8pUhz2UhjOhvSReBWcbneg_R1s&gclid=CjwKCAjwx8nCBhAwEiwA_z__0wpAbn3lB7VawDsYpTYBWp4grhScWuiXn-IZkBEZQhFRmLfL68dISBoCXi4QAvD_BwE



![image](https://github.com/user-attachments/assets/74d4bfcf-cad3-437c-887f-8fee411dc3b6)



I heard from my friends and reddit that   choose a high discharge 18650 battries so I chose the Sony VTC6 18650 because it will b solid  with 3000 mAh and handles high current without sag ( hopefully). It’s reliable, safe, and easily available in India—perfect for my 2-cell FPV setup.



I found this PInout diagram ( i will b using this while building)on Goku website :
![image](https://github.com/user-attachments/assets/ea6d1c0f-1dcd-4e43-9c61-c072aec55302)


## June 18 ( 1:00 PM) – Starting frame design :D  ~~~~ 6-8hours

I properly sat down and designed the base plate for my custom drone, taking full inspiration from the Rekon35. Wanted it to be lightweight but strong, so I added those sleek cutouts in the arms and center. I measured out motor holes, and kept around 143 mm diagonal so my 3-inch props can fit perfectly. The mounting holes are standard 9x9 and 12x12, so my Flywoo motors will easily bolt on. I also gave slots for the battery strap 28 holes of 2.2x9.5 mm why so many holessss, and double-checked spacing for the GOKU F405 AIO board. After doing all the sketches, I made a full engineering drawing to lock the dimensions. Now it’s ready for CNC cutting or carbon sheet laser ( just kidding gonna 3d print the case i made this so i get idea of all dimensions)

![Screenshot 2025-06-18 160126](https://github.com/user-attachments/assets/c99c8f06-cb98-4a40-bc6f-8bdcf789d0f3)
![image](https://github.com/user-attachments/assets/04a41ec3-c1dd-4926-a1b6-537d8875b748)
After finalizing the 2D sketch for my drone base plate, I moved on to the 3D stage today. First I completed the full outline, motor mount holes, and central stack layout. Then I did a quick zebra analysis ( idk y they call it zebra basically u to check surface smoothness and overall symmetry). Once everything felt solid, I extruded the body to give it thickness and form. Now the frame has proper depth and feels more real. Everything fits as per plan, and seeing the arms and center cutouts in 3D felt super satisfying.I rendered the basic frame

![image](https://github.com/user-attachments/assets/8891f027-baf6-44cb-a2a1-718a462ffa51)



ufff so satisfyinggg 

![image](https://github.com/user-attachments/assets/53a80209-6be0-40e9-8352-f97856bafb90)
![image](https://github.com/user-attachments/assets/d6f9fca2-bb32-4db0-b11e-e68efc9e95c3)

For the battery section of my FPV drone, I chose to use a dual 18650 battery holder that I found for free online. After downloading the model, I verified the dimensions in Fusion 360 and ensured the fit would be snug and compact. The holder is perfectly suited for the Sony VTC6 3000mAh batteries I selected and keeps the cells securely in place during flight. It was satisfying to integrate a ready-made model into my custom drone design, saving both time and effort.
![image](https://github.com/user-attachments/assets/c94358da-94de-4275-ab6b-425feb8378cb)


Now its time for the compartment  to hold all the electronics 


This is the base plate of the frame

![image](https://github.com/user-attachments/assets/22c0f377-b708-45f4-bba7-70356d35068f)



![image](https://github.com/user-attachments/assets/61092a4c-6f86-4173-99d0-f16b2ec4e291)




![image](https://github.com/user-attachments/assets/13f8945c-2d68-4afa-b1a3-d1c782e9c726)


i am adding two structures inspired from rekon 35 . i only designed one arm the other i just duplicated 


![image](https://github.com/user-attachments/assets/80539f89-c04e-47ff-ba7f-542121b01d19)



This is the final rendered model:



![image](https://github.com/user-attachments/assets/ffe4fc18-3663-4047-aef3-898c83d1f9c3)



Im gonna include all the 2d and 3d models in this repo :)
I should still design a insta 360 holder and gps mount for taking good shots but would do it once the project gets approved 

## Day 3
Acon told i need to add all other components of the drone and reduce some cost
Im including new aio reducing some bucks


https://robu.in/product/happy-model-elrs-f4-2g4-aio-flight-controller/?gad_source=1&gad_campaignid=17419548928&gbraid=0AAAAADvLFWeFSM0s4T3eFtXaKcBRRYfeM&gclid=CjwKCAjw6s7CBhACEiwAuHQckvKLisGcxDe1oz3ytny5ckEbFG-twqEZR9luFOZP_NekLo-PWeTVCRoCtSkQAvD_BwE

![image](https://github.com/user-attachments/assets/8c148665-31c7-43b4-923e-8a3a32cff6d7)


Happy Model ELRS F4 2G4 AIO Flight controller is almost similar to goku but less n cost also the dimensions are almost same so no worries

Now im changing the elrs too :Jumper Smart Color Screen ELRS Radio Controller with Hall Sensor Gimbals is also a good transmitter

![image](https://github.com/user-attachments/assets/2be66bd7-f12f-4841-a3e9-36c05b0b5073)




Also changed the motors: 

Pro-Range-D0703-12000KV CCW Brushless Drone Motor is also betetr compared to the flywoo, this will be effiecnt with aio


![image](https://github.com/user-attachments/assets/37e06e62-201e-4f74-9aec-5828b0165810)



Now lets start modelling the mounts:

So iadded a gps mount and camera mount:
![image](https://github.com/user-attachments/assets/3a7f24bd-041f-4149-b7c6-e21e7d6dd145)
![image](https://github.com/user-attachments/assets/9035c17a-8a3f-4cc9-a1d3-1f94a586900a)


This is the final model:

![image](https://github.com/user-attachments/assets/87927589-263b-4e08-8c1a-fc912310665e)


![image](https://github.com/user-attachments/assets/dd056e39-7113-490d-b250-4e4dee219c9e)


## June 22
After a long 2 day research and deisgning..... 

![Screenshot 2025-06-22 012106](https://github.com/user-attachments/assets/97492741-433c-4445-b7d9-fe6c6f185b3c)

![Screenshot 2025-06-22 012039](https://github.com/user-attachments/assets/c8ddbfbd-e48d-400d-a162-3feaeed81e08)

![Screenshot 2025-06-22 000027](https://github.com/user-attachments/assets/7b531eed-288c-4556-915f-d5fe0533008b)
![Screenshot 2025-06-21 235932](https://github.com/user-attachments/assets/e62978ad-39e4-4e73-9d16-ac373dea1d10)


I just finished designing the PCB for both the transmitter and receiver for my drone project. I haven’t tested it out yet, but I’m quite excited to see how it performs once I get it fabricated. Till now I was using jumper wires and breadboard which was messy and not reliable for actual use. So I thought it’s time to make a proper PCB for clean connections and to save space. Along with that, I’m planning to reuse some leftover acrylic sheets from my previous project to make a custom case for the transmitter. I’ll try to cut it properly and maybe paint it a bit to give it a cool look. It’s not fully ready yet, but slowly all parts of my drone setup are coming together. Can’t wait to test everything and see it fly with my own electronics.


ive added schematics , pcb geber and code and updated BOM to repo


## JUNE 25 

TO MAKE THIS PROJECT 10 points worth , imma gonna design my own Flight controller


I spent almost 20 hours just researching about flight controllers. At first I thought it would be simple, but once I got into it, I realised this thing is the actual brain of the drone. Everything runs through it — balancing, reading sensors, getting commands from the receiver, sending signals to ESCs — all of it. I watched a bunch of YouTube videos, from Indian to international creators, and also studied open-source boards like Betaflight, ArduPilot, and Matek. Most of them use STM32 microcontrollers, MPU6000 for gyro and accel, and some even have barometer, SD card, and USB support.



![image](https://github.com/user-attachments/assets/83a43281-41fa-4228-bc84-79c14e3879c2)


NAHHHH BRO made a controller using esp32 which supports beta flight

Earlier I was managing everything with breadboards and jumper wires, but now I feel it’s time to level up — I’m going to design my own flight controller. Full desi style, no ready-made parts. Since I already made my own transmitter and receiver, this will make the whole setup fully custom. If I can pull this off, it’ll be a full handmade drone from scratch. Now I’m gonna start slowly designing the circuit and layout, and test everything bit by bit.

## June 28


![image](https://github.com/user-attachments/assets/0f851f65-fb2e-4aff-941d-7bd75d2694b6)

For my flight controller, I chose the STM32H750VBT6 microcontroller, which is part of ST’s high-performance H7 series. It runs at a blazing fast 480 MHz and comes with 1 MB of RAM, making it perfect for running complex flight algorithms, sensor fusion, and real-time control loops without any lag. Unlike the common F4 or F1 chips used in many open-source flight controllers, this H7 chip gives me a lot more headroom for future upgrades like GPS navigation, data logging, or advanced filtering. It supports multiple communication interfaces like SPI, I2C, UART, USB, and also has enough PWM outputs to control multiple motors. Since it requires a stable 3.3V power supply, proper decoupling capacitors, and an external 16 MHz crystal for USB and clock stability, I carefully included all of that in my design. Overall, this chip makes my project future-proof and powerful just like a supercharged brain for my drone.



Resource:

https://www.st.com/en/microcontrollers-microprocessors/stm32h750vb.html

https://youtu.be/Rv1MVkZuGbg?si=6kMHQxuushMeDxte




![image](https://github.com/user-attachments/assets/2ffc10f7-6878-4fe4-a0cd-86cd279539a5)


To power the STM32H750 and all the sensors, I used the AMS1117-3.3 linear regulator. Since my input will usually be 5V (from USB or a battery circuit), I needed a reliable way to bring it down to 3.3V, which is the safe operating voltage for most components. AMS1117 is simple, widely used, and gets the job done. I’ve added input and output capacitors to keep the voltage clean and prevent sudden dips, which is very important for microcontroller stability





![image](https://github.com/user-attachments/assets/fb06a954-f825-43ef-b18a-a9bf3d4e4fb0)




For the STM32H750 to run accurately and to use USB communication, it needs an external clock. I chose a 16 MHz crystal, which is a standard choice and supported directly by the STM32. This crystal helps keep the timing perfect for tasks like PWM generation, USB, and real-time loops. I added two 22pF capacitors as recommended, to make sure the crystal oscillates correctly. Without this, the chip might not even start properly.





![image](https://github.com/user-attachments/assets/5fe22434-9fcd-4f49-af77-423212d57fc6)



I added a USB-C connector to allow easy programming and communication with my PC. USB-C is more modern and reversible, which makes it better than old micro-USB. I connected it to the STM32’s USB pins for uploading firmware and debugging through DFU mode. I also included ESD protection diodes to protect the microcontroller from voltage spikes or static damage through the cable. This makes firmware uploading simple and safe.


![image](https://github.com/user-attachments/assets/5628ca4a-0adc-4b9a-9d3b-514f65ebfb61)




I added a standard SWD header for direct programming and debugging using tools like ST-Link. This is super helpful if USB flashing fails or if I want to debug code at a low level. It gives me access to the SWCLK and SWDIO pins, along with reset and power. This makes my board more flexible and developer-friendly, especially during early testing.




![image](https://github.com/user-attachments/assets/6c8f0aae-47e4-4e44-89ec-931b06fdfdf5)




For motion sensing, I used the ICM-20602, a 6-axis sensor that combines a 3-axis accelerometer and 3-axis gyroscope. This is a very common and reliable IMU used in many commercial drones. It gives real-time data about the drone’s orientation and movement, which is crucial for stabilization and control. I connected it over SPI for faster and noise-free communication compared to I2C.



![image](https://github.com/user-attachments/assets/43e4bd14-2f87-455b-89f0-bd8819b37885)





To detect the drone’s heading (which direction it's facing), I added the LIS3MDLTR magnetometer. This is a 3-axis digital compass that helps with yaw control and GPS-based navigation. It’s lightweight, consumes low power, and works over SPI or I2C. I chose it because it’s compatible with Betaflight and ArduPilot and gives fairly accurate directional data when placed away from interference sources.



![image](https://github.com/user-attachments/assets/b0a0ec3d-e529-4f8f-8c7e-577a87e01d9a)




For altitude sensing, I included the MS560702BA03 barometer. This sensor measures air pressure and lets the flight controller calculate how high the drone is flying. It’s especially useful for features like altitude hold and smooth take-off/landing. It’s accurate, small, and works well over SPI, which is why I preferred it over older I2C-based models.





![image](https://github.com/user-attachments/assets/40af1640-0a8c-4390-9531-761993304138)



Final Schematic: I took a lot of help from youtube and ai to make this happen refer the videos for drawing your circuit



Now lets start designing the PCB:

im using easyeda  ( i dont have much experience in kicad)



![image](https://github.com/user-attachments/assets/53f16d6c-95fc-4ef9-a0fa-b52fe4ab032e)


![image](https://github.com/user-attachments/assets/94ae1854-693b-406e-8fa1-6a6163bb8555)




 tried to keep the layout clean and followed basic rules like short traces for crystals, decoupling caps close to the MCU pins, and separate analog and digital zones where possible. Still learning how to do proper ground planes and power routing, but I think it’s looking solid for now. Feels great to see the board slowly take shape on the screen. This is the first time I’m making such a complex PCB  flight controller level(btw u can checkout my usb hub repo). Hopefully, it works on the first try . Next, I’ll focus on routing the signals carefully and making sure no traces cross messy paths. Step by step, bro. Desi jugaad, global standard.




![image](https://github.com/user-attachments/assets/88f08487-0f0c-488e-8314-fbf2a9ec13cb)


![image](https://github.com/user-attachments/assets/68460cf8-14f7-459d-80e5-ce800e5d76b9)



