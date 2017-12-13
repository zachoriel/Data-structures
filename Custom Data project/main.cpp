#include <iostream>
#include <string>
#include "test.h"

using namespace std;

class Person
{
public:
	string name;
	int age;
	string status;
};

int add(int a, int b)
{
	return a + b;
}

float add(float a, float b)
{
	return a + b;
}

template<typename T>
T sub(T a, T b)
{
	return a - b;
}

template<typename T>
void print(T value)
{
	std::cout << value;
}

template<>
void print(Person value)
{
	cout << value.name << endl;
	cout << value.age << endl;
	cout << value.status << endl;
}

template<typename T>
T minimum(T a, T b)
{
	if (a < b)
	{
		return a;
	}

	return b;
}

template <typename T>
T maximum(T a, T b)
{
	if (a > b)
	{
		return a;
	}

	return b;
}

template<typename T>
T clamped(T value, T lower, T upper)
{
	if (value < lower) 
	{
		return lower;
	}
	else if (value > upper)
	{
		return upper;
	}
	else
	{
		return value;
	}
}

int main()
{
	Person userOne;
	userOne.name = "Person 1: Doug";
	userOne.age = 24;
	userOne.status = "Status: in the pit of misery, dilly dilly";

	Person userTwo;
	userTwo.name = "Person 2: Greg";
	userTwo.age = 21;
	userTwo.status = "Status: getting bud light";

	Person userThree;
	userThree.name = "Person 3: General Tullius";
	userThree.age = 58;
	userThree.status = "Status: dead! #skyrimbelongstothenords #forulfric";

	Person userFour;
	userFour.name = "Person 4: Ramsay Bolton";
	userFour.age = 22;
	userFour.status = "Status: eaten by his own dogs";

	Person userFive;
	userFive.name = "Person 5: Ajit Pai";
	userFive.age = 44;
	userFive.status = "Status: killing the internet";

	assert<true>(2 == 2);
	assertEqual(6, 6);
	assertNotEqual(12, 52);

	int lesser = minimum(1, 13);
	print(lesser);
	cout << endl;

	int bigger = maximum(2, 3);
	print(bigger);
	cout << endl;

	int clamp = clamped(24, 40, 67); 
	print(clamp);
	cout << endl;
									
	float v1 = add(4.1f, 7.9f);
	print(v1);
	cout << endl;

	float s1 = sub(1.5f, 2.1f);
	int s2 = sub<int>(0, 2.0f);
	print(s2 - s1);
	cout << endl;

	cout << endl;

	print(userOne);
	cout << endl;
	print(userTwo);
	cout << endl;
	print(userThree);
	cout << endl;
	print(userFour);
	cout << endl;
	print(userFive);

	system("pause");
	return 0;
}