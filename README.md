## This is application development ----- by Huy Nguyen
* This application done by "shell.puv.fi" environment
# List of Content
   1. Congfiguration Instruction
   2. Installation Instruction
   3. Operating Instructions
   4. List of Files
   5. Copyright / CopyLeft
   6. Contact Info.
   7.Credits and Acknowlegements
# 1. Configuration Instruction
  * 1.1 All the devices needed
     Need a Linux Operating Systems
## 2. Installation Instruction
  * In your installation directory, use "make" command to create 
executable file, which is file "output.out"
  * Now sound.out should be in the same directory
## 3. Operating Instructions
  * Use command "/output.out" without argument to see a barchart 
of how many words starting by letter 'A', 'B',...(the red colums) and how many letters 'A', 'B',... in the file 'wlist.txt'
  * Press "Ctrl"+"c" to stop program
  * Use command "make clean" to delete all the executable file.
## 4. List of files
  * README.md : contains short infomation of this application and how to 
use it
  * main.c: contains the functions which is used for reading the input 
and open "wlist.txt" file, call fuctions to display barchart
  * makefile: to generate some simple command to run and clean the 
apllication
  * screen.c and screen.h: contains the fuctions which generates the 
bartchart and set its color
  * readfile.c and readfile.h: Read thehe content of 'wlist.txt' file and return it
  * countwords.c and countwords.h: Count how many numbers stating letter 'A', 'B',... and how many letter 'A', 'B',.... in file 'wlist.txt'
  * findduplicate.c and findduplicate.h: Count how many duplicate words in file 'wlist.h'
## 5. Copyright / Copyleft
  * Coppyright 2019: All the source code were written by Huy Nguyen
## 6. Contact Infomation
  * Name: Huy Nguyen
  * Email: ng.huy0708@gmail.com
  * Phone number: 046 547 1125
## 7. Credits and Acknowledgements
  * Huy Nguyen- application developer
  * Mr. Gao Chao- the instructor.

