while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = input("Masukkan Pilihan : ")

    try:
        pilihan = int(pilihan)
    except ValueError:
        print("Input harus berupa angka. Silahkan coba lagi.\n")
        continue

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Muhammad Ramdani")
        break

    if pilihan < 1 or pilihan > 4:
        print("Input anda salah, silahkan coba lagi\n")
        continue

    a = float(input("Masukkan nilai pertama : "))
    b = float(input("Masukkan nilai kedua : "))

    if pilihan == 4 and b == 0:
        print("Tidak dapat membagi dengan nol.\n")
        continue

    if pilihan == 1:
        hasil = a + b
        print(f"Hasil penjumlahan antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}\n")
    elif pilihan == 2:
        hasil = a - b
        print(f"Hasil pengurangan antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}\n")
    elif pilihan == 3:
        hasil = a * b
        print(f"Hasil perkalian antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}\n")
    elif pilihan == 4:
        hasil = a / b
        print(f"Hasil pembagian antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}\n")