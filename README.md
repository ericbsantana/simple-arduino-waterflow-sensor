# Simple Arduino Water Flow Sensor Example
The code measures the water flow in L/min (but you can also measure it on mL/s)

##Usage
You are free to use this code on your water flow checker but you may want change the interrupt pin:
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

