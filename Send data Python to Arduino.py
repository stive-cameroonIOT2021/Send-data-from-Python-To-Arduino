import serial
import time

ser=serial.Serial('com1',9600,timeout=1)
a=1
b=2
c=3
while True:
    valList=[str(a),str(b),str(c)]
    sendStr=','.join(valList)
    print(sendStr)

    ser.write(sendStr.encode('utf-8'))
    time.sleep(.1)
    recStr=ser.readline().decode('utf-8')
    print(recStr)
    a=a+1
    b=b+1
    c=c+1

