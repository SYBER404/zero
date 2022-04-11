import os,sys
H = '\033[0;92m' # HIJAU
N = '\033[0m'	# WARNA MATI

dirs = os.listdir("src")
for file in dirs:
	try:
		os.system("rm -rf src/*.so")
	except Exception as e:
		exit(e)
print(f"{H}[+] silahkan ketik : python install.py{N}")