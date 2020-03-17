EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "AVRist watch"
Date "2020-03-08"
Rev "2"
Comp "Florian Winkler"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Timer_RTC:DS3231MZ U5
U 1 1 5E64F04B
P 6850 4350
F 0 "U5" H 6850 3861 50  0000 C CNN
F 1 "DS3231MZ" H 6850 3770 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 6850 3850 50  0001 C CNN
F 3 "http://datasheets.maximintegrated.com/en/ds/DS3231M.pdf" H 6850 3750 50  0001 C CNN
	1    6850 4350
	1    0    0    -1  
$EndComp
$Comp
L Connector:USB_B_Micro J1
U 1 1 5E652A6D
P 1200 2250
F 0 "J1" H 1257 2717 50  0000 C CNN
F 1 "USB_B_Micro" H 1257 2626 50  0000 C CNN
F 2 "" H 1350 2200 50  0001 C CNN
F 3 "~" H 1350 2200 50  0001 C CNN
	1    1200 2250
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0101
U 1 1 5E6552A2
P 1200 2800
F 0 "#PWR0101" H 1200 2550 50  0001 C CNN
F 1 "GND" H 1205 2627 50  0000 C CNN
F 2 "" H 1200 2800 50  0001 C CNN
F 3 "" H 1200 2800 50  0001 C CNN
	1    1200 2800
	1    0    0    -1  
$EndComp
Wire Wire Line
	1200 2650 1200 2800
$Comp
L Device:LED D1
U 1 1 5E65E280
P 2200 2200
F 0 "D1" V 2239 2083 50  0000 R CNN
F 1 "LED" V 2148 2083 50  0000 R CNN
F 2 "" H 2200 2200 50  0001 C CNN
F 3 "~" H 2200 2200 50  0001 C CNN
	1    2200 2200
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR0102
U 1 1 5E682574
P 3500 2800
F 0 "#PWR0102" H 3500 2550 50  0001 C CNN
F 1 "GND" H 3505 2627 50  0000 C CNN
F 2 "" H 3500 2800 50  0001 C CNN
F 3 "" H 3500 2800 50  0001 C CNN
	1    3500 2800
	1    0    0    -1  
$EndComp
Wire Wire Line
	2200 2350 2200 2450
Wire Wire Line
	2200 2750 2200 2850
$Comp
L Device:R R3
U 1 1 5E6848DD
P 3500 2500
F 0 "R3" H 3570 2546 50  0000 L CNN
F 1 "10K" H 3570 2455 50  0000 L CNN
F 2 "" V 3430 2500 50  0001 C CNN
F 3 "~" H 3500 2500 50  0001 C CNN
	1    3500 2500
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0103
U 1 1 5E685387
P 1800 2500
F 0 "#PWR0103" H 1800 2250 50  0001 C CNN
F 1 "GND" H 1805 2327 50  0000 C CNN
F 2 "" H 1800 2500 50  0001 C CNN
F 3 "" H 1800 2500 50  0001 C CNN
	1    1800 2500
	1    0    0    -1  
$EndComp
$Comp
L Device:C C3
U 1 1 5E68602E
P 4000 2200
F 0 "C3" H 4115 2246 50  0000 L CNN
F 1 "4.7u" H 4115 2155 50  0000 L CNN
F 2 "" H 4038 2050 50  0001 C CNN
F 3 "~" H 4000 2200 50  0001 C CNN
	1    4000 2200
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0104
U 1 1 5E687933
P 4000 2500
F 0 "#PWR0104" H 4000 2250 50  0001 C CNN
F 1 "GND" H 4005 2327 50  0000 C CNN
F 2 "" H 4000 2500 50  0001 C CNN
F 3 "" H 4000 2500 50  0001 C CNN
	1    4000 2500
	1    0    0    -1  
$EndComp
Text Notes 3700 3000 0    50   ~ 0
I_bat = 1000 / R_prog = 100 mA\nR_prog = 10 K
Text Notes 2600 7400 0    50   ~ 0
// buttons\nPD3 (INT1) - BTN2\nPD2 (INT0) - BTN1\n\n// I²C bus\nPC5 (SCL) - SCL\nPC4 (SDA) - SDA\n\n// display\nPD0 - DISP_RST\n\n// SPI bus\nPB5 (SCK) - SCK\nPB4 (MISO) - MISO\nPB3 (MOSI) - MOSI\nPC6 (RESET#) - RESET\n
$Comp
L power:VCC #PWR0105
U 1 1 5E69CA8E
P 1800 3400
F 0 "#PWR0105" H 1800 3250 50  0001 C CNN
F 1 "VCC" H 1817 3573 50  0000 C CNN
F 2 "" H 1800 3400 50  0001 C CNN
F 3 "" H 1800 3400 50  0001 C CNN
	1    1800 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	1800 3400 1800 3500
$Comp
L MCU_Microchip_ATmega:ATmega328P-AU U1
U 1 1 5E656D98
P 1800 5100
F 0 "U1" H 1800 3511 50  0000 C CNN
F 1 "ATmega328P-AU" H 1800 3420 50  0000 C CNN
F 2 "Package_QFP:TQFP-32_7x7mm_P0.8mm" H 1800 5100 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega328_P%20AVR%20MCU%20with%20picoPower%20Technology%20Data%20Sheet%2040001984A.pdf" H 1800 5100 50  0001 C CNN
	1    1800 5100
	1    0    0    -1  
$EndComp
Text GLabel 3150 5400 2    50   Input ~ 0
RESET
Text GLabel 2600 5300 2    50   Input ~ 0
SCL
Text GLabel 2600 5200 2    50   Input ~ 0
SDA
Text GLabel 2600 5800 2    50   Input ~ 0
BTN1
Text GLabel 2600 5900 2    50   Input ~ 0
BTN2
Wire Wire Line
	2400 5900 2600 5900
Wire Wire Line
	2400 5800 2600 5800
Wire Wire Line
	2400 5300 2600 5300
Wire Wire Line
	2400 5200 2600 5200
Text GLabel 2650 4200 2    50   Input ~ 0
MISO
Text GLabel 2650 4300 2    50   Input ~ 0
MOSI
Text GLabel 2650 4400 2    50   Input ~ 0
SCK
Wire Wire Line
	2400 4400 2650 4400
Wire Wire Line
	2400 4300 2650 4300
Wire Wire Line
	2400 4200 2650 4200
$Comp
L power:GND #PWR0106
U 1 1 5E6BE7DE
P 1800 6900
F 0 "#PWR0106" H 1800 6650 50  0001 C CNN
F 1 "GND" H 1805 6727 50  0000 C CNN
F 2 "" H 1800 6900 50  0001 C CNN
F 3 "" H 1800 6900 50  0001 C CNN
	1    1800 6900
	1    0    0    -1  
$EndComp
Wire Wire Line
	1800 6600 1800 6900
NoConn ~ 1200 3900
NoConn ~ 1200 4100
NoConn ~ 1200 4200
$Comp
L power:GND #PWR0107
U 1 1 5E6C7611
P 4900 4950
F 0 "#PWR0107" H 4900 4700 50  0001 C CNN
F 1 "GND" H 4905 4777 50  0000 C CNN
F 2 "" H 4900 4950 50  0001 C CNN
F 3 "" H 4900 4950 50  0001 C CNN
	1    4900 4950
	1    0    0    -1  
$EndComp
Wire Wire Line
	4150 4800 4900 4800
Wire Wire Line
	4900 4950 4900 4800
$Comp
L Device:R R4
U 1 1 5E6CCACB
P 4150 3950
F 0 "R4" H 4220 3996 50  0000 L CNN
F 1 "10K" H 4220 3905 50  0000 L CNN
F 2 "" V 4080 3950 50  0001 C CNN
F 3 "~" H 4150 3950 50  0001 C CNN
	1    4150 3950
	1    0    0    -1  
$EndComp
$Comp
L Device:R R6
U 1 1 5E6D05C8
P 4900 3950
F 0 "R6" H 4970 3996 50  0000 L CNN
F 1 "10K" H 4970 3905 50  0000 L CNN
F 2 "" V 4830 3950 50  0001 C CNN
F 3 "~" H 4900 3950 50  0001 C CNN
	1    4900 3950
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR0108
U 1 1 5E6D09D5
P 4150 3650
F 0 "#PWR0108" H 4150 3500 50  0001 C CNN
F 1 "VCC" H 4167 3823 50  0000 C CNN
F 2 "" H 4150 3650 50  0001 C CNN
F 3 "" H 4150 3650 50  0001 C CNN
	1    4150 3650
	1    0    0    -1  
$EndComp
Wire Wire Line
	4150 3650 4150 3800
Wire Wire Line
	4150 3800 4900 3800
Connection ~ 4150 3800
Wire Wire Line
	4150 4100 4150 4150
Wire Wire Line
	4900 4100 4900 4150
Text GLabel 4300 4150 2    50   Input ~ 0
BTN1
Text GLabel 5050 4150 2    50   Input ~ 0
BTN2
Wire Wire Line
	4300 4150 4150 4150
Connection ~ 4150 4150
Wire Wire Line
	4150 4150 4150 4200
Wire Wire Line
	5050 4150 4900 4150
Connection ~ 4900 4150
Wire Wire Line
	4900 4150 4900 4200
Text GLabel 6150 4150 0    50   Input ~ 0
SCL
Text GLabel 6150 4250 0    50   Input ~ 0
SDA
Wire Wire Line
	6150 4250 6350 4250
Wire Wire Line
	6150 4150 6350 4150
$Comp
L power:GND #PWR0109
U 1 1 5E6DC975
P 6850 5050
F 0 "#PWR0109" H 6850 4800 50  0001 C CNN
F 1 "GND" H 6855 4877 50  0000 C CNN
F 2 "" H 6850 5050 50  0001 C CNN
F 3 "" H 6850 5050 50  0001 C CNN
	1    6850 5050
	1    0    0    -1  
$EndComp
Wire Wire Line
	6850 5050 6850 4750
$Comp
L power:VCC #PWR0110
U 1 1 5E6E594C
P 3000 4900
F 0 "#PWR0110" H 3000 4750 50  0001 C CNN
F 1 "VCC" H 3017 5073 50  0000 C CNN
F 2 "" H 3000 4900 50  0001 C CNN
F 3 "" H 3000 4900 50  0001 C CNN
	1    3000 4900
	1    0    0    -1  
$EndComp
$Comp
L Device:R R2
U 1 1 5E6E5F14
P 3000 5150
F 0 "R2" H 3070 5196 50  0000 L CNN
F 1 "10K" H 3070 5105 50  0000 L CNN
F 2 "" V 2930 5150 50  0001 C CNN
F 3 "~" H 3000 5150 50  0001 C CNN
	1    3000 5150
	1    0    0    -1  
$EndComp
Wire Wire Line
	2400 5400 3000 5400
Wire Wire Line
	3000 5300 3000 5400
Connection ~ 3000 5400
Wire Wire Line
	3000 5400 3150 5400
Wire Wire Line
	3000 4900 3000 5000
$Comp
L power:VCC #PWR0111
U 1 1 5E6F5F50
P 3400 3800
F 0 "#PWR0111" H 3400 3650 50  0001 C CNN
F 1 "VCC" H 3417 3973 50  0000 C CNN
F 2 "" H 3400 3800 50  0001 C CNN
F 3 "" H 3400 3800 50  0001 C CNN
	1    3400 3800
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0112
U 1 1 5E6F6413
P 3400 4300
F 0 "#PWR0112" H 3400 4050 50  0001 C CNN
F 1 "GND" H 3405 4127 50  0000 C CNN
F 2 "" H 3400 4300 50  0001 C CNN
F 3 "" H 3400 4300 50  0001 C CNN
	1    3400 4300
	1    0    0    -1  
$EndComp
$Comp
L Device:C C2
U 1 1 5E6F68F4
P 3400 4050
F 0 "C2" H 3515 4096 50  0000 L CNN
F 1 "100n" H 3515 4005 50  0000 L CNN
F 2 "" H 3438 3900 50  0001 C CNN
F 3 "~" H 3400 4050 50  0001 C CNN
	1    3400 4050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3400 3800 3400 3900
Wire Wire Line
	3400 4200 3400 4300
NoConn ~ 2400 6300
NoConn ~ 2400 6200
NoConn ~ 2400 6100
NoConn ~ 2400 6000
NoConn ~ 2400 5700
NoConn ~ 2400 5100
NoConn ~ 2400 5000
NoConn ~ 2400 4900
NoConn ~ 2400 4800
NoConn ~ 2400 4600
NoConn ~ 2400 4500
NoConn ~ 2400 4100
NoConn ~ 2400 4000
NoConn ~ 2400 3900
NoConn ~ 6350 4550
NoConn ~ 7350 4450
NoConn ~ 7350 4150
$Comp
L Connector:Conn_01x06_Male J2
U 1 1 5E658CA1
P 4000 5950
F 0 "J2" H 4108 6331 50  0000 C CNN
F 1 "AVR ISP connector" H 4108 6240 50  0000 C CNN
F 2 "" H 4000 5950 50  0001 C CNN
F 3 "~" H 4000 5950 50  0001 C CNN
	1    4000 5950
	1    0    0    -1  
$EndComp
Text GLabel 4500 5750 2    50   Input ~ 0
VCC
Wire Wire Line
	4200 5750 4500 5750
Text GLabel 4500 5850 2    50   Input ~ 0
GND
Text GLabel 4500 5950 2    50   Input ~ 0
RESET
Text GLabel 4500 6050 2    50   Input ~ 0
MOSI
Text GLabel 4500 6150 2    50   Input ~ 0
MISO
Text GLabel 4500 6250 2    50   Input ~ 0
SCK
Wire Wire Line
	4200 5850 4500 5850
Wire Wire Line
	4500 5950 4200 5950
Wire Wire Line
	4200 6050 4500 6050
Wire Wire Line
	4500 6150 4200 6150
Wire Wire Line
	4200 6250 4500 6250
Text GLabel 5650 5800 2    50   Input ~ 0
SCL
Text GLabel 5650 5700 2    50   Input ~ 0
SDA
Wire Wire Line
	5400 5800 5650 5800
Wire Wire Line
	5400 5700 5650 5700
Text Notes 6000 1550 2    50   ~ 0
AP9101CK6-AYTRG1
$Comp
L components:AP9101CK6 U3
U 1 1 5E6BF612
P 5600 2350
F 0 "U3" H 5600 1635 50  0000 C CNN
F 1 "AP9101CK6" H 5600 1726 50  0000 C CNN
F 2 "" H 5600 2350 50  0001 C CNN
F 3 "" H 5600 2350 50  0001 C CNN
	1    5600 2350
	-1   0    0    1   
$EndComp
$Comp
L Device:R R5
U 1 1 5E6D3C42
P 4500 2050
F 0 "R5" V 4707 2050 50  0000 C CNN
F 1 "330" V 4616 2050 50  0000 C CNN
F 2 "" V 4430 2050 50  0001 C CNN
F 3 "~" H 4500 2050 50  0001 C CNN
	1    4500 2050
	0    -1   -1   0   
$EndComp
$Comp
L Device:C C4
U 1 1 5E6D9E03
P 4850 2200
F 0 "C4" H 4965 2246 50  0000 L CNN
F 1 "100n" H 4965 2155 50  0000 L CNN
F 2 "" H 4888 2050 50  0001 C CNN
F 3 "~" H 4850 2200 50  0001 C CNN
	1    4850 2200
	1    0    0    -1  
$EndComp
Text Notes 7100 1550 2    50   ~ 0
DMN2053UVT-7
$Comp
L components:DMN2053UVT U4
U 1 1 5E6E74E6
P 6800 1750
F 0 "U4" H 6750 1850 50  0000 L CNN
F 1 "DMN2053UVT" H 6550 1750 50  0000 L CNN
F 2 "" H 6800 1750 50  0001 C CNN
F 3 "" H 6800 1750 50  0001 C CNN
	1    6800 1750
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0113
U 1 1 5E6F669D
P 7300 2300
F 0 "#PWR0113" H 7300 2050 50  0001 C CNN
F 1 "GND" H 7305 2127 50  0000 C CNN
F 2 "" H 7300 2300 50  0001 C CNN
F 3 "" H 7300 2300 50  0001 C CNN
	1    7300 2300
	1    0    0    -1  
$EndComp
NoConn ~ 1500 2450
NoConn ~ 1500 2350
NoConn ~ 1500 2250
Wire Wire Line
	7100 2050 7300 2050
Wire Wire Line
	7300 2050 7300 2300
Wire Wire Line
	7100 2200 7200 2200
Wire Wire Line
	7200 2200 7200 1900
Wire Wire Line
	7200 1900 7100 1900
Wire Wire Line
	5250 2200 5250 2450
Wire Wire Line
	5950 2200 6500 2200
Wire Wire Line
	5950 1900 6500 1900
Wire Wire Line
	5250 2450 6400 2450
Wire Wire Line
	6400 2450 6400 2050
Wire Wire Line
	6400 2050 6500 2050
Connection ~ 5250 2450
Wire Wire Line
	5950 2050 6100 2050
Wire Wire Line
	6100 2050 6100 2600
$Comp
L power:GND #PWR0114
U 1 1 5E741174
P 6100 3050
F 0 "#PWR0114" H 6100 2800 50  0001 C CNN
F 1 "GND" H 6105 2877 50  0000 C CNN
F 2 "" H 6100 3050 50  0001 C CNN
F 3 "" H 6100 3050 50  0001 C CNN
	1    6100 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	6100 2900 6100 3050
Connection ~ 4850 2050
Wire Wire Line
	4850 2050 5250 2050
Wire Wire Line
	4850 2350 4850 2450
Wire Wire Line
	4850 2450 5250 2450
Wire Wire Line
	5250 2450 5250 2600
Wire Wire Line
	4650 2050 4850 2050
Connection ~ 4000 2050
Text GLabel 2600 5600 2    50   Input ~ 0
DISP_RST
Wire Wire Line
	2400 5600 2600 5600
$Comp
L Connector:Conn_01x08_Male J3
U 1 1 5E7C51B2
P 5200 6000
F 0 "J3" H 5250 6500 50  0000 R CNN
F 1 "Display connector" H 5550 6400 50  0000 R CNN
F 2 "" H 5200 6000 50  0001 C CNN
F 3 "~" H 5200 6000 50  0001 C CNN
	1    5200 6000
	1    0    0    -1  
$EndComp
Text GLabel 5650 6000 2    50   Input ~ 0
DISP_RST
Wire Wire Line
	5400 6000 5650 6000
NoConn ~ 5400 5900
NoConn ~ 5400 6100
NoConn ~ 5400 6200
$Comp
L power:GND #PWR0115
U 1 1 5E7E1451
P 5500 6500
F 0 "#PWR0115" H 5500 6250 50  0001 C CNN
F 1 "GND" H 5505 6327 50  0000 C CNN
F 2 "" H 5500 6500 50  0001 C CNN
F 3 "" H 5500 6500 50  0001 C CNN
	1    5500 6500
	1    0    0    -1  
$EndComp
Wire Wire Line
	5400 6400 5500 6400
Wire Wire Line
	5500 6400 5500 6500
$Comp
L power:VCC #PWR0116
U 1 1 5E7E39D9
P 5700 6300
F 0 "#PWR0116" H 5700 6150 50  0001 C CNN
F 1 "VCC" V 5717 6428 50  0000 L CNN
F 2 "" H 5700 6300 50  0001 C CNN
F 3 "" H 5700 6300 50  0001 C CNN
	1    5700 6300
	0    1    1    0   
$EndComp
Wire Wire Line
	5400 6300 5700 6300
Wire Wire Line
	1500 2050 1800 2050
$Comp
L Device:C C1
U 1 1 5E7055BB
P 1800 2200
F 0 "C1" H 1915 2246 50  0000 L CNN
F 1 "4.7u" H 1915 2155 50  0000 L CNN
F 2 "" H 1838 2050 50  0001 C CNN
F 3 "~" H 1800 2200 50  0001 C CNN
	1    1800 2200
	1    0    0    -1  
$EndComp
Wire Wire Line
	1800 2350 1800 2500
Connection ~ 1800 2050
Wire Wire Line
	1800 2050 2200 2050
Connection ~ 2200 2050
Wire Wire Line
	3500 2800 3500 2650
Connection ~ 3500 2650
Wire Wire Line
	4000 2350 4000 2500
$Comp
L power:VCC #PWR0117
U 1 1 5E75D835
P 3450 1100
F 0 "#PWR0117" H 3450 950 50  0001 C CNN
F 1 "VCC" H 3467 1273 50  0000 C CNN
F 2 "" H 3450 1100 50  0001 C CNN
F 3 "" H 3450 1100 50  0001 C CNN
	1    3450 1100
	1    0    0    -1  
$EndComp
Text GLabel 3450 1650 0    50   Input ~ 0
VBACKUP
Wire Wire Line
	3450 1650 3550 1650
Wire Wire Line
	3550 1650 3550 2050
Connection ~ 3550 2050
Wire Wire Line
	3550 2050 4000 2050
$Comp
L Switch:SW_DPDT_x2 SW1
U 1 1 5E7961BF
P 3550 1450
F 0 "SW1" V 3596 1262 50  0000 R CNN
F 1 "SW_DPDT_x2" V 3505 1262 50  0000 R CNN
F 2 "" H 3550 1450 50  0001 C CNN
F 3 "~" H 3550 1450 50  0001 C CNN
	1    3550 1450
	0    -1   -1   0   
$EndComp
Connection ~ 3550 1650
Wire Wire Line
	3450 1250 3450 1100
Wire Wire Line
	4000 1900 4000 2050
$Comp
L power:GND #PWR0118
U 1 1 5E7A9965
P 6500 3750
F 0 "#PWR0118" H 6500 3500 50  0001 C CNN
F 1 "GND" H 6505 3577 50  0000 C CNN
F 2 "" H 6500 3750 50  0001 C CNN
F 3 "" H 6500 3750 50  0001 C CNN
	1    6500 3750
	1    0    0    -1  
$EndComp
Wire Wire Line
	6500 3750 6500 3700
Wire Wire Line
	6500 3700 6750 3700
Wire Wire Line
	6750 3700 6750 3950
Text GLabel 6950 3700 2    50   Input ~ 0
VBACKUP
Wire Wire Line
	6850 3700 6850 3950
Wire Wire Line
	6850 3700 6950 3700
$Comp
L Device:R R1
U 1 1 5E7B982E
P 2200 2600
F 0 "R1" H 2270 2646 50  0000 L CNN
F 1 "2.7K" H 2270 2555 50  0000 L CNN
F 2 "" V 2130 2600 50  0001 C CNN
F 3 "~" H 2200 2600 50  0001 C CNN
	1    2200 2600
	1    0    0    -1  
$EndComp
$Comp
L Device:R R7
U 1 1 5E7BA513
P 6100 2750
F 0 "R7" H 6170 2796 50  0000 L CNN
F 1 "2.7K" H 6170 2705 50  0000 L CNN
F 2 "" V 6030 2750 50  0001 C CNN
F 3 "~" H 6100 2750 50  0001 C CNN
	1    6100 2750
	1    0    0    -1  
$EndComp
Wire Wire Line
	2200 2850 2500 2850
Wire Wire Line
	3350 2350 3500 2350
Wire Wire Line
	2200 2050 2550 2050
Wire Wire Line
	3350 2050 3550 2050
Wire Wire Line
	3350 2650 3500 2650
$Comp
L components:MCP73831-2-OT U2
U 1 1 5E726016
P 2950 1900
F 0 "U2" H 2950 2015 50  0000 C CNN
F 1 "MCP73831-2-OT" H 2950 1924 50  0000 C CNN
F 2 "pcb:MCP73831_SOT-23" H 2950 1900 50  0001 C CNN
F 3 "" H 2950 1900 50  0001 C CNN
	1    2950 1900
	1    0    0    -1  
$EndComp
Wire Wire Line
	2500 2850 2500 2650
Wire Wire Line
	2500 2650 2550 2650
Wire Wire Line
	4350 2050 4000 2050
Wire Wire Line
	1900 3600 1900 3500
Wire Wire Line
	1900 3500 1800 3500
Connection ~ 1800 3500
Wire Wire Line
	1800 3500 1800 3600
Text GLabel 4000 1900 1    50   Input ~ 0
BAT+
Text GLabel 5250 2600 3    50   Input ~ 0
BAT-
$Comp
L Switch:SW_DIP_x01 SW2
U 1 1 5E72AEEF
P 4150 4500
F 0 "SW2" V 4104 4630 50  0000 L CNN
F 1 "SW_DIP_x01" V 4195 4630 50  0000 L CNN
F 2 "" H 4150 4500 50  0001 C CNN
F 3 "~" H 4150 4500 50  0001 C CNN
	1    4150 4500
	0    1    1    0   
$EndComp
$Comp
L Switch:SW_DIP_x01 SW3
U 1 1 5E7385FA
P 4900 4500
F 0 "SW3" V 4854 4630 50  0000 L CNN
F 1 "SW_DIP_x01" V 4945 4630 50  0000 L CNN
F 2 "" H 4900 4500 50  0001 C CNN
F 3 "~" H 4900 4500 50  0001 C CNN
	1    4900 4500
	0    1    1    0   
$EndComp
Connection ~ 4900 4800
$EndSCHEMATC
