import math

rounds = 5
distance = 14

one_radius_distance = distance / rounds
radius = one_radius_distance / (2 * math.pi)

print("diketahui :")
print(f"pak dengklek mengelilingi taman = {rounds} rounds")
print(f"jarak tempuh pak dengklek adalah {distance} kilometers")
print("jawaban :")
print(f"jari-jari taman yang dielilingi pak dengklek adalah {radius:.2f} kilometers")