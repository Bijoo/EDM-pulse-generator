# EDM-pulse-generator
Pulse generator for low-voltage electrical discharge machining of metals

https://www.youtube.com/watch?v=Wqfy7hmxHZw

I simplified it to output one fixed frequency (5kHz, 15% fill), voltage 19.5V only (laptop power supply), the power part is based on two parallel connected MOSFET fdb7030l, unsoldered from some motherboard at the time I don't remember. Generator works. Reverse polarity, when the part acts as an anode, showed the best results in tap water. Straight polarity doesn't so much destroy the metal as it galvanizes it with copper from the electrode.
The no-load voltage in water is 5 volts.
Operating voltage is 3.5 to 4.9 volts.
Short circuit is 2 volts or lower.

When using normal tap water the workpiece receives the following effects at each pulse:
1. spark action (6000+ Celsius)
2. hydrogen corrosion of steel
3. impact of micro explosion from ignition of flammable gas generated due to mixing of hydrogen and oxygen evolved during electrolysis (current is direct and pulsating)
4. weak electrochemical influence (weak? we have water, not electrolyte)

electrode material - copper
workpiece material - steel

In the future we plan to add control of electrode feeding and control of working voltage to withdraw the electrode in case of short circuit, or to leave it in place at working voltage and feed forward when the voltage drops, when the working gap has increased.


![sketch](https://user-images.githubusercontent.com/22216962/167451447-43fe20f1-176b-44bd-b1c2-21b90215152c.jpg)
