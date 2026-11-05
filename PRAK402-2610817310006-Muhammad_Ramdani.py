batas = int(input())

for i in range(1, batas + 1, 2):
	print(i, end=" ")

print()

for i in range(batas - batas % 2, 1, -2):
	print(i, end=" ")