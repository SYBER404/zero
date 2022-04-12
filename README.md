#### CARA PEMBELIAN LISENSI
 kalian bisa langsung hubungi wa : 082329761867 atau bisa menggunakan link didalam script 
 
#### GRATIS TRIAL SEHARI TIAP GMAIL
 silahkan kalian bisa daftar ke https://fall-xavier.my.id/register/ untuk mendapatkan trial gratis satu hari untuk setiap 1 gmail

#### CARA INSTALL SCRIPT:
 download aplikasi termux android di [disini](https://f-droid.org/repo/com.termux_118.apk)
 lalu buka aplikasinya ketikan perintah dibawah ini.
 ```
 $ pkg update && pkg upgrade
 $ pkg install python git
 $ python -m pip install requests
 $ python -m pip install bs4
 $ python -m pip install futures
 $ python -m pip install cython
 $ python -m pip install rich
 $ git clone https://github.com/Fall-Xavier/zero
 $ cd zero
 $ cythonize -i zero.c
 $ python run.py
 ```
#### CARA MENJALANKAN SCRIPT:
 karna sudah pernah menginstall script jadi kita tinggal ketikkan ini untuk menjalankannya
 ```
  $ cd zero
  $ python run.py
 ```
#### CARA MENGUPDATE SCRIPT:
 jika ingin mengupdate script, ketikan perintah dibawah ini:
 ```
  $ cd zero
  $ git pull
  $ rm -rf *.so
  $ cythonize -i zero.c
  $ python run.py
 ```
