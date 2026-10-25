
#Things I did :
3 leds used for three distance ranges (5 to 15, 15 to 30 and 30 to 60).

Setup a voltage divider of 1 ohm and 2 ohm to take input from echo pin to the esp32 (since
esp32 can only take a input of 3.3V and ultrasonic sensor operates at 5V).

For this same reason Vcc of ultrasonic is connected to Vin and not 3V3 of esp32.

The distance is measured and LEDs light up accordingly.


https://github.com/user-attachments/assets/731db338-d008-4b97-9f2e-8eef1e009037
