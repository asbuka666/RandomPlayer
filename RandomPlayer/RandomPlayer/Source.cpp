// RandomPlayer - Случайный игрок
//
#include <iostream>
#include <time.h>

static int arr[9];

static int as = 1;

void Set(int data, int size);
bool Check(int data, int size);
int RandomPlayer(int data, int size1, int size2);

int main()
{
	setlocale(LC_ALL, "Rus");

	char a;
	int b;

	do
	{
		b = RandomPlayer(4, 50, 4);
		std::cout << "b = " << b << std::endl;

		std::cin >> a;
		
		if (a == '0')
			break;

	} while (a != '0');

	return 0;
}

void Set(int data, int size)
{
	static int a = data;

	if (as > a)
		*arr = 0;

	switch (data - 1)
	{
	case 0: arr[0] = size; as++; break;
	case 1: arr[1] = size; as++; break;
	case 2: arr[2] = size; as++; break;
	case 3: arr[3] = size; as++; break;
	case 4: arr[4] = size; as++; break;
	case 5: arr[5] = size; as++; break;
	case 6: arr[6] = size; as++; break;
	case 7: arr[7] = size; as++; break;
	case 8: arr[8] = size; as++; break;

	/*case 9: arr[9] = size; break;*/
	}
}

bool Check(int data, int size)
{
	while (true)
	{
		switch (data - 1)
		{
		case 0:
			if (size == arr[0])
				return true;
			else
				return false;

		case 1:
			if (size == arr[1])
				return true;
			else
				break;

		case 2:
			if (size == arr[2])
				return true;
			else
				break;

		case 3:
			if (size == arr[3])
				return true;
			else
				break;

		case 4:
			if (size == arr[4])
				return true;
			else
				break;

		case 5:
			if (size == arr[5])
				return true;
			else
				break;

		case 6:
			if (size == arr[6])
				return true;
			else
				break;

		case 7:
			if (size == arr[7])
				return true;
			else
				break;

		case 8:
			if (size == arr[8])
				return true;
			else
				break;

		/*case 9:
			if (size == arr[9])
				return true;
			else
				break;*/
		}

		data--;
	}

	return false;
}

int RandomPlayer(int data, int size1, int size2)
{
	srand((int)time(NULL));

	static int t1;
	static int size = data;

	switch (size)
	{
	case 1:
		if (size == data)
		{
			t1 = size1 + rand() % size2 + 1;
			Set(size, t1); size--; break;
		}
		while (Check(data, t1))
			t1 = size1 + rand() % size2 + 1;
		Set(size, t1); size--;  break;

	case 2:
		if (size == data)
		{
			t1 = size1 + rand() % size2 + 1;
			Set(size, t1); size--; break;
		}
		while (Check(data, t1))
			t1 = size1 + rand() % size2 + 1;
		Set(size, t1); size--; break;

	case 3:
		if (size == data)
		{
			t1 = size1 + rand() % size2 + 1;
			Set(size, t1); size--; break;
		}
		while (Check(data, t1))
			t1 = size1 + rand() % size2 + 1;
		Set(size, t1); size--; break;

	case 4:
		if (size == data)
		{
			t1 = size1 + rand() % size2 + 1;
			Set(size, t1); size--; break;
		}
		while (Check(data, t1))
			t1 = size1 + rand() % size2 + 1;
		Set(size, t1); size--; break;

	case 5:
		if (size == data)
		{
			t1 = size1 + rand() % size2 + 1;
			Set(size, t1); size--; break;
		}
		while (Check(data, t1))
			t1 = size1 + rand() % size2 + 1;
		Set(size, t1); size--; break;

	case 6:
		if (size == data)
		{
			t1 = size1 + rand() % size2 + 1;
			Set(size, t1); size--; break;
		}
		while (Check(data, t1))
			t1 = size1 + rand() % size2 + 1;
		Set(size, t1); size--; break;

	case 7:
		if (size == data)
		{
			t1 = size1 + rand() % size2 + 1;
			Set(size, t1); size--; break;
		}
		while (Check(data, t1))
			t1 = size1 + rand() % size2 + 1;
		Set(size, t1); size--; break;

	case 8:
		if (size == data)
		{
			t1 = size1 + rand() % size2 + 1;
			Set(size, t1); size--; break;
		}
		while(Check(data, t1))
			t1 = size1 + rand() % size2 + 1;
		Set(size, t1); size--; break;

	case 9:
		t1 = size1 + rand() % size2 + 1;
		Set(size, t1); size--; break;
	}

	if (size < 1)
	{
		size = data;
	}

	return t1;
}