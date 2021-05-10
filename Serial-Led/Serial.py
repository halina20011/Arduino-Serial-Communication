import serial
import time

ser = serial.Serial('COM12', baudrate = 9600, timeout = 1)
time.sleep(3)

    
while(1):

    dataFromUser = input()

    if (dataFromUser == "2"): 
        ser.write(b'2') 
        print ("LED turned OFF")
        time.sleep(1)
    
    if (dataFromUser == "1"): 
        ser.write(b'1') 
        print ("LED turned ON")
        time.sleep(1)

