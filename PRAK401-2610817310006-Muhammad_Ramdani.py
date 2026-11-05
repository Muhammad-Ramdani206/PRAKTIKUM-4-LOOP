data = input().split()

bil = int(data[0])
simbol = data[1]

hasil = []

for i in range(1, 51):
	if i % bil == 0:
		hasil.append(simbol)
	else:
		hasil.append(str(i))

print(" ".join(hasil))