#COPACABANA
The Future on your hand.

##Introduction
COPACABANA is the smallest hardware around capable to help you dive into the IoT adventure, based on ESP8266 arch

##Requirements
For that you can use COPABACANA on your project.

- Copacabana
- FTDI
- Cabo Mini USB

##Basic details
If you want see details about what have inside of COPACABANA, see below and learn how to work
with this little device and not broken it easy.

###Hardware details
```
Voltagem de operação	3,3-12Vdc
Voltagem Rele1	8-12V
Voltagem lógica	3,3V
GPIOs do ESP12	preservados
PWM do ESP12	preservados
Analog In do ESP12	preservados
DC corrente por pino	original -2mA
Flash Memory	500KB +
Clock speed	original ESP12
coprimento	1 polegada
largura	1 polegada
altura	1polegada
```

###Components
COPACABANA have a lot of versions and each version have components that you can use. So, see
the list below for you can see version of yours.

- Full
- Pro
- Basic
- Bare Bone

###Ports
COPACABANA have all pins of ESP8266 that you can work.

Pay Atention: The COPACABANA authors don't recommends use the device triggering a lot of sensors
or shields at the same time.

##Setup
You need do a little setup on your hardware and computer for that you have access and can upload your
skecth to the device.

###Hardware
The setup of hardware is easy but you need think about some things before.

#####1. FTDI Connector
For you send the skecth to the board you need a FTDI connector. See below how you can plug it.

- Pins details

#####2. Trigger Keys (Reset and prepare button)

Pay Atention: if you have a FTDI connector with DTR and RTS you don't need the 'trigger keys' but you lost
access for see data in the serial monitor.

You need create the keys that can do a trigger for reset the system and prepare ESP8266 for receive the new skecth.

- Pins details

###Software

First, you need check if you have the last version of Arduino SDK. If u not sure,
visit arduino.cc and download the last version.

So, before you update the Arduino SDK, you need install some libraries and boards.

####1. Install ESP8266 Board

####2. Install Manager