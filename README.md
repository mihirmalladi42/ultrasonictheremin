This project is a 3D-printed + Arduino-based circuit project that mimics the theremin instrument. The theremin is a no-contact instrument that uses electromagnetic fields to generate volume and pitch.
This version aims to use ultrasonic sensors to find distance.

To use this project, assemble the four parts. The T-joint and cropped tube should connect, and the curved tube and T-joint should connect so that the curved tube sticks upwards, the middle joint of the T-joint faces away, and the cropped tube's hole should face upwards.
Put all electronics in the small box and the Arduino Uno in the larger box. Wire all the components together as shown in the circuit diagram, and run wires through the tubes so they go from an end of the tube to the arduino. Connect them as shown in the circuit diagram.
Rest the ultrasonic sensors on the rests at the ends of each tube, and power the arduino. Increasing the distance with your left hand from the sensor on the tube sticking up will increase the pitch. Increasing the distance with your right hand from the sensor on the tube lying flat will increase the volume.

I made this project since I am new to 3D modeling and circuit building. I figured this would be a fun project that would give nice results, and watching a video on the theremin hooked me into making one myself. This project was a very big challenge since I am new to hardware and 3D modeling.
Overall, this project was a very difficult challenge since I had to learn about electronics, parts, and different modeling softwares from scratch. It was a very fun experience, and I hope to create more with Blueprint!
------------------------------------------------------------------------------------------
Fully Assembled:
<img width="1038" height="614" alt="Screenshot 2026-03-07 at 5 18 17 PM" src="https://github.com/user-attachments/assets/4cd9c7b1-b9fe-45dc-b1bd-c5e76493e140" />


CNV BOM:



Quantity,Component,Link,Price
1,Arduino Uno R3,https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/ref=sr_1_1?crid=3F06N52WCSVMB&dib=eyJ2IjoiMSJ9.MazmhFfn-DF8W5oyX_S-tPdVrhVady4ZAklWxuOPi75hnZG5eudwvsegtvpf1bp45AeCVclZAzSeiThek3KQ4tAcotqhskcRJAGEZ-tUUDm53P2D101ZQw7Vqhfq3FKVbmmv3q4C8lpNlq0LVldWMuKWesu0M3fsRDlcTH7aYGEQ9Qc6rnql0tulZyhElZ7_mMzcBNZuGjHYi7NIoWVkm6CHMoIemMBT5Wn7XLY6jeU.D3xQJ5E6U7RFUzEYKQ566a94m0ktxfwRaRmIqC1lNMI&dib_tag=se&keywords=arduino%2Buno%2Br3&qid=1772925071&sprefix=arduino%2Buno%2Br3%2Caps%2C158&sr=8-1&th=1,27.6
2,Ultrasonic Distance Sensor (4-pin),https://www.amazon.com/WWZMDiB-HC-SR04-Ultrasonic-Distance-Measuring/dp/B0B1MJJLJP/ref=sr_1_3?crid=3DOSA28VKFI50&dib=eyJ2IjoiMSJ9.mgMH4aBu9pFOM1LCMI_ZRrBjONidPRd0tD0hE5DsuqEBpT6VawmO2XqGG5A1L95AFp2JjMbFY79OC9aRTK-48zt7h3J-obp8rkydfLGP2qMRqySDas6Xdm8MMo2c5CauOJRxF2EZMlUfWxoRrZT2cVRbABPIMUFBAy0zDiFvKWbX0-p_YMUkN4JfrEodWUWmEbVXDeifLhCRT6CxI4g0_dX0s2LI6L9WUf-xMlUiuhQ.50QsXzmN7JGsMVyLx79JjGi3HccHWxOArhO_5fjL8H4&dib_tag=se&keywords=ultrasonic%2Bdistance%2Bsensor%2B4%2Bpin&qid=1772925105&sprefix=ultrasonic%2Bdistance%2Bsensor%2B4%2Bpi%2Caps%2C156&sr=8-3&th=1,6.99
1,Piezo,https://www.amazon.com/Cylewet-Terminals-Electronic-Electromagnetic-Impedance/dp/B01NCOXB2Q/ref=sr_1_2?crid=2Z003OEVRZRVX&dib=eyJ2IjoiMSJ9.M4_Rpr6MoAGjrkE4n-raigZOoI9Exa1vIJl6TKg1MIi3NvMQycl_X_s1sZcmBGmS5MG4LNbZJjcVJRSVngMF1NjX2pxaDdNXVIW_t5HP9JeUCK3uMOx35C4Zlcm57dOD5dfkopUxzTsQVkyrzVMR_mkod47yjB3mKdHRSQGV9hXrzLMHePi3dT405sjFOHkFLt1jkRmrHRJHlxar8tC2hi2lclTs-X4bGwtQ4Iu7emk.zkSE08u66gFoee-KqDDmkv3iBXheQsDDYBUHx7XpjwU&dib_tag=se&keywords=passive+piezo+buzzer&qid=1772925194&sprefix=passive+piezo+buzzer%2Caps%2C142&sr=8-2,5.99
1,NPN Transistor (BJT),https://www.amazon.com/BOJACK-2N2222-General-Purpose-Transistors/dp/B07T61M92G/ref=sr_1_1?crid=7OV16DRPVFR5&dib=eyJ2IjoiMSJ9.9IgFGJd0QLFiVe0dHPauK8CVTGq0ZvlsZditN8WHh7RPEDzerYapdKOTGlPwckVaRVdFAOXYVffqUOIeqwPeDAPhmVnM09maLbIIOMY0IOJFrOfckFoWEdBwziW_NOp9cjAeR9gHhf-OjEkRc5f7MXHOn4PnF3PJB2OksyGEkDTwW7HgcBugRPaFl1xWeAlJ4FovhUBhLdYjC1kbvhQbKTpc_Dg0G4o2ryuy2E7jv7g.X0qn7EF8_4eywTncRfhrDUBZuY83fnTk_w4zbi2Sabg&dib_tag=se&keywords=npn+transistor+bjt&qid=1772925323&sprefix=npn+transistor+bjt%2Caps%2C197&sr=8-1,6.99
2,1 kΩ Resistor,https://www.amazon.com/California-JOS-Carbon-Resistor-Tolerance/dp/B0BR6JNM1M/ref=sr_1_3?crid=35TJ193E23RRJ&dib=eyJ2IjoiMSJ9.7BlRpJRlXQDCMk4ChUFOwbx2owBlWPxdCm0ovTKmNsotTEfzPNT4dzZQ6pBR-fpcgaN7BHwNHAJntKSKJI_IYrcvXDgo6lfyDsHkUdtK3fnJkcDqeuPEz7B_IXSCZeDjUToTtCQ-_y5ZGqEaHI8CmXgLhLNI7kFOowhpIoAeRl527-tsTpJ6VWxqwwFl2io8W7s78kGW4XczBLkoKIMle9DdeFJkxEo-8T6y6LdJYzU.vTgELjoWXumkcYTGnDxr_beFYe4YWrNbdsVD0bzkPfE&dib_tag=se&keywords=1%2Bkiloohm%2Bresistor&qid=1772925402&sprefix=kiloohm%2B%2Caps%2C208&sr=8-3&th=1,3.99
1,Slideswitch,https://www.amazon.com/SS12F15-Position-Vertical-Electronic-Projects/dp/B0FNRDWD4B/ref=sr_1_2_sspa?crid=GL70AH3QO0I7&dib=eyJ2IjoiMSJ9.cA96i67fX-tXx0WQYT5mzSCT1LJcwJS4AWOKb7BH3iYzclBQQ78uqx66cy1yF-bBKen21v0GH5Xnfkzv91epJd1PPFoVrbk3xMVGifBl2TiXfGb6szD51M5r0eTLfaURaKhuEF_j5gpeYKlFQ5qIdg.Dwq2eCi3Byvhktys_HLEdb319yklrHNIRso6_JCoHIM&dib_tag=se&keywords=slideswitch&qid=1772925478&refinements=p_36%3A-600&rnid=2661611011&sprefix=slideswitch%2Caps%2C213&sr=8-2-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1,4.99
1,LCD 16x2,https://www.amazon.com/Display-Module-Backlight-Arduino-MEGA2560/dp/B07T8ZG5D1/ref=sr_1_2?crid=6OTYVY4FRGW8&dib=eyJ2IjoiMSJ9.iIhx7vksQpbjvjPtgDItJG46nWm8xvL9xQZOS9YRecRQ-XrH6puWg7rHLvnvW7l5cGWGDh_lv2J_UjPPkLC6i3xAObH0Md9WA0Pcjx12rTMWdQIif9YPQ_9uxoNMNNjJYAfvi3y64wyS2PLn8al_x6xOjOaX1sH3oYjxKtCMTTaxCdvBthL5E6AiFh0z4k94bEVJBZp4HoGoNTC-WnCq5fVwI8U0VygZYkbU5l5UMWw.Uh-_XNX-tHnNDr0Y1o1-CaCchCa55ThEKP6fQqkODGY&dib_tag=se&keywords=PCF8574-based%2C+32+%280x20%29+LCD+16+x+2+%28I2C%29&nsdOptOutParam=true&qid=1772929108&sprefix=lcd+16x2%2Caps%2C218&sr=8-2,9.99
1,Wires,https://www.amazon.com/California-JOS-Breadboard-Optional-Multicolored/dp/B0BRTJQZRD/ref=sr_1_1?crid=EKBZVGNYGJPC&dib=eyJ2IjoiMSJ9.urRUqWt0ag6Vi-qn73oEAprY3AuDu4_s1uGjVauGk7nQ_CGKdYteYyVPMi_gN9uzyfaF-AiLXkeR9u2jcOrfcPWsVEAUjeYtXVx2lCaQoH4BLFYT-ou3IVta0_HbvN4MZU3Li-B51v5sHd62onyfUyO0vZDs-Pc9t3Ab98a4ogYEg7wBGIaxD3ECtAg7_P79oqwOIvdvF6JBR39na9fX9oQ_hw5N-TAJ-nA_d7fPZZQ.y2TzsmyErZmTtEr5OR7sTo4ngPkXAqP2-C6qLaBlWo4&dib_tag=se&keywords=arduino%2Bwires%2Bmale%2Bto%2Bmale&qid=1772929636&sprefix=arduino%2Bwires%2Bmale%2Bto%2Bmal%2Caps%2C149&sr=8-1&th=1,3.99
,,Subtotal,70.53
,,Tax,4.94
,,Total for Electronics,75.47
,,,
1,3D Print,Printed by the_idk,5.52
,,Total,80.99



Model:
<img width="1260" height="925" alt="Screenshot 2026-03-07 171422" src="https://github.com/user-attachments/assets/d1f9725e-5e6d-4881-9e4f-1c91f4d7cbb7" />

Wiring Diagram:
<img width="802" height="520" alt="Screenshot 2026-03-07 at 7 37 45 PM" src="https://github.com/user-attachments/assets/352e0b86-1af7-4650-9cb6-2ff1c802b8ce" />

Circuitry Design:
https://www.tinkercad.com/things/gXzKhd10P43-theremin?sharecode=ZcgeSWRlYZF_XOO76yfucLzvy34Cqi3Yw_LQSyM3c1M

3D Modeling:
https://www.tinkercad.com/things/0xfbQ4cIIBW-3d-theremin-model?sharecode=ovt83WvaYsupHMJR1KmqzfSi7klXqXpnrTOYHmw2ORY


