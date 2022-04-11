import os,sys
from src import menu as Menu

def make():
	try:os.mkdir("CP")
	except:pass
	try:os.mkdir("OK")
	except:pass
	Menu.menu()

make()