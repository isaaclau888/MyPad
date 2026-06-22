# MyPad
<img width="1920" height="1080" alt="MyPad_2026-Jun-19_06-44-27AM-000_CustomizedView24469008913_png" src="https://github.com/user-attachments/assets/c14ba546-884d-4e9b-bed3-4cd9e979e282" />

MyPad is a tiny, pocket-sized macro pad I designed to clear up my desk and speed up my workflow. It has 9 mechanical keys, a vertical screen, and a dial knob, all packed into a super clean layout inspired by the classic look of the original 2001 Apple iPod. Instead of having a massive grid of keys, MyPad relies on clever software. By using multiple code layers and custom shortcuts, this little 3x3 pad can handle everything from jumping through complex lines of code in VS Code to tweaking 3D models in Fusion 360, all without my hand ever leaving the controller.

## What's it for?
MyPad is a tiny, physical shortcut box for your desk that saves you from stretching your fingers across awkward keyboard shortcuts. It condenses repetitive tasks—like copy-pasting, opening a terminal, or switching layers—into single tactile clicks. Plus, the built-in screen keeps track of your settings while the dial knob gives you smooth, hands-on control over your music volume or timeline scrolling.

## How to build it?
Please print all the 3D parts. <p>
<img width="577" height="513" alt="螢幕截圖 2026-06-22 下午11 59 37" src="https://github.com/user-attachments/assets/16538181-7eb8-454f-96a5-77d7714ef69f" />

# 3D Parts Assembly
First, place the bottom part. <p>
<img width="774" height="500" alt="螢幕截圖 2026-06-20 上午4 15 17" src="https://github.com/user-attachments/assets/7268b6da-7737-4be1-b28f-7a6dd1bcd31c" />

Secondly, place the soldered PCB, which has all the parts(Seeed Studio XIAO RP2040, Cherry MX Switches, SSD1306 0.91 OLED 4pin 128x32, Rotary Encoder EC11E Switch Vertical H20mm, IN4148 switching diodes, through-hole DO-35), inside the bottom case. <p>
<img width="840" height="550" alt="螢幕截圖 2026-06-20 上午4 34 25" src="https://github.com/user-attachments/assets/05fc515a-0288-4e29-bba0-a67f1d46c4f1" />

Thirdly, place the screws in the PCB holes and screw them into the bottom part.
<img width="392" height="546" alt="螢幕截圖 2026-06-22 下午11 51 02" src="https://github.com/user-attachments/assets/e5814b33-ffc8-4c1a-a118-e9ae23d614dd" />

Then, place the top part to combine with the bottom part. <p>
<img width="840" height="546" alt="螢幕截圖 2026-06-20 上午4 34 57" src="https://github.com/user-attachments/assets/dcb264a3-2df3-415f-88e9-46f44c98b338" />

Last but not least, place the keycaps on the switches. <p>
<img width="765" height="498" alt="螢幕截圖 2026-06-20 上午4 35 57" src="https://github.com/user-attachments/assets/630b656d-721a-451c-b6e3-3f3c51bce57b" />

## How to Install Firmware?

1. Copy Folder to QMK
Clone this repository, then copy or move the **`MyPad Firmware`** folder into your local QMK directory:
`qmk_firmware/keyboards/`

2. Compile the Code
Open your terminal inside your `qmk_firmware` folder and run this command: qmk compile -kb "MyPad Firmware" -km default <p>
(Make sure to keep the quotation marks around the folder name in your terminal so it reads the space correctly!) This creates a file named `mypad_firmware_default.uf2`.

3. Flash the RP2040

4. Unplug the USB-C cable from your MyPad.
  
5. Hold down the physical **BOOTSEL** button on the tiny XIAO board while plugging the cable back into your computer.

6. A folder named **RPI-RP2** will pop up on your computer like a regular USB flash drive.

7. Drag and drop the `.uf2` file right into that folder. <p>

The drive will automatically close itself, and your MyPad is ready to go!

## Why did I make it?
I decided to make this because I want a custom keyboard that works like a Stream Deck.

## How I made it?
I used Fusion 360 to make the case, VS Code and Terminal for the coding part, KiCad for the PCB board and last but not least, the parts from the BOM.

# Schematic and PCB
<img width="3508" height="2481" alt="MyPad Schematic" src="https://github.com/user-attachments/assets/bdf41fe3-e315-4ad6-a3d9-16f2b7a71548" />
<img width="338" height="510" alt="螢幕截圖 2026-06-22 下午11 47 45" src="https://github.com/user-attachments/assets/0fce37ea-ceda-49bf-a5c4-945138e468c9" />

# Fallout Zine 
<img width="4405" height="6250" alt="MyPad Fallout Zine" src="https://github.com/user-attachments/assets/a04dc668-1bd8-418b-a96e-9f1f3d41a9d8" />
