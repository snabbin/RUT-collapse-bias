from machine import ADC, Pin
from time import sleep, time

a = ADC(Pin(26)); b = ADC(Pin(27))
a_hits = b_hits = 0; timeout = 30
start = time()

while time() - start < timeout:
    if a.read_u16() > 30000: a_hits += 1; sleep(0.1)
    elif b.read_u16() > 30000: b_hits += 1; sleep(0.1)

print("A:", a_hits, "B:", b_hits)
