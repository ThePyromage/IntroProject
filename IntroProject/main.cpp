#include <iostream>

void ifElse()
{
	//Exercise one. 
	int x = 4;
	int y = 0;
	if (y == 0)
	{
		x = 100;
	}
	//Excercise two. 
	std::cout << std::endl << "Exercise 2" << std::endl << std::endl;
	int userNum1 = 0;
	int userNum2 = 0;
	
	std::cout << "Please enter a number: " << std::endl;
	std::cin >> userNum1;
	std::cin.ignore(99999, '\n');
	std::cin.clear();

	std::cout << "Please enter another number: " << std::endl;
	std::cin >> userNum2;
	std::cin.ignore(99999, '\n');
	std::cin.clear();

	if (userNum1 > userNum2)
	{
		std::cout << "The largest number is: " << userNum1 << std::endl;
	}
	else if (userNum1 < userNum2)
	{
		std::cout << "The largest number is: " << userNum2 << std::endl;
	}
	else
	{
		std::cout << "The numbers are the same." << std::endl << std::endl;
	}
	//Excercise three. 
	std::cout << std::endl << "Exercise 3" << std::endl << std::endl;
	int numOne = 0;
	int numTwo = 0;
	int numThree = 0;
	int numFour = 0;
	int numFive = 0;

	std::cout << "Please enter five numbers: " << std::endl;
	std::cin >> numOne; 
	std::cin.ignore(99999, '\n');
	std::cin.clear();
	std::cin >> numTwo;
	std::cin.ignore(99999, '\n');
	std::cin.clear();
	std::cin >> numThree;
	std::cin.ignore(99999, '\n');
	std::cin.clear();
	std::cin >> numFour;
	std::cin.ignore(99999, '\n');
	std::cin.clear();
	std::cin >> numFive;
	std::cin.ignore(99999, '\n');
	std::cin.clear();

	if ((numOne + numTwo + numThree + numFour + numFive) > 0)
	{
		std::cout << std::endl << "Sum is positive." << std::endl;
	}
	else if ((numOne + numTwo + numThree + numFour + numFive) < 0)
	{
		std::cout << std::endl << "Sum is negative." << std::endl;
	}
	else
	{
		std::cout << std::endl << "Sum is zero." << std::endl;
	}

	//Excercise four. 
	std::cout << std::endl << "Exercise 5" << std::endl << std::endl;
	int choice = 0;
	std::cout << "Please enter a number between one and four: " << std::endl;
	std::cin >> choice;
	std::cin.ignore(99999, '\n');
	std::cin.clear();

	switch (choice)
	{
	case(1):
		std::cout << "1" << std::endl;
		break;
	case(2):
		std::cout << "2 or 3" << std::endl;
		break;
	case(3):
		std::cout << "2 or 3" << std::endl;
		break;
	case(4):
		std::cout << "4" << std::endl;
		break;
	default:
		std::cout << "Invalid" << std::endl;
		break;
	}

	//Excercise five. 
	//Ternary operators ain't good. 
	x == 0 ? y = 0 : y = 10 / x;

	//Excercise six.    
	std::cout << std::endl << "Exercise 6" << std::endl << std::endl;
	int userNumberUno = 0;
	int userNumberDuo = 0;
	float userNumberCombined = 0.0f;
	char userNumberOperator = 'A';
	std::cout << "Please enter a number: " << std::endl;
	std::cin >> userNumberUno;
	std::cin.ignore(99999, '\n');
	std::cin.clear();

	std::cout << "Please enter a second number: " << std::endl;
	std::cin >> userNumberDuo;
	std::cin.ignore(99999, '\n');
	std::cin.clear();

	std::cout << "Please enter a mathematical operator: " << std::endl;
	std::cin >> userNumberOperator;
	std::cin.ignore(99999, '\n');
	std::cin.clear();

	if (userNumberOperator == '+')
	{
		userNumberCombined = userNumberUno + userNumberDuo;
		std::cout << "Your added number is: " << userNumberCombined << std::endl;
	}
	else if (userNumberOperator == '-')
	{
		userNumberCombined = userNumberUno - userNumberDuo;
		std::cout << "Your subtracted number is: " << userNumberCombined << std::endl;
	}
	else if (userNumberOperator == '*')
	{
		userNumberCombined = userNumberUno * userNumberDuo;
		std::cout << "Your multiplied number is: " << userNumberCombined << std::endl;
	}
	else if (userNumberOperator == '/')
	{
		userNumberCombined = userNumberUno / userNumberDuo;
		std::cout << "Your divided number sans decimals is: " << userNumberCombined << std::endl;
	}
	else if (userNumberOperator == '%')
	{
		userNumberCombined = userNumberUno % userNumberDuo;
		std::cout << "Your modulated number is: " << userNumberCombined << std::endl;
	}
	else
	{
		std::cout << "Invalid operator" << std::endl;
	}

	//Excercise seven. 
	std::cout << std::endl << "Exercise 7" << std::endl << std::endl;
	int month = 0;
	std::cout << "Please enter a number between 1 and 12: " << std::endl;
	std::cin >> month;
	std::cin.ignore(99999, '\n');
	std::cin.clear();
	switch (month)
	{
	case(1):
		std::cout << "January has 31 days." << std::endl;
		break;
	case(2):
		std::cout << "February has either 28 or 29 days." << std::endl;
		break;
	case(3):
		std::cout << "March has 31 days." << std::endl;
		break;
	case(4):
		std::cout << "April has 30 days." << std::endl;
		break;
	case(5):
		std::cout << "May has 31 days." << std::endl;
		break;
	case(6):
		std::cout << "June has 30 days." << std::endl;
		break;
	case(7):
		std::cout << "July has 31 days." << std::endl; 
		break;
	case(8):
		std::cout << "August has 31 days." << std::endl;
		break;
	case(9):
		std::cout << "September has 30 days." << std::endl;
		break;
	case(10):
		std::cout << "October has 31 days." << std::endl;
		break;
	case(11):
		std::cout << "November has 30 days." << std::endl;
		break;
	case(12):
		std::cout << "December has 31 days." << std::endl;
		break;
	default:
		std::cout << "Invalid number" << std::endl;
		break;
	}
	
	//bool flag = true;
	//int numPos = 35, numNeg = -55;
	//char frstChar = 'J', scndChar = '0';
	//double frstPrice = 5.60;
	//bool a = true;
	//bool b = false;
	//if (!a&&b)
	//{
	//	std::cout << "True" << std::endl;
	//}
	//else
	//{
	//	std::cout << "False" << std::endl;
	//}

	
	//Excercise 8
	//a. True
	//b. True
	//c. False
	//d. True
	//e. True
	//f. False
	//g. True
	//h. True
	//i. False
	//j. True
	

	
	//Excercise 9
	//a. True
	//b. True
	//c. False
	//d. True
	//e. False
	return;
}

void loops()
{
	//Exercise 1
	int excerciseOneCounter = 100;
	std::cout << std::endl << "Exercise 1" << std::endl << std::endl;
	for (int e = 0; e < 101; e++)
	{
		std::cout << excerciseOneCounter << std::endl;
		excerciseOneCounter--;
	}
	system("pause");
	excerciseOneCounter = 100;
	for (int e = 0; e < 100; e++)
	{
		excerciseOneCounter--;
		std::cout << excerciseOneCounter << std::endl;
	}
	system("pause");
	excerciseOneCounter = 100;
	for (int e = 0; e < 100; e++)
	{
		std::cout << excerciseOneCounter << std::endl;
		excerciseOneCounter--;
	}
	system("pause");
	excerciseOneCounter = 100;
	for (int e = 0; e < 50; e++)
	{
		std::cout << excerciseOneCounter << std::endl;
		excerciseOneCounter -= 2;
	}
	system("pause");

	//Exercise 2
	int someNumber = 0;
	std::cout << std::endl << "Exercise 2" << std::endl << std::endl;
	for (int i = 0; i < 100; i++)
	{
		someNumber++;
		if ((someNumber % 3 == 0) && (someNumber % 5 == 0))
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		else if (someNumber % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
		}
		else if (someNumber % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
		else
		{
			std::cout << someNumber << std::endl;
		}
	}
	system("pause");

	//Exercise 3
	std::cout << std::endl << "Exercise 3" << std::endl << std::endl;
	int aCounter = 0;
	int sumOfNumbers = 0;
	for (int f = 0; f < 1000; f++)
	{
		aCounter++;
		if (aCounter % 3 == 0 || aCounter % 5 == 0)
		{
			sumOfNumbers += aCounter;
		}
	}
	std::cout << sumOfNumbers << std::endl;
	system("pause");

	//Exercise 4
	std::cout << std::endl << "Exercise 4" << std::endl << std::endl;
	//Exercise 4.1
	int excerciseFourCounterOne = 100;
	while (excerciseFourCounterOne >= 0)
	{
		std::cout << excerciseFourCounterOne << std::endl;
		excerciseFourCounterOne--;
	}
	system("pause");
	excerciseFourCounterOne = 100;
	while (excerciseFourCounterOne > 0)
	{
		excerciseFourCounterOne--;
		std::cout << excerciseFourCounterOne << std::endl;
	}
	system("pause");
	excerciseFourCounterOne = 100;
	while (excerciseFourCounterOne > 0)
	{
		std::cout << excerciseFourCounterOne << std::endl;
		excerciseFourCounterOne--;
	}
	system("pause");
	excerciseFourCounterOne = 100;
	while (excerciseFourCounterOne >= 0)
	{
		std::cout << excerciseFourCounterOne << std::endl;
		excerciseFourCounterOne -= 2;
	}
	system("pause");

	//Exercise 4.2
int someNumberFour = 0;
while (someNumberFour < 100)
{
	someNumberFour++;
	if ((someNumberFour % 3 == 0) && (someNumberFour % 5 == 0))
	{
		std::cout << "FizzBuzz" << std::endl;
	}
	else if (someNumberFour % 3 == 0)
	{
		std::cout << "Fizz" << std::endl;
	}
	else if (someNumberFour % 5 == 0)
	{
		std::cout << "Buzz" << std::endl;
	}
	else
	{
		std::cout << someNumberFour << std::endl;
	}
}
system("pause");

//Exercise 4.3
int aCounterFour = 0;
int sumOfNumbersFour = 0;
while (aCounterFour <= 1000)
{
	aCounterFour++;
	if (aCounterFour % 3 == 0 || aCounterFour % 5 == 0)
	{
		sumOfNumbersFour += aCounterFour;
	}
}
std::cout << sumOfNumbersFour << std::endl;
return;
}

void arrays()
{
	//Exercise 1
	//numbers[] is valid
	//matrix[] is not valid
	//radii[] is not valid
	//table[] is not valid
	//codes[] is valid
	//blanks[] is not valid
	//collection[] is not valid
	//hours[] is not valid

	//Exercise 2
	//int values[] = {2, 6, 10, 14};
	//a) 10
	//b) 3
	//c) 6
	//d) 14
	//e) Random garbage memory

	//Exercise 3
	std::cout << std::endl << "Exercise 3" << std::endl << std::endl;

	int data[10];
	int number = 10;
	for (int i = 0; i < 10; i++)
	{
		data[i] = number;
		number -= 1;
		std::cout << data[i] << std::endl;
	}
	system("pause");

	//Exercise 4
	std::cout << std::endl << "Exercise 4" << std::endl << std::endl;
	int userNumbers[5];
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please enter a number: ";
		std::cin >> userNumbers[i];
		std::cin.ignore(99999, '\n');
		std::cin.clear();
	}
	std::cout << "Your numbers in reverse order: " << std::endl;
	for (int i = 4; i >= 0; i--)
	{
		std::cout << userNumbers[i] << std::endl;
	}
	system("pause");

	//Exercise 5
	std::cout << std::endl << "Exercise 5" << std::endl << std::endl;
	int moreUserNumbers[10];
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Please enter a number: ";
		std::cin >> moreUserNumbers[i];
		std::cin.ignore(99999, '\n');
		std::cin.clear();
	}
	signed int largestUserNumber = -2147483647;
	signed int smallestUserNumber = 2147483647;
	for (int i = 0; i < 10; i++)
	{
		if (moreUserNumbers[i] > largestUserNumber)
		{
			largestUserNumber = moreUserNumbers[i];
		}
		if (moreUserNumbers[i] < smallestUserNumber)
		{
			smallestUserNumber = moreUserNumbers[i];
		}
	}
	std::cout << "Your largest number is: " << largestUserNumber << std::endl << "Your smallest number is: " << smallestUserNumber << std::endl;
	system("pause");

	//Exercise 6
	std::cout << std::endl << "Exercise 6" << std::endl << std::endl;
	int numberGrid[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int e = 0; e < 3; e++)
		{
			numberGrid[i][e] = (e + 1) + (i * 3);
			std::cout << " " << numberGrid[i][e] << " ";
		}
		std::cout << std::endl;
	}
	system("pause");

	//Exercise 7
	std::cout << std::endl << "Exercise 7" << std::endl << std::endl;
	int days[29][5] =
	{ { 1, 2, 3, 4, 5 },
	{ 2, 2, 3, 4, 5 },
	{ 3, 2, 3, 4, 5 },
	{ 4, 2, 3, 4, 5 },
	{ 5, 2, 3, 4, 5 },
	{ 6, 2, 3, 4, 5 },
	{ 7, 2, 3, 4, 5 },
	{ 8, 2, 3, 4, 5 },
	{ 9, 2, 3, 4, 5 },
	{ 10, 2, 3, 4, 5 },
	{ 11, 2, 3, 4, 5 },
	{ 12, 2, 3, 4, 5 },
	{ 13, 2, 3, 4, 5 },
	{ 14, 2, 3, 4, 5 },
	{ 15, 2, 3, 4, 5 },
	{ 16, 2, 3, 4, 5 },
	{ 17, 2, 3, 4, 5 },
	{ 18, 2, 3, 4, 5 },
	{ 19, 2, 3, 4, 5 },
	{ 20, 2, 3, 4, 5 },
	{ 21, 2, 3, 4, 5 },
	{ 22, 2, 3, 4, 5 },
	{ 23, 2, 3, 4, 5 },
	{ 24, 2, 3, 4, 5 },
	{ 25, 2, 3, 4, 5 },
	{ 26, 2, 3, 4, 5 },
	{ 27, 2, 3, 4, 5 },
	{ 28, 2, 3, 4, 5 },
	{ 29, 2, 3, 4, 5 } };

	int sumOfRows[29];
	int sumOfColumns[5];
	std::cout << "Sums of rows: " << std::endl;
	for (int i = 0; i < 29; ++i)
	{
		sumOfRows[i] = 0;
		for (int e = 0; e < 5; ++e)
		{
			sumOfRows[i] += days[i][e];
		}
		std::cout << sumOfRows[i] << std::endl;
	}
	std::cout << std::endl << "Sums of columns: " << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		sumOfColumns[i] = 0;
		for (int e = 0; e < 29; ++e)
		{
			sumOfColumns[i] += days[e][i];
		}
		std::cout << sumOfColumns[i] << std::endl;
	}
	system("pause");

	//Exercise 8
	std::cout << std::endl << "Exercise 8" << std::endl << std::endl;
	int characterHealth[5] = { 100, 100, 100, 100, 100 };
	int attackedChar = 0;
	int damage;
	for (int i = 0; i < 5; ++i)
	{
	contin:;
		std::cout << "Choose a character to attack (0-4): ";
		std::cin >> attackedChar;
		std::cin.ignore(99999, '\n');
		std::cin.clear();
		if (attackedChar >= 0 && attackedChar <= 4)
		{
			if (characterHealth[attackedChar] <= 0)
			{
				std::cout << "Character is dead, cannot be attacked." << std::endl;
				goto contin;
			}
			else
			{
				damage = rand() % 100 + 1;
				characterHealth[attackedChar] -= damage;
				std::cout << "Character " << attackedChar << " took " << damage << " damage!" << std::endl;
				if (characterHealth[attackedChar] < 0)
				{
					characterHealth[attackedChar] = 0;
					std::cout << "Character " << attackedChar << " has died!" << std::endl;
				}
			}
		}
		else
		{
			std::cout << "Invalid character" << std::endl;
			goto contin;
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "Character " << i << " health: " << characterHealth[i];
		if (characterHealth[i] <= 0)
		{
			std::cout << " - DEAD" << std::endl;
		}
		else
		{
			std::cout << std::endl;
		}
	}
	system("pause");

	//Exercise 9
	//std::cout << std::endl << "Exercise 9" << std::endl << std::endl;
	//int dragonFeed[3][7];
	//for (int i = 0; i < 3; ++i)
	//{
	//	std::cout << std::endl << "Please input information for dragon number " << (i + 1) << ": " << std::endl;
	//	for (int e = 0; e < 7; ++e)
	//	{
	//		switch (e)
	//		{
	//		case(0):
	//			std::cout << "How many kilograms of food does dragon " << (i + 1) << " eat on Monday? ";
	//			std::cin >> dragonFeed[i][e];
	//			std::cin.ignore(99999, '\n');
	//			std::cin.clear();
	//			break;
	//		case(1):
	//			std::cout << "How many kilograms of food does dragon " << (i + 1) << " eat on Tuesday? ";
	//			std::cin >> dragonFeed[i][e];
	//			std::cin.ignore(99999, '\n');
	//			std::cin.clear();
	//			break;
	//		case(2):
	//			std::cout << "How many kilograms of food does dragon " << (i + 1) << " eat on Wednesday? ";
	//			std::cin >> dragonFeed[i][e];
	//			std::cin.ignore(99999, '\n');
	//			std::cin.clear();
	//			break;
	//		case(3):
	//			std::cout << "How many kilograms of food does dragon " << (i + 1) << " eat on Thursday? ";
	//			std::cin >> dragonFeed[i][e];
	//			std::cin.ignore(99999, '\n');
	//			std::cin.clear();
	//			break;
	//		case(4):
	//			std::cout << "How many kilograms of food does dragon " << (i + 1) << " eat on Friday? ";
	//			std::cin >> dragonFeed[i][e];
	//			std::cin.ignore(99999, '\n');
	//			std::cin.clear();
	//			break;
	//		case(5):
	//			std::cout << "How many kilograms of food does dragon " << (i + 1) << " eat on Saturday? ";
	//			std::cin >> dragonFeed[i][e];
	//			std::cin.ignore(99999, '\n');
	//			std::cin.clear();
	//			break;
	//		case(6):
	//			std::cout << "How many kilograms of food does dragon " << (i + 1) << " eat on Sunday? ";
	//			std::cin >> dragonFeed[i][e];
	//			std::cin.ignore(99999, '\n');
	//			std::cin.clear();
	//			break;
	//		default:
	//			std::cout << "Something's gone wrong." << std::endl;
	//		}
	//	}
	//}
}

void main()
{
begin:;
	int selection = 0;
	std::cout << "Please enter '1' for If Else statement work, '2' for Loop work, or '3' for Arrays work" << std::endl;
	std::cin >> selection;
	std::cin.ignore(99999, '\n');
	std::cin.clear();
	if (selection == 1)
	{
		ifElse();
	}
	else if (selection == 2)
	{
		loops();
	}
	else if (selection == 3)
	{
		arrays();
	}
	else
	{
		std::cout << "Invalid number" << std::endl;
	}
	char restartSelection = 0;
restartText:;
	std::cout << std::endl << "Would you like to restart this program? Y/N " << std::endl;
	std::cin >> restartSelection;
	std::cin.ignore(99999, '\n');
	std::cin.clear();
	if (restartSelection == 'Y')
	{
		goto begin;
	}
	else if (restartSelection == 'N')
	{
		return;
	}
	else
	{
		std::cout << "Invalid selection" << std::endl;
		goto restartText;
	}
	system("pause");
}