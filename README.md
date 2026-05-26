# custom-keyboard
This is a custom keyboard using KB2040 board. 

I am making this because I prefer using a keyboard to work at home rather than the one built in to my computer. The only keyboard I have is an old, somewhat broken membrane keyboard so I figured I'd try to make a custom mechanical one. I previously made a custom macropad, so I thought this would be a cool next step.

**Schematic**
<img width="1881" height="1346" alt="image" src="https://github.com/user-attachments/assets/10bfc824-0ac6-4c30-a5c0-970818b297f5" />
**PCB**
<img width="1700" height="582" alt="image" src="https://github.com/user-attachments/assets/731a25e4-05ee-47a3-a628-1966377b26c0" />
**Case CAD**
<img width="1741" height="1061" alt="image" src="https://github.com/user-attachments/assets/cd74bd13-0546-4c18-9409-c4d3add19b32" />
**BOM**
|Part|Source|Quantity|Cost Each|Total Cost|Link|
|---|---|---|---|---|---|
|Keycaps|Keychron|1|$39.99|$39.99|[Link](https://www.keychron.com/collections/cherry-profile-double-shot-pbt-keycaps/products/iso-cherry-profile-dye-sub-pbt-full-set-keycap-set-modern-blue)|
|Switches|Kinetic Labs|4|$5.04|$20.16|[Link](https://kineticlabs.com/switches/gateron/gateron-grayish-switches)|
|KB2040 Microcontroller|Adafruit|1|$8.95|$8.95|[Link](https://www.adafruit.com/product/5302)|
|USBC to USBA Cable|Amazon|1|$7.99|$7.99|[Link](https://www.amazon.com/Braided-Charging-iPhone-Samsung-Galaxy/dp/B0DPMQ7291/ref=sr_1_4?crid=1SV9OQJ048SWS&dib=eyJ2IjoiMSJ9.1t_2XikISDzveg5nagPE0osNztl9bqwsHxHaHrGNq6hm7c9BJ_g8DJaeP1sEOdZtq3GrKx_aNwRnCAJOK7a4xJjF3GMVWhFA84iwxPCt5IJeXU6zeOU8oJurPdHROuHPUsCsTca_lrhLE9L4tWy0N4hVSOnbrXtH1Ri7jv9zJy1u3zTaOMaxk9RhAfsR8RmF5K1eOlQCSqZNy2EQK8HV9HiO4tE7u-m53guYARivf1k.ZMKklFA6W2eYaHiiWo_QT39ANmk60e5_CI-Pl7Umad4&dib_tag=se&keywords=usbc%2Busb%2Bcable%2B2%2Bfeet&qid=1779670729&sprefix=usbc%2Busba%2Bcable%2B2%2Bfe%2Caps%2C183&sr=8-4&th=1)|
|Diodes|Aliexpress|1|$12.53|$12.53|[Link](https://www.aliexpress.us/item/3256807937287294.html?spm=a2g0o.productlist.main.10.4a48236dlb1ulY&algo_pvid=7bcbbf45-a950-43e8-8da5-f85b5c0ce52b&algo_exp_id=7bcbbf45-a950-43e8-8da5-f85b5c0ce52b-9&pdp_ext_f=%7B%22order%22%3A%2228%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%2112.53%216.26%21%21%2184.81%2142.40%21%402103128917796710031653240e40c9%2112000043887291867%21sea%21US%217284814403%21X%211%210%21n_tag%3A-29919%3Bd%3A65aee796%3Bm03_new_user%3A-29895&curPageLogUid=lxjO2qs5uYjp&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008123602046%7C_p_origin_prod%3A)|
|0.91" OLED|Aliexpress|1|$2.89|$2.89|[Link](https://www.aliexpress.us/item/3256808615612857.html?spm=a2g0o.productlist.main.1.5f15WDCOWDCO9U&algo_pvid=a1ccd8df-943e-468a-b3d0-372a8e1068db&algo_exp_id=a1ccd8df-943e-468a-b3d0-372a8e1068db-0&pdp_ext_f=%7B%22order%22%3A%2275%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%212.89%212.89%21%21%2119.54%2119.54%21%40210311cc17796710867325070ef3b7%2112000046723121361%21sea%21US%217284814403%21X%211%210%21n_tag%3A-29919%3Bd%3A65aee796%3Bm03_new_user%3A-29895&curPageLogUid=SMtCSefS9n5l&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008801927609%7C_p_origin_prod%3A)|
|M3 Heatset Insert, OD 4.2mm|Aliexpress|1|$3.60|$3.60|[Link](https://www.aliexpress.us/item/3256803396040989.html?spm=a2g0o.productlist.main.1.12841c1fxjyqbd&algo_pvid=59fb9b6a-9e77-4cc9-a433-e1661f4e88bf&algo_exp_id=59fb9b6a-9e77-4cc9-a433-e1661f4e88bf-0&pdp_ext_f=%7B%22order%22%3A%2266511%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%212.22%210.99%21%21%2115.02%216.70%21%402101e80317796711398037554ee987%2112000026370649739%21sea%21US%217284814403%21X%211%210%21n_tag%3A-29919%3Bd%3A65aee796%3Bm03_new_user%3A-29895%3BpisId%3A5000000205925297&curPageLogUid=5DKc8jmBy4oP&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005003582355741%7C_p_origin_prod%3A)|
|Stabilizers|Aliexpress|1|$5.92|$5.92|[Link](https://www.aliexpress.us/item/3256801499984864.html?spm=a2g0o.productlist.main.2.7da2zb90zb90Le&algo_pvid=30dd5091-d972-4682-929c-91c60e420566&algo_exp_id=30dd5091-d972-4682-929c-91c60e420566-1&pdp_ext_f=%7B%22order%22%3A%22291%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%215.92%213.22%21%21%215.92%213.22%21%402103129017796716912624545e465f%2112000017133740377%21sea%21US%217284814403%21X%211%210%21n_tag%3A-29919%3Bd%3A65aee796%3Bm03_new_user%3A-29895%3BpisId%3A5000000204411062&curPageLogUid=MbHZPmZU1SUn&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005001686299616%7C_p_origin_prod%3A)|

<img width="1410" height="2000" alt="zine_page" src="https://github.com/user-attachments/assets/ff1c6f58-b163-4e46-9dbb-59f6780a69cf" />

