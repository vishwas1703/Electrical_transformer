
main.exe: project_main.c 
	gcc -Iinc ./project_main.c -o project_main.exe

run : project_main.exe
	./project_main.exe

clean: 
	rm *.exe