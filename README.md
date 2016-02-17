# Simple Arduino Water Flow Sensor Example
The code measures the water flow in L/min (but you can also measure it on mL/s).

##About
Code tested with YF-S201 Water Flow Sensor (operating voltage is 5-18V) on a Arduino UNO.

##Usage
You may want change the interrupt pin:
```cpp
int signalPin = 2;
```
Or even the water flow measure.
Change:
```cpp
flow = (rpm / 5.5);
```
to:
```cpp
flow = (rpm / 5.5) / (1000/60);
```

##Contribute
Feel free to suggest changes on the code.

