OBJ = main.o readfile.o countwords.o findduplicate.o screen.o
APPNAME = output.out

$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ) -lm 

%.o : %.c
	gcc -c -o $@ $<

clean :
	rm $(APPNAME) $(OBJ)

tar :
	tar cf project.tar *.c *.h makefile
