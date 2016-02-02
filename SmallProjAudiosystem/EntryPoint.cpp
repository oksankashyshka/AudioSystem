#include <iostream>

#include"LoadSpeaker.h"

int main()
{
	bool Tr = true;
	bool mas[]{ false, true };

	for each (bool var in mas)
	{
		std::cout << "!" << var << " = " << !var << std::endl;
		//std::cout << std::endl << Tr << " ^ " << var << " = " << Tr ^ var;

	}

	CLoadSpeaker loadspkr;

	std::cout << "At start loadspkr volume is " << loadspkr.getVolume() << std::endl;

	loadspkr.decrement();
	loadspkr.decrement();
	loadspkr.decrement();

	std::cout << "Then loadspkr volume is " << loadspkr.getVolume() << std::endl;


	std::cin.get();
}