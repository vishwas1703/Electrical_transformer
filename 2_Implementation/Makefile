
main.exe: project_main.c src/trans.c
	gcc -Iinc ./src/trans.c ./project_main.c -o project_main.exe

run : project_main.exe
	./project_main.exe

clean: 
	rm *.exe