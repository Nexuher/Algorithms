#include <iostream>
#include <algorithm> 
#include <vector>
#include <chrono>

using namespace std;

const int TEST_AMMOUNT = 1000;

void printArray(vector<int> inputArray)
{
	for (int i = 0; i < inputArray.size(); i++)
	{
		cout << inputArray.at(i) << " ";
	}
	cout << endl;
}

void BubbleSort(vector<int> inputArray) {
	bool didSwapHappened = true;
	while (didSwapHappened)
	{
		didSwapHappened = false;

		for (int i = 0; i < inputArray.size() - 1; i++)
		{
			if (inputArray[i] > inputArray[i + 1])
			{
				int temp = inputArray[i];
				inputArray[i] = inputArray[i + 1];
				inputArray[i + 1] = temp;

				didSwapHappened = true;
			}
		}
	}
}

int main()
{
	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();

	for (int i = 0; i < TEST_AMMOUNT; i++)
	{
		vector<int> array{ 513, 330, 554, 149, 222, 812, 232, 972, 508, 704, 236, 329, 128, 242, 681, 922, 617, 849, 541, 662, 858, 714, 851, 32, 661, 333, 362, 593, 463, 372, 323, 713, 33, 269, 463, 817, 813, 370, 687, 28, 661, 111, 798, 64, 381, 813, 663, 413, 187, 331, 155, 519, 150, 211, 428, 918, 235, 886, 757, 605, 907, 685, 821, 419, 482, 850, 891, 249, 63, 325, 407, 860, 897, 28, 528, 967, 884, 934, 874, 87, 792, 98, 513, 291, 656, 773, 302, 419, 305, 566, 787, 59, 862, 863, 479, 86, 165, 219, 689, 852, 322, 1, 979, 34, 967, 766, 718, 780, 916, 190, 937, 725, 350, 399, 775, 120, 206, 8, 826, 42, 514, 800, 855, 80, 592, 180, 7, 697, 981, 184, 995, 443, 188, 975, 616, 952, 969, 269, 268, 299, 664, 585, 108, 792, 284, 711, 73, 674, 308, 439, 941, 898, 553, 718, 719, 735, 967, 935, 162, 695, 648, 252, 135, 305, 193, 526, 660, 177, 463, 832, 66, 435, 467, 579, 962, 123, 683, 726, 406, 281, 545, 808, 843, 784, 184, 616, 820, 911, 380, 128, 575, 281, 248, 408, 293, 395, 430, 44, 528, 631, 332, 198, 951, 189, 30, 452, 425, 546, 436, 584, 916, 262, 287, 320, 189, 208, 752, 212, 59, 539, 446, 381, 672, 917, 167, 725, 44, 110, 702, 149, 747, 250, 737, 824, 730, 822, 547, 572, 46, 43, 742, 720, 417, 473, 142, 7, 528, 1000, 625, 623, 442, 524, 466, 962, 710, 388, 814, 998, 317, 717, 430, 347, 79, 576, 318, 129, 5, 929, 18, 88, 537, 301, 257, 244, 779, 186, 817, 783, 101, 519, 57, 845, 613, 553, 256, 888, 198, 534, 614, 542, 488, 496, 281, 608, 238, 980, 72, 41, 257, 41, 978, 279, 528, 166, 509, 403, 418, 608, 352, 888, 835, 256, 513, 191, 753, 133, 571, 326, 472, 953, 666, 702, 733, 989, 687, 733, 867, 904, 46, 224, 710, 183, 469, 744, 672, 853, 472, 279, 947, 951, 318, 619, 879, 730, 384, 638, 501, 675, 538, 581, 737, 668, 714, 250, 356, 876, 585, 607, 561, 753, 389, 863, 20, 525, 314, 166, 996, 209, 465, 586, 362, 619, 128, 475, 743, 252, 102, 871, 560, 834, 31, 835, 135, 147, 321, 176, 324, 727, 176, 259, 679, 216, 602, 157, 161, 62, 203, 885, 19, 883, 529, 231, 718, 527, 203, 846, 865, 151, 972, 155, 938, 984, 650, 125, 972, 922, 536, 6, 458, 137, 330, 565, 632, 638, 36, 365, 540, 351, 129, 525, 176, 69, 407, 804, 848, 20, 900, 994, 717, 845, 971, 736, 708, 194, 48, 668, 308, 626, 811, 500, 52, 131, 988, 322, 508, 897, 954, 189, 43, 537, 313, 340, 382, 481, 238, 419, 436, 587, 7, 591, 163, 698, 741, 683, 802, 465, 519, 374, 892, 25, 17, 427, 442, 808, 741, 348, 878, 952, 534, 492, 80, 796, 169, 735, 506, 120, 165, 800, 411, 747, 1000, 685, 123, 223, 823, 915, 322, 243, 899, 458, 332, 844, 212, 225, 774, 771, 325, 98, 696, 74, 859, 702, 156, 700, 20, 912, 565, 366, 907, 346, 756, 591, 326, 323, 830, 547, 636, 720, 576, 664, 792, 295, 763, 371, 58, 743, 168, 789, 709, 143, 528, 852, 239, 973, 645, 404, 204, 297, 746, 569, 427, 355, 639, 320, 99, 907, 861, 978, 168, 836, 663, 918, 173, 993, 405, 246, 113, 22, 519, 939, 84, 995, 349, 765, 390, 548, 312, 527, 764, 791, 897, 105, 280, 101, 308, 972, 703, 962, 600, 658, 515, 951, 442, 611, 615, 68, 258, 676, 969, 909, 54, 382, 817, 182, 487, 390, 13, 487, 167, 921, 857, 360, 305, 1, 755, 238, 675, 965, 268, 122, 688, 361, 50, 349, 462, 866, 418, 472, 429, 12, 791, 826, 654, 671, 460, 729, 87, 24, 225, 979, 339, 873, 78, 391, 97, 804, 130, 191, 332, 279, 353, 295, 316, 862, 970, 492, 582, 10, 272, 402, 433, 753, 873, 788, 177, 193, 656, 465, 635, 572, 469, 175, 435, 653, 302, 364, 541, 287, 719, 400, 508, 669, 633, 148, 204, 288, 931, 623, 489, 76, 39, 351, 248, 636, 658, 464, 999, 638, 486, 595, 758, 856, 789, 96, 333, 669, 30, 203, 938, 722, 265, 400, 922, 495, 396, 980, 118, 947, 821, 516, 429, 760, 55, 2, 565, 499, 777, 250, 175, 221, 470, 512, 821, 426, 963, 190, 514, 912, 311, 144, 859, 172, 663, 25, 909, 474, 705, 82, 78, 653, 440, 144, 148, 11, 749, 727, 831, 765, 70, 445, 874, 490, 950, 780, 206, 420, 754, 707, 45, 969, 661, 496, 182, 101, 854, 260, 922, 31, 14, 750, 704, 988, 535, 55, 17, 35, 101, 629, 594, 770, 21, 884, 241, 598, 55, 370, 669, 660, 638, 161, 864, 395, 137, 922, 817, 205, 747, 943, 417, 184, 27, 614, 669, 883, 569, 257, 417, 608, 127, 965, 519, 54, 287, 601, 932, 918, 424, 553, 560, 869, 705, 210, 601, 906, 482, 842, 796, 20, 896, 445, 226, 340, 701, 540, 182, 111, 384, 624, 946, 116, 787, 258, 606, 326, 920, 647, 84, 654, 464, 326, 301, 710, 843, 201, 650, 372, 797, 423, 236, 210, 786, 364, 698, 712, 711, 188, 790, 594, 540, 21, 38, 633, 382, 561, 540, 842, 613, 198, 925, 241, 641, 47, 205, 797, 909, 290, 314, 967, 840, 259, 113, 748, 173, 575, 163, 730, 337, 368, 216, 469, 413, 270, 508, 811, 846, 655, 828, 790, 349, 535, 15, 373, 320, 590, 940, 87, 9, 709, 164, 626, 741, 304, 497, 387, 321, 527, 743, 361, 67, 196, 243, 25, 620, 423, 19, 524, 276, 537, 794, 747, 236, 582, 29, 14, 898, 415, 968, 105, 825, 202, 768, 826, 370, 904, 479, 892, 336, 361, 369, 220, 259, 47, 71, 351, 997, 736, 150, 78, 345, 858, 755, 847, 724, 273, 990, 860, 237, 864, 720, 329 };
		BubbleSort(array);
	}
	
	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	std::cout << "Average Time Elapsed = " << 1.0 * std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count() / 1000 / TEST_AMMOUNT << "[s]" << std::endl;
	std::cout << "Total Time Elapsed = " << 1.0 * std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count() / 1000 << "[s]" << std::endl;

	//array = { 17, 13, 19, 10, 8, 12, 6, 14, 2, 3 };
	//BubbleSort(array);

	//array = { 23, 18, 16, 21, 25, 22, 24, 20, 19, 17 };
	//BubbleSort(array);

	//array = { 49, 89, 28, 58, 83, 17, 75, 4, 65, 46 };
	//BubbleSort(array);

	//array = { 35, 72, 18, 91, 3, 50, 67, 11, 29, 88 };
	//BubbleSort(array);

	//array = { 1, 40, 24, 93, 52, 66, 20, 96, 82, 39 };
	//BubbleSort(array);
}