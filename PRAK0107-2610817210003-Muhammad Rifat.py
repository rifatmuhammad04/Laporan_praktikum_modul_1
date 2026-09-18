side1 = 4
side2 = 5
side3 = 7
price_per_meter = 85000

perimeter = side1 + side2 + side3
cost = perimeter * price_per_meter

print("Diketahui:")
print(f"Panjang sisi segitiga berturut-turut adalah {side1}, {side2}, dan {side3}")
print(f"Keliling tanah pak dengklek adalah {perimeter}")
print(f"Harga tanah per meter adalah {price_per_meter}")
print(f"Jawaban :")
print(f"Biaya yang diperlukan pak dengklek adalah : Rp {cost:,}")