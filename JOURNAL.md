# Custom Keyboard — Journal Export

- Exported at: 2026-05-26T03:03:46Z
- Project ID: 3515
- Entries: 14

## Entry 1
- ID: 7653
- Author: eastmohan22
- Created At: 2026-05-17T18:22:25Z

### Content

I decided I'm going to use the XIAO nrf52840 because its small, cheaper than the Adafruit Feather, supports battery, uses USBC, and has Bluetooth. I found the libraries online and added to KiCAD, though it is not included in the recording because KiCAD crashed and when I reopened it Lookout didn't give me an option to add those windows to the timelapse.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTY2NjMsInB1ciI6ImJsb2JfaWQifX0=--531147cb69c436cb71cbe2dcd57021996487a969/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTY2NjQsInB1ciI6ImJsb2JfaWQifX0=--22a32bb6ab8a2019ceedcc4ede2671ad4c6c86e9/image.png)

Change of plan. I'm going to use the Adafruit nrf52840 because it has more gpio pins and I think it will be easier to work with. I'm having trouble getting a symbol and footprint for it, though. I'm using the generic Adafruit Feather symbol as of now but I think I'm using the wrong pins so I'll have to figure that out.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTY2OTQsInB1ciI6ImJsb2JfaWQifX0=--c2da624d6c1c123acfb23be955db0b16dea55597/image.png)
So far, I have the matrix and diodes. I may add some addressable LEDs, though I'm not sure if I have enough pins on the board for that.


### Recording Links

- https://lookout.hackclub.com/api/media/fe98666e-89a0-41dd-9722-87c615a2dc9f/video.mp4
- https://lookout.hackclub.com/api/media/a444cc0e-d822-45e9-97a8-b3aae417a556/video.mp4
- https://lookout.hackclub.com/api/media/38a07c3c-c13f-488b-b923-138c626231a1/video.mp4

## Entry 2
- ID: 7892
- Author: eastmohan22
- Created At: 2026-05-19T02:52:09Z

### Content

The reason this has so many timelapses is because KiCAD kept crashing for no reason and there's no option in Lookout to add windows to the recording so I had to start new recordings each time. I finished my schematic and assigned footprints (a couple times because KiCAD deleted my work despite having saved it) and decided the layout.
I have 63 keys. This is the layout I'll use:
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTcyNDgsInB1ciI6ImJsb2JfaWQifX0=--ae5014620552556e002d8b2b0d48ab0467f26ff5/image.png)
I also decided to make this wired and not bluetooth because its my first time doing anything like this other than a macropad and I don't want to figure out a good microcontroller, the bluetooth connectivity, batteries, charging, and firmware right now. I may upgrade it in the future.
I will use the KB2040 board:
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTcyNDksInB1ciI6ImJsb2JfaWQifX0=--7ec32cb666e74c33991f49d38515c59986b08808/image.png)
Here is my keyboard layout. Its a bit weird with the arrow keys in a sideways L shape but it should be okay.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTcyNTAsInB1ciI6ImJsb2JfaWQifX0=--60a99f403975514c2563cfe5fcb2d8656d3deff4/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/2333402f-da97-40df-b2aa-6725a9cffdc0/video.mp4
- https://lookout.hackclub.com/api/media/0df72de7-e3eb-4d7c-84dd-999f304f6456/video.mp4
- https://lookout.hackclub.com/api/media/4de6d83f-9db1-432a-94fa-6173f97e0995/video.mp4
- https://lookout.hackclub.com/api/media/8ca7ce7c-48d5-4fd3-9121-e8dcd71567b1/video.mp4
- https://lookout.hackclub.com/api/media/5e18027c-8cb5-4836-b12a-6f968fa61142/video.mp4
- https://lookout.hackclub.com/api/media/4e6901d0-3f48-485b-9b63-96b731ccd06f/video.mp4

## Entry 3
- ID: 7963
- Author: eastmohan22
- Created At: 2026-05-19T14:28:06Z

### Content

I made the layout in KiCAD. I thought there would be a native way to use the .json file from keyboard-layout-editor.com to set the layout in KiCAD, but it couldn't be done without a plugin. I didn't want to use a plugin so I did it using the interactive offset tool.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTczODUsInB1ciI6ImJsb2JfaWQifX0=--21b159deedf962535532fda70064b48159d81f49/image.png)
![Screenshot 2026-05-19 095835.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTczOTAsInB1ciI6ImJsb2JfaWQifX0=--61e0d1563ca800d720ce26679d38e4569f863389/Screenshot 2026-05-19 095835.png)
I found a misalignment while I was doing this, and I'm glad I didn't ignore it because as shown in an image above two of the footprints were overlapping and this would have resulted in the keycaps touching each other.

### Recording Links

- https://lookout.hackclub.com/api/media/79407080-0ce0-4ff6-ac96-5116ce2d6764/video.mp4

## Entry 4
- ID: 7973
- Author: eastmohan22
- Created At: 2026-05-19T15:37:41Z

### Content

I placed all of the diodes. It was really tedious because I thought the switch numbers corresponded with diode numbers and I guess I messed up the switch order in the schematic, so that wasn't the case. I had to look at the schematic for each switch and see what diode I had to place by it. This made it take a while until I realized I could just move the diodes and follow the ratsnest to place it.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTc0MjEsInB1ciI6ImJsb2JfaWQifX0=--a6ebe1f1ba994d5f9a5e649bd138abd552d868a4/image.png)
Now I need to route everything, design a case, find parts, write firmware, add it to a repo, and then actually build it.

### Recording Links

- https://lookout.hackclub.com/api/media/79a578e5-2dd5-4d8e-934d-3fcae0efce40/video.mp4

## Entry 5
- ID: 8248
- Author: eastmohan22
- Created At: 2026-05-21T01:38:29Z

### Content

I finished the routing of my keyboard. I initially wanted to only use the bottom layer for short parts but then I changed my mind and got a bit lazy. Overall, the process was quite smooth. ![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTgwNjIsInB1ciI6ImJsb2JfaWQifX0=--65ff58ee95a79545b500b7e790a0f89761c38929/image.png)
Now, I need to design a case for it, find parts, write firmware, and put it in a repository.

### Recording Links

- https://lookout.hackclub.com/api/media/437b9468-73b2-48e2-9c47-6be2bb36a969/video.mp4
- https://lookout.hackclub.com/api/media/ffb38126-b6cd-409f-8819-702f207e4ba8/video.mp4

## Entry 6
- ID: 8254
- Author: eastmohan22
- Created At: 2026-05-21T02:27:24Z

### Content

I began the CAD for my keyboard. Placing all of the keys was extremely repetitive. There may be a faster way but not that I'm aware of. Why doesn't KiCAD add the keys like it does the diodes? 😭 I also added 13-pin pin headers and the KB2040 board. I started adding keycaps as well. Now, I need to finish adding the keycaps, design a case, write firmware, find parts, add it all to a repo, and of course build it.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTgwNzEsInB1ciI6ImJsb2JfaWQifX0=--22a08e7304ca21659c09f147fd4a17064e9ddb94/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/6228d5a7-f2db-4363-aba9-a22f335dec0d/video.mp4

## Entry 7
- ID: 8393
- Author: eastmohan22
- Created At: 2026-05-22T00:34:50Z

### Content

I continued adding the keycaps to my CAD. I now have all of the 1.0U keycaps added, so I just need to add the other sizes. I didn't know there were different keycaps for each row of the keyboard, but I'm guessing thats why they're labeled things like R1, R2, etc. This is really monotonous.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTgzNjEsInB1ciI6ImJsb2JfaWQifX0=--8171736307d71369c167d3fd2aaa96e03aaa3d8c/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/aa051116-d97e-49cc-950f-046aef2f2f0a/video.mp4

## Entry 8
- ID: 8398
- Author: eastmohan22
- Created At: 2026-05-22T01:33:52Z

### Content

I continued with the CAD. I didn't realize I needed stabilizers for the larger switches, so I had to change my PCB design to accommodate those, and moved a few traces as they would have been drilled. I then had to transfer every single key from the old PCB to the new one in CAD, which was very time consuming. The new PCB and 3D model are shown below, with the stabilizer circled in the CAD.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTgzNjksInB1ciI6ImJsb2JfaWQifX0=--0b797577afc1e32f11c8bf568c976e1b510d205c/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTgzNzAsInB1ciI6ImJsb2JfaWQifX0=--d3d1576cf7de71b22337c76250c1962b4ffa3272/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/e8fc88d7-0217-4a73-9ebb-5c13bf6fdd43/video.mp4

## Entry 9
- ID: 8573
- Author: eastmohan22
- Created At: 2026-05-23T02:54:51Z

### Content

I have almost finished the CAD. Guess who spent 20+ minutes redoing key joints to a new PCB version AGAIN. One singular diode was in the way of the stabilizer so I had to reassign the joints for each key. I could have left it but I'm too much of a perfectionist for that. This diode is the culprit:
![Screenshot 2026-05-22 210919.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTg3NjYsInB1ciI6ImJsb2JfaWQifX0=--e4e318d9763c67436669473503fbc09b8225ea7e/Screenshot 2026-05-22 210919.png)
After that it was pretty smooth. I added the rest of the keycaps and got to work on the case. This is what I have so far. I will use M3 screws and heatset inserts to attach the lid and base. I will probably make it so there's an adjustable angle or something.
![Screenshot 2026-05-22 224826.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTg3NjgsInB1ciI6ImJsb2JfaWQifX0=--048a7757663dcf20b5cdad31a3d2822d5f216d35/Screenshot 2026-05-22 224826.png)
Cross-section:
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTg3NjksInB1ciI6ImJsb2JfaWQifX0=--61dc29721e42c2c79b2aab91e82faa17a0171ab2/image.png)
I also made sure to add a hole big enough for a USBC cable to power the keyboard:
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTg3NzAsInB1ciI6ImJsb2JfaWQifX0=--edbfe5d4a3343b1e61e7477d0cbfae502d2c4295/image.png)
Now I have to finish the case, which shouldn't take too long, learn and write firmware, find parts, add it to a repo, and actually build it.

### Recording Links

- https://lookout.hackclub.com/api/media/65dd4220-e81a-4afe-aa66-90ef5836489b/video.mp4

## Entry 10
- ID: 8653
- Author: eastmohan22
- Created At: 2026-05-23T14:11:17Z

### Content

I designed the top plate of the keyboard. I had forgotten yesterday that the switches should clip in to the top plate, so I had to change a lot to make that happen. The top plate is now 2mm thick. Hopefully its strong enough. It looks like the top goes too far down and interferes with the diode in this screenshot (red circle), but as can be seen in the green circle, KiCAD didn't place the diodes all the way down so it should actually be fine.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTg5NTcsInB1ciI6ImJsb2JfaWQifX0=--d488ee43e3cb89ac9927dbb6ad5e19074efa58ea/image.png)
I also adjusted the supports so they go high enough, as shown in this cross-section:
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTg5NTgsInB1ciI6ImJsb2JfaWQifX0=--3d82c35aa843bbef00596b77a1e374f2fb0a4dd3/image.png)
I just realized that I'm going to have to have more space for the OLED and the microcontroller in the top plate, as they currently overlap. I'll probably just have the microcontroller either entirely exposed or do a rounded bump to give it more space.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTg5NjQsInB1ciI6ImJsb2JfaWQifX0=--69d29ff7768699deb2e98bf3c1a7280211985fef/image.png)

Here is my full keyboard as of now:
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTg5NjMsInB1ciI6ImJsb2JfaWQifX0=--77f8b6561a603d71a7c19cda3edfeede50943ad4/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/1b03b4df-b864-4778-8205-d0c6c724f8c7/video.mp4

## Entry 11
- ID: 8736
- Author: eastmohan22
- Created At: 2026-05-23T21:19:10Z

### Content

I think I am now done with the CAD. I dealt with the overlap issue in the OLED and microcontroller. I was going to make this keyboard angled toward me but after some research showing that its not good I think I'll just leave it flat. I also filleted the edges around the whole keyboard and chamfered the front. I might add feet later.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTkxNjAsInB1ciI6ImJsb2JfaWQifX0=--f5f82cb9f782012bb184e7e3a00a492fc78b63e1/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTkxNjYsInB1ciI6ImJsb2JfaWQifX0=--f33ed9c4288f2a99d63403b066a45c48d8235085/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/a6a92138-4d95-4316-a175-61cece50a5c4/video.mp4
- https://lookout.hackclub.com/api/media/1fd0f22e-08cd-403a-9092-8bf21bc4a87b/video.mp4

## Entry 12
- ID: 8762
- Author: eastmohan22
- Created At: 2026-05-24T01:24:41Z

### Content

Who had the bright idea to make plate-mount and PCB-mount switches different? After doing some research I found out I used the wrong footprint in my PCB. I used the plate mount versions instead of PCB mount. I thought about leaving it as it was but this would have left the switches prone to more rotational movement, so now I'm fixing it by redoing the whole PCB. I'm trying to do it in a way that I can keep the CAD the same. I'll still probably move all of the switches to the new PCB version but I don't want to redo the whole case as well. The routing on this version is definitely less clean than the earlier one but it doesn't really matter. I should still be able to fit everything fine. Here's my progress so far:
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTkyOTYsInB1ciI6ImJsb2JfaWQifX0=--b3300d459991c8410fe2f69f3b0e232a7007dd11/image.png)
I still have some ratsnests to take care of but after that I'll find parts and write firmware.


### Recording Links

- https://lookout.hackclub.com/api/media/3e134529-85f8-4b2f-85ec-70769de1878a/video.mp4

## Entry 13
- ID: 9009
- Author: eastmohan22
- Created At: 2026-05-25T01:35:00Z

### Content

I finished routing the traces on the PCB and added everything to a repo. I haven't added the CAD of the case yet because Fusion wasn't letting me download those components for some reason. It said the STLs and 3MFs couldn't be generated. Here is the link to the repo: [https://github.com/eastmohan/custom-keyboard](https://github.com/eastmohan/custom-keyboard).
This is the new version of the PCB:

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTk5MzAsInB1ciI6ImJsb2JfaWQifX0=--c533182f1dc019d2b78be0d879ef88e5f24c7f36/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/075e45eb-1b33-4c99-b281-c417061d851f/video.mp4

## Entry 14
- ID: 9259
- Author: eastmohan22
- Created At: 2026-05-26T03:00:09Z

### Content

Now I should finally be done with the CAD. After having changed the footprints for the switches from plate-mount to PCB mount, I realized that the switch alignment was different from the old version. I didn't want to redo the case CAD so I instead moved the footprints around to be the same distance from the edges and then rerouted some traces. I then had to transfer the switch joints from one PCB version to another for hopefully the last time. Not much to look at for this journal.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjA1NTYsInB1ciI6ImJsb2JfaWQifX0=--460a4b74ad3fd83967cfa1f320ad04f8faa24d66/image.png)
There should be some visible changes in the PCB. What tipped me off about the different arrangement was when I imported the v4 step of the PCB into Fusion 360, the holes for the space bar stabilizer went over and interfered with the edge cut so it was one cut.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjA1NTgsInB1ciI6ImJsb2JfaWQifX0=--e4014aeddbfd384c021990ce2a2e0324eee6863b/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/8d3e94d0-971b-41ed-8b4b-b76ecde7a868/video.mp4
