import math

base = 5
height = 12

side_a = height
side_c = base
side_b = int(math.sqrt(base**2 + height**2))

perimeter = side_a + side_b + side_c
area = int(0.5 * base * height)

print("diketahui :")
print(f"Alas = {base} cm")
print(f"Tinggi = {height} cm")
print("jawaban :")
print(f"sisi A = {side_a} cm")
print(f"sisi B = {side_b} cm")
print(f"sisi C = {side_c} cm")
print(f"keliling = {perimeter} cm")
print(f"luas = {area} cm")