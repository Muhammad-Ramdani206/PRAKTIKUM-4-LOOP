data = input().split()
n = int(data[0])
kelipatan = int(data[1])

jumlah_semua_baris = 0

for baris in range(1, n + 1):
	jumlah_baris = 0
	perhitungan = []

	for angka in range(baris, 0, -1):
		perhitungan.append(f"({angka} * {kelipatan})")
		jumlah_baris += angka * kelipatan

	print(" + ".join(perhitungan) + f" = {jumlah_baris}")
	jumlah_semua_baris += jumlah_baris

print(jumlah_semua_baris)