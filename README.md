# MyPad
<img width="1920" height="1080" alt="MyPad_2026-Jun-19_06-44-27AM-000_CustomizedView24469008913_png" src="https://github.com/user-attachments/assets/c14ba546-884d-4e9b-bed3-4cd9e979e282" />

MyPad is a tiny, pocket-sized macro pad I designed to clear up my desk and speed up my workflow. It has 9 mechanical keys, a vertical screen, and a dial knob, all packed into a super clean layout inspired by the classic look of the original 2001 Apple iPod. Instead of having a massive grid of keys, MyPad relies on clever software. By using multiple code layers and custom shortcuts, this little 3x3 pad can handle everything from jumping through complex lines of code in VS Code to tweaking 3D models in Fusion 360, all without my hand ever leaving the controller.

## What's it for?
MyPad is a tiny, physical shortcut box for your desk that saves you from stretching your fingers across awkward keyboard shortcuts. It condenses repetitive tasks—like copy-pasting, opening a terminal, or switching layers—into single tactile clicks. Plus, the built-in screen keeps track of your settings while the dial knob gives you smooth, hands-on control over your music volume or timeline scrolling.

## How to build it?
Please print all the 3D parts. <p>
<img width="687" height="591" alt="螢幕截圖 2026-06-25 下午7 32 03" src="https://github.com/user-attachments/assets/77073eb0-cadf-4cc1-ad34-52ed1c5da282" />

# 3D Parts Assembly
First, place the bottom part. <p>
<img width="622" height="404" alt="螢幕截圖 2026-06-25 下午7 37 55" src="https://github.com/user-attachments/assets/61c2a1cd-c9a4-461c-a957-bfa4cd6962cb" />

Secondly, place the soldered PCB, which has all the parts(Seeed Studio XIAO RP2040, Cherry MX Switches, SSD1306 0.91 OLED 4pin 128x32, Rotary Encoder EC11E Switch Vertical H20mm, IN4148 switching diodes, through-hole DO-35), inside the bottom case. <p>
<img width="728" height="480" alt="螢幕截圖 2026-06-25 下午7 38 59" src="https://github.com/user-attachments/assets/5de635a1-a325-4812-9be5-2d1b2e2c5a59" />

Then, place the top part to combine with the bottom part. <p>
<img width="727" height="486" alt="螢幕截圖 2026-06-25 下午7 40 54" src="https://github.com/user-attachments/assets/a6791ad8-f44e-44e1-a54d-a7326a559b34" />

Last but not least, place the keycaps on the switches. <p>
<img width="727" height="492" alt="螢幕截圖 2026-06-25 下午7 39 18" src="https://github.com/user-attachments/assets/f90aadc7-dd58-497a-8019-d34776cb6d94" />

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
