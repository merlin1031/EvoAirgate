# EvoAirgate
EvoAirgate for ThinyWhoop Copter Race

## Was zum Teufel ist ein EvoAirgate?
Modulares System für den Bau von beleuchteten Air-Gate`s für Race-Drohnen der ThinyWhoop / Blade Inductix Klasse

![EvoAirgate](/Media/EvoAirGate_01.png)

## Kurzinfos
* Material: PLA transparent
* Beleuchtung: LED Stipes WS2812b
* Steuerung: Arduino Nano
* Stromversorgung: 5V (per Akku oder Netzteil)

## Lightshow mit LED Strip`s WS2812b
Die Gate`s können einfach mit normalen LED-Stripe`s beleuchtet werden, oder wenn es mit mehr ShowEffekt sein soll, auch mit WS2812b iluminiert werden. Bei WS2812b Led-Streifen besitzt jede LED einen eigenen Controller und kann so individuell angesteuert werden, was sehr spektakuläre Effekte ermöglicht. Die Ansteuerung erfolgt hierbei mittels eines ArduinoNano. Um die Programmierung der LED`s einfach halten zu können, wird auf die FastLED-Lib zugegriffen.
Weitere Info`s zur FastLED gibt es hier: https://github.com/FastLED
