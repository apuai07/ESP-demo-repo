# Motion sensor
Motion sensor using ESP 32 & PIR motion sensor
<img width="3547" height="2904" alt="IMG_20261020_190928184_HDR" src="https://github.com/user-attachments/assets/6406d405-cf3d-4e60-8ccc-304cf5e14bca" />
Lessons I learned (A few things to keep in mind)
1. PIR motion sensor requires a input of 5V (connect it to Vin of esp 32) but doesn't require adding of resistor at output.
2. Pin 34 along with a few others are input only so if we want only input we can use these pins
3. We use a resistor to limit the current for the LED.

#LED is high when motion is detected and low when motion is not detected.
