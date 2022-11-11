/*
	sizeof(...) -- функция определения размера
	типы данных: char, short, int, long int, long long int, float, double
	unsigned + [тип данных] -- беззнаковая переменная
	
	for (н.у.; условие выхода из цикла; действие) {}
	
	компиляция файла:  в командной строке Linux'а набрать g++ main.cpp,
	если не заработало набрать whereis g++, если не будет написан путь к компилятора, то надо установить
	sudo apt-get install g++ gcc gdb (если ubuntu подобная система)	
*/

#include <iostream>	//стандартная библиотека - просто набор функций, нас просто интересует std::cout

using namespace std;

int i_gl = 0;	//глобальная переменная, любая переменная объявлена вне фигурных скобок будет называться глобальной, иначе локальной

void printSizeMainTypeOfVar() {
	std::cout << "char = " << sizeof(char) << " bytes" << std::endl;
	std::cout << "short = " << sizeof(short) << " bytes"  << std::endl;
	//напишите аналогичные строки кода и определите размер других типов данных
}

int main(int argc, char** argv) {
	std::cout << "program has name = " << argv[0] << std::endl;
	
	int i = 0;	//local variable
	std::cout << "example POSTincrement i++ :\t";
	for (int k = 0, i = 0; k < 10; k++) {
		std::cout << i++ << " ";	//先做事儿，然后加一
	}
	std::cout << std::endl;
	
	std::cout << "example PREincrement ++i :\t";
	for (int k = 0, i = 0; k < 10; k++) {
		std::cout << ++i << " ";	//先加一，然后做事儿
	}
	std::cout << std::endl;
	
	std::cout << "\n\n\t\t----HOME WORK----" << std::endl;
	std::cout << "homework written as comment in function \"printSizeMainTypeOfVar()\"!!!" << std::endl;
	printSizeMainTypeOfVar();	//здесь вызывается функция, просто оставьте как есть
	
	return 0;
}