# CPU-and-GPU-temperature-monitor
A PC CPU and GPU temperature monitor using Open Hardware Monitor, Python and Arduino

1. Download the two pcmonitor files in this folder. In addition, install the following software:
   -Open Hardware Monitor
   -Arduino IDE
   -A Python IDE (The software was developed in spyder within the anaconda package, however any python IDE should work)

2. Set up the arduino and its components and connect it to one of your computers USB ports.

3. Open both the Arduino and Python pcmonitor files in their respective softwares. 

4. The arduino is connected to COM4 within the python code by default. This may need to be changed manually depending
on the USB port used. This can be done by replacing 'COM4' in the python code with the respective required
COM port. The required COM port can be found by going to Tools --> Port in the Arduino IDE.

5. Open up Open Hardware Monitor

6. Run the Arduino code and then the Python code after. (NOTE: It will not work if the Python code is ran before uploading
the Arduino code or if Open Hardware Monitor is not open).

After these steps the temperature monitor should work.

v1.1/10.6.23
