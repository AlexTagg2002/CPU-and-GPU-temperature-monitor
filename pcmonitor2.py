import serial
import time
import wmi
import psutil

serialcomm = serial.Serial('COM4', 9600)
serialcomm.timeout = 1

while True:
    temps = []
    w = wmi.WMI(namespace="root\OpenHardwareMonitor")
    temperature_infos = w.Sensor()
    for sensor in temperature_infos:
        if sensor.SensorType==u'Temperature':
            temps.append(sensor.Value)
    CPUtemp = str(int(temps[1]))
    GPUtemp = str(int(temps[2]))
    i = "C" + CPUtemp + "G" + GPUtemp
    serialcomm.write(i.encode('utf-8'))
    print(i)
    time.sleep(2)