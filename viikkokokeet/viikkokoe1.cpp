/*
// tehtävä 1
#include <iostream>

int main() {
    int a = 4;
    int b = 5;

	std::cout << a * b * 2 + 1 << std::endl;

	return 0;
}



// tehtävä 2
#include <iostream>

void tarkista(int num) {
    if (num > 0) {
        std::cout << "positiivinen" << std::endl;
    } else if (num < 0) {
        std::cout << "negatiivinen" << std::endl;
    } else {
        std::cout << "nolla" << std::endl;
    }
}



// tehtävä 3
#include <iostream>

void terveiset(int num) {
    for (int i = 1; i <= num; i++) {
        std::cout << "Terve " << i << std::endl;
    }
}



// tehtävä 4
#include <iostream>

int main() {
    int luku = 0;
    std::cout << "?";
    std::cin >> luku;
    
    luku *= 2;
    std::cout << luku << std::endl;
    
	return 0;
}



// tehtävä 5
#include <iostream>

void kertoma(int num) {
    if (num > 10) {
        std::cout << "Luku on liian iso" << std::endl;
    } else if (num < 1) {
        std::cout << "Ei voida laskea" << std::endl;
        } else {
        long int tuloste = 1;
        
        for (int i = 1; i <= num; i++) {
            tuloste *= i;
            }

        std::cout << tuloste << std::endl;
    }
}



// tehtävä 6
#include <iostream>

void tarkista_jaollisuus(int num) {
    if (num % 4 == 0) {
        std::cout << "jaollinen" << std::endl;
    } else {
        std::cout << "ei jaollinen" << std::endl;
    }
}



// tehtävä 7
#include <iostream>

void tarkista_jaollisuus(int jaettava, int jakaja) {
    if (jaettava % jakaja == 0) {
        std::cout << "jaollinen" << std::endl;
    } else {
        std::cout << "ei jaollinen" << std::endl;
    }
}



// tehtävä 8
#include <iostream>
#include <cstdlib>

void sarja(int sluku) {
    std::srand(sluku);
    for (int i = 0; i < 5; i++) {
        int satunnaisluku = std::rand() % 20;
        std::cout << satunnaisluku << std::endl;
    }
}
*/