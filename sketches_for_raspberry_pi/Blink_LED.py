import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)
GPIO.setup(13, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
GPIO.setup(11, GPIO.OUT)
while True:
    if GPIO.input(13):
        GPIO.output(11, True)
        time.sleep(0.3)
    else:
        GPIO.output(11, True)
        time.sleep(0.3)
        GPIO.output(11, False)
        time.sleep(0.3)
    