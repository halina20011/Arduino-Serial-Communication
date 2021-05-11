###################################################################################
 # This project was produced by Halina
 # 
 #  github: https://github.com/halina20011/Arduino-Serial-Communication
 #  YouTube: https://www.youtube.com/watch?v=QE2UWFv8szw&t
 #  
#####################################################################################
import serial #Import Library
import time   #Import Library

arduino = serial.Serial('COM12', baudrate = 9600, timeout = 1) #Com may not be the same!!
time.sleep(3) #Sleep 3s

    
while(1):
    dataFromUser = input("-> ")

    if (dataFromUser == "Off" or dataFromUser == "off" or dataFromUser == "f" or dataFromUser == "0"): 
        arduino.write(b'0') 
        print("LED turned OFF")
        time.sleep(0.5) #Sleep 0.5s
    
    if (dataFromUser == "On" or dataFromUser == "on" or dataFromUser == "n" or dataFromUser == "1"): 
        arduino.write(b'1') 
        print("LED turned ON")
        time.sleep(0.5) #Sleep 0.5s

