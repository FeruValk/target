#include <iostream>

#define tamFibonacci 100

void Fibonacci() {
	int numero;
	bool pertence{false};
	int fiboNum[tamFibonacci] = { 0,1 };
	
	std::cout << "Digite um numero: ";
	std::cin >> numero;
	std::cout << std::endl;

	for (int i = 2; i < std::size(fiboNum); i++) {
		fiboNum[i] = fiboNum[i - 1] + fiboNum[i - 2];
		if (fiboNum[i] == numero) {
			pertence = true;
			break;
		}
	}

	if (pertence)
		std::cout << "Este numero pertence a Fibonacci" << std::endl;
	else
		std::cout << "Este numero nao pertence a Fibonacci" << std::endl;	
}

void inverterCaracter() {
	std::string palavra;
	std::string palavraInvertida;
	std::cout << "Digite uma palavra: ";
	std::cin >> palavra;
	std::cout << std::endl;

	for (int i = palavra.length() - 1; i >= 0; i--) {
		palavraInvertida += palavra[i];
	}

	std::cout << palavraInvertida << std::endl;
}



int main() {
	Fibonacci();
	inverterCaracter();
	return 0;
}