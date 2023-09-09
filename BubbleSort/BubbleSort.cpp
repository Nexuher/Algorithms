#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

void printArray(vector<int> inputArray)
{
	for (int i = 0; i < inputArray.size(); i++)
	{
		cout << inputArray.at(i) << " ";
	}
	cout << endl;
}

int BubbleSort(vector<int> inputArray) {
	bool didSwapHappened = false;
	while (true)
	{
		for (int i = 0; i < inputArray.size() - 1; i++)
		{
			int firstItem = inputArray.at(i);
			int secondItem = inputArray.at(i + 1);

			if (firstItem > secondItem)
			{
				inputArray.at(i) = secondItem;
				inputArray.at(i + 1) = firstItem;

				didSwapHappened = true;
			}
		}
		
		if (!didSwapHappened)
		{
			printArray(inputArray);
			return 0;
		}
		didSwapHappened = false;
	}
}

int main()
{
	vector<int> array{ 6, 2, 3, 15, 20, 5, 1, 0 };
	BubbleSort(array);

	array = { 17, 13, 19, 10, 8, 12, 6, 14, 2, 3 };
	BubbleSort(array);

	array = { 23, 18, 16, 21, 25, 22, 24, 20, 19, 17 };
	BubbleSort(array);

	array = { 49, 89, 28, 58, 83, 17, 75, 4, 65, 46 };
	BubbleSort(array);

	array = { 35, 72, 18, 91, 3, 50, 67, 11, 29, 88 };
	BubbleSort(array);

	array = { 1, 40, 24, 93, 52, 66, 20, 96, 82, 39 };
	BubbleSort(array);
}