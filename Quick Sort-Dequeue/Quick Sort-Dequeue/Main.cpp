#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <vector>
#include "conio.h"
#include "CQuickSort.h"
#include "CNode.h"
#include "CDeque.h"



int main()
{
	CQuickSort quicksorter;
	CDeque deque;
	int sizeofsortarray = 10;
	int* sortarray = new int[sizeofsortarray];
	int dequeinput = 0;
	std::vector<int> sortvec;

	start:
	system("cls");

	//Main Menu
	std::cout << "Quicksort and Deque Program \n\n\n" << std::endl;
	std::cout << "Select Function\nEnter a number:\n\n" << std::endl;

	std::cout << "1. Quicksort \n \n";
	std::cout << "2. Deque \n \n";
	std::cout << "3. Exit";

	int userinput = _getch() - 48;


	if (userinput >= 1 && userinput <= 3)
	{
		switch (userinput)
		{
		case 1:
			//Quicksort Menu
			system("cls");
			std::cout << "Select an order: \n\n\n" << std::endl;
			std::cout << "0. Ascending \n\n";
			std::cout << "1. Descending \n\n";
			std::cout << "2. Back \n\n";

			userinput = 0;


			userinput = _getch() - 48;

			if (userinput >= 0 && userinput <= 2)
			{
				switch (userinput)
				{
				case 0:
					// Quicksort Ascending Loop
					system("cls");
					std::cout << "Input number of elements too sort:" << std::endl;
					while (!(std::cin >> sizeofsortarray))
					{
						std::cout << "input error" << std::endl;
						std::cin.clear();
						std::cin.ignore();

					}
					std::cin.ignore();
					std::cin.clear();


					std::cout << "Input elements divided by spaces" << std::endl;
					for (int i = 0; i < sizeofsortarray; i++)
					{
						int num;
						while (!(std::cin >> num))
						{
							std::cout << "input error" << std::endl;
							std::cin.clear();
							std::cin.ignore();

						}
							sortvec.push_back(num);
							sortarray[i] = sortvec[i];
					}
					sortvec.clear();
					system("cls");


					std::cout << "Original Order" << std::endl;
					for (int i = 0; i < sizeofsortarray; i++)
					{
						std::cout << sortarray[i] << " ";
					}
					std::cout << std::endl << std::endl;


					quicksorter.AscendingQuickSort(sortarray, 0, sizeofsortarray - 1);


					std::cout << "New Order" << std::endl;
					for (int i = 0; i < sizeofsortarray; i++)
					{
						std::cout << sortarray[i] << " ";
					}
					std::cout << std::endl << std::endl;
					std::cin.clear();
					std::cin.ignore();
					system("pause");
					goto start;

				case 1:
					// Quicksort Descending Loop
					system("cls");
					std::cout << "Input number of elements too sort:" << std::endl;
					while (!(std::cin >> sizeofsortarray))
					{
						std::cout << "input error" << std::endl;
						std::cin.clear();
						std::cin.ignore(100, '\n');

					}
					std::cin.ignore();
					std::cin.clear();
					std::cout << "Input elements divided by spaces" << std::endl;
					for (int i = 0; i < sizeofsortarray; i++)
					{
						int num;
						while (!(std::cin >> num))
						{
							std::cout << "input error" << std::endl;
							std::cin.clear();
							std::cin.ignore(100, '\n');

						}
						sortvec.push_back(num);
						sortarray[i] = sortvec[i];
					}
					sortvec.clear();
					system("cls");


					std::cout << "Original Order" << std::endl;
					for (int i = 0; i < sizeofsortarray; i++)
					{
						std::cout << sortarray[i] << " ";
					}
					std::cout << std::endl << std::endl;


					quicksorter.DecendingQuickSort(sortarray, 0, sizeofsortarray - 1);


					std::cout << "New Order" << std::endl;
					for (int i = 0; i < sizeofsortarray; i++)
					{
						std::cout << sortarray[i] << " ";
					}
					std::cout << std::endl << std::endl;
					std::cin.clear();
					std::cin.ignore(100, '\n');
					system("pause");
					goto start;

				case 2:
					//Back
					system("cls");
					goto start;
				}
				system("pause");
				goto start;
			}
			else
			{
			// input error
				system("cls");
				std::cout << "input error" << std::endl;
				userinput = 0;
				system("pause");
				goto start;
			}
		case 2:
			userinput = 0;

			dequestart:
			system("cls");

			//Deque Menu
			std::cout << "Deque \n" << std::endl;
			std::cout << "Enter a number \n\n" << std::endl;
			std::cout << "1. Enqueue Front" << std::endl;
			std::cout << "2. Enqueue Back" << std::endl;
			std::cout << "3. Dequeue Front" << std::endl;
			std::cout << "4. Dequeue Back" << std::endl;
			std::cout << "5. Peek Front" << std::endl;
			std::cout << "6. Peek Back" << std::endl;
			std::cout << "7. Is Empty" << std::endl;
			std::cout << "8. Display" << std::endl;
			std::cout << "9. Size" << std::endl;
			std::cout << "0. Back" << std::endl;

			userinput = _getch() - 48;

			switch (userinput)
			{
			case 1:
				// Enqueue Front
				system("cls");
				std::cout << "Enter data:";
				while (!(std::cin >> dequeinput))
				{
					std::cout << "input error" << std::endl;
					std::cin.clear();
					std::cin.ignore(100, '\n');

				}
				deque.EnqueueFront(dequeinput);
				deque.Display();
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;

			case 2:
				// Enqueue Back
				system("cls");
				std::cout << "Enter data:";
				while (!(std::cin >> dequeinput))
				{
					std::cout << "input error" << std::endl;
					std::cin.clear();
					std::cin.ignore(100, '\n');

				}
				deque.EnqueueBack(dequeinput);
				deque.Display();
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;

			case 3:
				// Dequeue Front
				system("cls");
				deque.DequeueFront();
				deque.Display();
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;

			case 4:
				// Dequeue Back
				system("cls");
				deque.DequeueBack();
				deque.Display();
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;

			case 5:
				// Peek Front
				system("cls");
				if (deque.IsEmpty())
				{
					std::cout << "Deque is Empty" << std::endl;
				}
				else
				{
					std::cout << "[" << deque.PeekFront() << "]";
					std::cout << std::endl << std::endl;
				}
				system("pause");
				goto dequestart;

			case 6:
				// Peek Back
				system("cls");
				if (deque.IsEmpty())
				{
					std::cout << "Deque is Empty" << std::endl;
				}
				else
				{
					std::cout << "[" << deque.PeekBack() << "]";
					std::cout << std::endl << std::endl;
				}
				system("pause");
				goto dequestart;

			case 7:
				// Is Empty
				system("cls");
				if (deque.IsEmpty())
				{
					std::cout << "Deque is Empty" << std::endl;
				}
				else
				{
					deque.Display();
				}
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;

			case 8:
				// Display
				system("cls");
				deque.Display();
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;

			case 9:
				// Size
				system("cls");
				std::cout << "Deque has " << deque.Size() << " elements";
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;
				
			case 0:
				//Back
				system("cls");
				goto start;

			default:
				break;
			}
			
			std::cout << std::endl;
			system("pause");
			goto dequestart;

		case 3:
			//Exit
			system("cls");
			system("exit");
			
		}
	}
	else
	{
	//input error
		system("cls");
		std::cout << "input error" << std::endl;
		userinput = 0;
		system("pause");
		goto start;
	}
		

}