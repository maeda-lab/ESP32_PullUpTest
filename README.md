# ESP32_PullUpTest

![image](https://user-images.githubusercontent.com/497375/109980662-7c805c80-7d43-11eb-87ac-7f4025d414b0.png)

![image](https://user-images.githubusercontent.com/497375/109981776-94a4ab80-7d44-11eb-8b3d-561d72d43e43.png)

### I2C Master UNIT Test Without Pull Up Register

- Oscilloscope : Saleae Pro 8
- no pull up register
>  for (address = 1; address < 127; address++ ) {
>  
>    Wire.beginTransmission(address);
>    
>    error = Wire.endTransmission();
    
![image](https://user-images.githubusercontent.com/497375/110060093-b5065180-7da8-11eb-8e6b-6ac25f253994.png)


### I2C Master-Slave Test Without Pull Up Register

- Oscilloscope : Saleae Pro 8
- no pull up register
- I2C Master : ESP32-WROOM-32D (compiled with ESP32 Dev Module in Arduino IDE)
- I2C Slave : Seeeduino XIAO (Slave Address 0x08)

Result : Only 0x08 address has “ack : Acknowledge”. Other address has “nak : Not Acknowledge”

![image](https://user-images.githubusercontent.com/497375/110060072-ad46ad00-7da8-11eb-893a-d5fee33c3f39.png)
