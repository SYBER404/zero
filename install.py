import os,sys
H = '\033[0;92m' # HIJAU
N = '\033[0m'	# WARNA MATI

dirs = os.listdir("src")
for file in dirs:
	try:
		print(f"{H}[+] sedang mencoba mengkompilasi file {file}{N}")
		os.system("cythonize -i src/%s"%(file))
	except Exception as e:
		exit(e)
print(f"{H}[+] silahkan ketik : python run.py{N}")