#include <iostream>;

using namespace std;
//Justin Ecarma
//9/22/2019
//Data Basics Lab 1
//Extra: Also prints out the number of kilometers you would need run, and the amount of calories you have consumed
int main()
{

	int slices, calories;

	double miles, km;

	cout << "How many slices of pizza did you eat?";

	cin >> slices;

	calories = slices * 375;

	miles = calories / 100;

	km = miles * 1.60934;

	cout << "You need to run " << miles << " miles or " << km << " km to burn the " << calories << " you have consumed.";

};