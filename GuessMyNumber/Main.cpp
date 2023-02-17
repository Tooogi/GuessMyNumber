#include <iostream>
#include <cstdlib>
#include <ctime>

enum DifficultyLevel { EASY = 1, NORMAL, HARD };

int main() {

	char again = 'y';
	do {
		std::cout << "Chose difficulty level: \n 1. Easy \n 2. Normal \n 3. Hard " << std::endl;
		
		int choice;
		std::cout << "Choice: " << std::endl;
		std::cin >> choice;

		/* Select difficulty level */
		DifficultyLevel myChoice;
		myChoice = (DifficultyLevel)choice;

		switch (choice) {
			case 1:
				std::cout << "You picked Easy." << std::endl;
				break;
			case 2:
				std::cout << "You picked Normal." << std::endl;
				break;
			case 3:
				std::cout << "You picked Hard." << std::endl;
				break;
			Default:
				std::cout << "You made an illegal choice." << std::endl;
		}

		/* Easy level */
		if (choice == 1) {
			srand(static_cast<unsigned int>(time(0)));
			int computerGuess = rand() % 10 + 1;
			int yourGuess;
			int tries = 0;

			do {
				std::cout << "Guess a number between 1 and 10." << std::endl;
				std::cin >> yourGuess;
				++tries;

				if (yourGuess > computerGuess) {
					std::cout << "Less" << std::endl;
				}
				else if (yourGuess < computerGuess) {
					std::cout << "Greater" << std::endl;
				}
				else {
					std::cout << "Win! You got it in: " << tries << std::endl;
				}

			} while (yourGuess != computerGuess);
		} /* Normal level */
		else if (choice == 2) {
			srand(static_cast<unsigned int>(time(0)));
			int computerGuess = rand() % 100 + 1;
			int yourGuess;
			int tries = 0;

			do {
				std::cout << "Guess a number between 1 and 100." << std::endl;
				std::cin >> yourGuess;
				++tries;

				if (yourGuess > computerGuess) {
					std::cout << "Less" << std::endl;
				}
				else if (yourGuess < computerGuess) {
					std::cout << "Greater" << std::endl;
				}
				else {
					std::cout << "Win! You got it in: " << tries << std::endl;
				}

			} while (yourGuess != computerGuess);
		} /* Hard level */
		else {
			srand(static_cast<unsigned int>(time(0)));
			int computerGuess = rand() % 1000 + 1;
			int yourGuess;
			int tries = 0;

			do {
				std::cout << "Guess a number between 1 and 1000." << std::endl;
				std::cin >> yourGuess;
				++tries;

				if (yourGuess > computerGuess) {
					std::cout << "Less" << std::endl;
				}
				else if (yourGuess < computerGuess) {
					std::cout << "Greater" << std::endl;
				}
				else {
					std::cout << "Win! You got it in: " << tries << std::endl;
				}

			} while (yourGuess != computerGuess);
		}

		std::cout << "Play again? (Y / N)" << std::endl;
		std::cin >> again;

	} while (again == 'y');

	std::cout << "Thank you for playing with me. :)" << std::endl;


	return 0;
}