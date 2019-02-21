# EvoAirgate
EvoAirgate for ThinyWhoop Copter Race

## Was zum Teufel ist ein EvoAirgate?
Modulares System für den Bau von beleuchteten Air-Gates für Race-Drohnen der ThinyWhoop / Blade Inductix Klasse

![EvoAirgate](/Media/EvoAirGate_01.png)

## Kurzinfos
* Material: PLA transparent
* Beleuchtung: LED Stipes WS2812b
* Steuerung: Arduino Nano
* Stromversorgung: 5V (per Akku oder Netzteil)

## Lightshow mit LED Strips WS2812b
Die Gates können einfach mit normalen LED-Stripes beleuchtet werden, oder wenn es mit mehr ShowEffekt sein soll, auch mit WS2812b iluminiert werden. Bei WS2812b Led-Streifen besitzt jede LED einen eigenen Controller und kann so individuell angesteuert werden, was sehr spektakuläre Effekte ermöglicht. Die Ansteuerung erfolgt hierbei mittels eines ArduinoNano. Um die Programmierung der LEDs einfach halten zu können, wird auf die FastLED-Lib zugegriffen.
Weitere Infos zur FastLED gibt es hier: https://github.com/FastLED

## Gate-Ständer
* Material: Elektro-Verlege-Rohre d=25mm
* Verbindungselemente: 3D-Druckteile (PLA)

Um die Air-Gates nicht nur auf dem Boden abstellen zu können, gibt es jetzt noch einen Gate-Ständer der recht einfach mit 3D-Druckteilen und 25er Elektrokabel-Verlegerohren aus dem Baumarkt aufgebaut ist. In der Endausbaustufe können dann an dem Gate-Ständer mehrere Gates in verschiedenen Höhen angebracht werden.

![Gate-Ständer](/Media/GateStänder_01.png)

![Verbindugs-Fuss](/Media/3Fuss25er_01.png)

![T-Verbinder](/Media/T-Verbinder_01.png)

![Endkappe](/Media/EndKappe_01.png)

## Steuerung mit Arduino Nano
Im AUgenblick ist eine kleine Platine für einen Arduino Nano mit Stromversorung aus einem 3S Lipo-Akku angedacht. Weiters an dieser Stelle in Kürze.....
