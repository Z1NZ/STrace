###### install pi.test pour utiliser le fichier de test



import sys
import os
import subprocess

def test_myoutput1(capsys): # or use "capfd" for fd-level
	str1 = os.system("strace ls")
	str2 = os.system("strace ls")
	assert str1 == str2

def test_myoutput2(capsys): # or use "capfd" for fd-level
	str1 = os.system("strace ls")
	str2 = os.system("strace ls")
	assert str1 == str2

def test_myoutput3(capsys): # or use "capfd" for fd-level
	str1 = os.system("strace ls")
	str2 = os.system("strace ls")
	assert str1 == str2

def test_myoutput4(capsys): # or use "capfd" for fd-level
	str1 = os.system("strace ls")
	str2 = os.system("strace ls")
	assert str1 == str2