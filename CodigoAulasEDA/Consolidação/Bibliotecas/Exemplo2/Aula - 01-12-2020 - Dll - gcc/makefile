TARGET = prog

$(TARGET): aula.o lib.a
	gcc $^ -o $@

aula.o: aula.c
	gcc -c $< -o $@

#lib.a: lib1.o lib2.o
#    ar rcs $@ $^

lib.a: MyLib.o 
	ar rcs $@ $^
	
MyLib.o: lib.c funcoes.h
	gcc -c -o $@ $<

clean:
	rm -f *.o *.a $(TARGET)