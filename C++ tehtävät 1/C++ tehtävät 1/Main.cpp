#include <iostream>

int x=1;

int main()
{
	std::cout << "Pelataan Kiinalaista Numeropeli�!\n";

	for (;;) {
		std::cout << "Anna luku: ";
		std::cin >> x;
		std::cout << "Voitin, minun on " << x + 1 << "\n";
	}

	return 0;
}