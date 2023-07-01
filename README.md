# CPU-and-GPU-temperature-monitor
A PC CPU and GPU temperature monitor using Open Hardware Monitor, Python and Arduino

1. Download the two pcmonitor files in this folder. In addition, install the following software:
   -Open Hardware Monitor
   -Arduino IDE
   -A Python IDE (The software was developed in spyder within the anaconda package, however any python IDE should work)

2. Set up the arduino and its components and connect it to one of your computers USB ports (Setup details below).

3. Open both the Arduino and Python pcmonitor files in their respective softwares. 

4. The arduino is connected to COM4 within the python code by default. This may need to be changed manually depending
on the USB port used. This can be done by replacing 'COM4' in the python code with the respective required
COM port. The required COM port can be found by going to Tools --> Port in the Arduino IDE.

5. Open up Open Hardware Monitor

6. Run the Arduino code and then the Python code after. (NOTE: It will not work if the Python code is ran before uploading
the Arduino code or if Open Hardware Monitor is not open).

Arduino circuit setup details (uses 16x2 lcd screen)
VSS - GND
VDD - 5v
VO - potentiometer output
RS - Pin 11
RW - GND
E - Pin 12
(D0 - D3 have no pins attached)
D4 - Pin 2
D5 - Pin 3
D6 - Pin 4
D7 - Pin 5
A - 5v
K - GND

v1.1/10.6.23
