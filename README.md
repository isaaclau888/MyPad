# MyPad
<img width="1427" height="793" alt="IMG_3893" src="https://github.com/user-attachments/assets/b3178990-44bb-413f-8b58-723989e60940" />


MyPad is a tiny, pocket-sized macro pad I designed to clear up my desk and speed up my workflow. It has 9 mechanical keys, a vertical screen, and a dial knob, all packed into a super clean layout inspired by the classic look of the original 2001 Apple iPod. Instead of having a massive grid of keys, MyPad relies on clever software. By using multiple code layers and custom shortcuts, this little 3x3 pad can handle everything from jumping through complex lines of code in VS Code to tweaking 3D models in Fusion 360, all without my hand ever leaving the controller.

## What's it for?
MyPad is a tiny, physical shortcut box for your desk that saves you from stretching your fingers across awkward keyboard shortcuts. It condenses repetitive tasks—like copy-pasting, opening a terminal, or switching layers—into single tactile clicks. Plus, the built-in screen keeps track of your settings while the dial knob gives you smooth, hands-on control over your music volume or timeline scrolling.

## How to build it?
Please print all the 3D parts. <p>
<img width="634" height="518" alt="螢幕截圖 2026-06-26 下午6 35 07" src="https://github.com/user-attachments/assets/8bc0b60d-edeb-4829-a220-4356ec2df615" />

# 3D Parts Assembly
Step 1: Solder the Base Electronics <br>
Solder all base components directly onto your PCB. This includes the Seeed Studio XIAO RP2040, the SSD1306 OLED Screen, the IN4148 Diodes, and the EC11 Rotary Encoder. Ensure they sit flat against the PCB surface before soldering. <p>
<img width="1358" height="862" alt="image" src="https://github.com/user-attachments/assets/83f4119e-9ea0-4abe-8ed0-11a9448bce03" />


Step 2: Prepare the Top Plate <br>
Take your top case part (which acts as your top switch plate). Push all of your mechanical switches into the 14.0mm x 14.0mm square cutouts from the top side until they click tightly into place. <p>
<img width="1756" height="974" alt="image" src="https://github.com/user-attachments/assets/6ced6822-5585-4629-b7d1-f6f6e9cfa985" />

Step 3: Combine and Solder the Switches <br>
Align the metal pins of the switches (now held in the top plate) with the empty switch holes on your PCB. Press the top plate assembly firmly down onto the PCB until the bottom of the switches rest flush against the PCB. Flip the assembly over and solder the switch pins from the back of the PCB. <p>
<img width="1432" height="874" alt="image" src="https://github.com/user-attachments/assets/ad5dd754-b64a-4840-8274-d4582cd15713" />

Step 4: Mount into the Bottom Case <br>
Place your fully soldered core assembly into the bottom case. Make sure the Seeed Studio XIAO's USB-C port aligns perfectly with the cutout pocket in the case wall, then secure the top and bottom halves together using your housing screws. <p>
<img width="1296" height="912" alt="image" src="https://github.com/user-attachments/assets/8ad4b344-022c-4ba1-b5a2-3bd913284d02" />

Step 5: Final Touches <br>
Push your keycaps onto the switch stems. Your MyPad is complete! <p>
<img width="1296" height="972" alt="image" src="https://github.com/user-attachments/assets/c60f3716-17b0-44c1-9f50-b173f5ba30e0" />

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
<img width="904" height="1350" alt="image" src="https://github.com/user-attachments/assets/4fbce4f2-b752-4fc7-9876-57e792af5feb" />

# BOM

|   |                                           |    |           |                 |          |        |              |              |              |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |                      |
|---|-------------------------------------------|----|-----------|-----------------|----------|--------|--------------|--------------|--------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------|
|   |Description                                |Item|Usage Count|Purchase Quantity|Unit Price|Subtotal|Price(HKD) [$]|Price(RMB) [$]|Price(USD) [$]|Link                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |Additional description|
|   |Electrical Components                      |    |           |                 |          |        |              |              |              |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |                      |
|   |PCB Board                                  |    |1          |1                |$54.86    |$54.86  |$54.86        |$47.39        |$7.00         |https://jlcpcb.com/                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |                      |
|   |Seeed Studio XIAO RP2040                   |    |1          |1                |$28.94    |$28.94  |$28.94        |$25.00        |$3.69         |https://item.taobao.com/item.htm?id=658626117798&spm=a312a.7700824.w4002-26059791966.9.60d933db6lhayb&skuId=5902864067685                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |                      |
|   |Cherry MX Switches                         |    |9          |1                |$23.15    |$23.15  |$23.15        |$20.00        |$2.95         |https://item.taobao.com/item.htm?id=615897479067&mi_id=0000G49e9UiDHmvNbZuIxEqx0hhavdGOtj9aIAB91MIe1Xs&skuId=5076329578956&spm=a21xtw.29978518.0.0&xxc=shop                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |                      |
|   |SSD1306 0.91 OLED 4pin 128x32              |    |1          |1                |$14.31    |$14.31  |$14.31        |$12.36        |$1.83         |https://detail.tmall.com/item.htm?abbucket=10&id=617450807815&pisk=haVnhu_M-U1gsNB9ovmTOubTxOCvjU4bu0dpUXrGUuUYpYRK9Y7uccd-p9ZRrRqzfvnEvwGoUurEUun8JXaINu_-M7NnbFu47BRr4GfKoQlPDiCozING2kpenp1eQVosrBJrLuua74nZ8pRz4ckZu4REabrz7N0ou4REavJZbq3oaLkeTVRZP2oyYQke_N0Sb0lraulNS4iZ4blPy6zhP04-iJ8sbs9JaQPhOv0fGcRyZ5D-KmRxjMB6dxMuxvVOtng3Qr0r-u1XOXkuL-lUZifn_rwTYVqPmLxE3LJkcPaLzK6NvZ48KxEwHtPGSrEQF8AerJj7BSa_ohIPiGN_xPaDY9j5dceYW5YADwwg7-FgcC7Vli4gYREBbtf8Z8NASmnW4YIpSA3NyNbM3-ME525ASNvWzvusSmQGSK5ZLVgFM&rn=3f79f2344ea3bbee7ca7e121c52b7942&skuId=5074992704097&spm=a312a.7700824.w4011-23941273512.47.1fdd6dcbe1g9gy|                      |
|   |Rotary Encoder EC11E Switch Vertical H20mm |    |1          |1                |$3.36     |$3.36   |$3.36         |$2.90         |$0.43         |https://detail.tmall.com/item.htm?abbucket=10&id=614080038092&pisk=hNdshEfvYFghm1fqL2bDZ8fgSs5vXnSV0EIA5MjTuAb4GpTJxZ5qmEQvGn-dgtnG_ItBk3gGucA2drTkA2oraZqgFbfu65FT0wId7m46wDhySFjczpXtdKPL3N73HSKABMeduMFTHiKA9MQlv5QY6sIKRZjdDsBADXhdoNFTXsCxRJQVyiEAMsILJZb1ksCvDe3CoMQOMsKvJ2_cyKRKqPLrkzj1SqPPCgLKKSenuNCPVFCzTWzc5EXbYsVtNMpwHC5p6D3O9UveXw1SGr_BFeCO5ncus1LJJKKFHSy9gsot5E8JyQeolXnBoe9kJ-ckGdKCaCYzSjDS2CYfthrZJYiJOB-CLfqqeBpDbExYKXRKeBLBUKemgCokLLR6sRh9n-czJyKHBFw2qOQh8muIR88cBwbC52gQn-XO-w5IR2wyo&rn=da8786ba5e99918c28a8c938c6b7e189&spm=a312a.7700824.w4011-23941273512.42.49ed6dcbJybH2l&skuId=4495430251556|                      |
|   |1u Keycaps                                 |    |9          |1                |$11.58    |$11.58  |$11.58        |$10.00        |$1.48         |https://item.taobao.com/item.htm?id=739962388435&spm=a312a.7700824.w4002-15015765193.11.7d6ea607QcT1D0&skuId=5107854577164                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |                      |
|   |IN4148 switching diodes, through-hole DO-35|    |9          |1                |$5.33     |$5.33   |$5.33         |$4.60         |$0.68         |https://detail.tmall.com/item.htm?abbucket=10&id=41209807837&pisk=ha7Se2Td3yXyKUYU0SY1krYoZe8pJ9JeL6ppNKv-87XERpBRNHHyzHPBOK1947XFLi9CHt9RzuvERv6ATb-d8p7BreYdSGHN3Y4v9CzEJpd-qzUa2Rya7yixSKyCT0FfAtnvsKd-yBK8GmdeTedpweFXHBOMp4BpJS1vnBo-yLpJkKdBwbLpp3KAMQRJpY3pexFXtKdJw9LLGEpD9epdpeQ8GZeiw8nmTpdTTV-WBsEmJxNewFv1wC0jlDA5tHiXC4U6HgSdzEQ8H7LAsiWJGFaIOIs1MUd5KP0ky1CAvHSm80Qe8yyFqs5NKxaQXZfl1TjxZ5q7T1YRb6mzV74FzEQR0jr1R-JAaU-_o2qNrwWPn9Umpl_dy6SB0XiV2Rppu6CIgVSnxPlxMt4QECBp2IA4LSNjb6xJiIO7GSinx3dDgENbGc5h.&rn=cc2dcf6003a317450cddac3927fc9ef0&spm=a312a.7700824.w4011-25323366171.258.76c21ebbyisjSf            |                      |
|   |                                           |    |           |                 |Total     |        |$141.53       |$122.25       |$18.06        |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |                      |

# Fallout Zine 
<img width="4405" height="6250" alt="MyPad Fallout Zine" src="https://github.com/user-attachments/assets/5ffb7425-fb5d-45fd-8981-7320aeeb0fdf" />

