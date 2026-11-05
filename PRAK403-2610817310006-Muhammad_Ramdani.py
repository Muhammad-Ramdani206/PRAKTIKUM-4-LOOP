bil = input().split()

bil1 = int(bil[0])
bil2 = int(bil[1])

Langkah = 1 if bil1 <= bil2 else -1

hasil = []
for i in range(bil1, bil2 + Langkah, Langkah):
	hasil.append(f"{i} {bil1 + bil2 - i}")

print(" - ".join(hasil))