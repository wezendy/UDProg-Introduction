#include "std_lib_facilities.h"

int main()

{
	string your_first_name {};
	string friend_name {};
	string other_friend_name {};
	char other_friend_sex = 0;
	int  age = 0;

	cout << "Enter your first name: \n";
	cin >> your_first_name;

	cout << "Enter the name of the person you want to write to: \n";
	cin >> friend_name;

	cout << "Enter the name of the other friend: \n";
	cin >> other_friend_name;

	cout << "Enter the sex of your other friend:(m for male, f for female) \n";
	cin >> other_friend_sex;

	cout << "Enter the age of your friend: \n";
	cin >> age;


	cout << "\nDear friend " << friend_name << "!\n\n";


	cout << "How are you? I am fine.\n I miss you. I hope you doing well boi. Have you seen " << other_friend_name << " lately?\n";

	if (other_friend_sex == 'm')
		cout << "If you see " << other_friend_name << " please ask him to call me.\n";

			else if (other_friend_sex == 'f')
				cout << "If you see " << other_friend_name << " please ask her to call me.\n";
	else 
		cout << "What happened to your gender?\n";

	if (age <= 0 or age >= 110 )
		simple_error("you're kidding!");
	else
		cout << "I hear you just had your birthday and you are "<< age <<" years old now. \n";

	if (age < 12)
		cout << "You will be " << age + 1 << " next year. \n";
			else if (age == 17)
					cout << "Next year you will be able to vote. \n";
			else if (age > 70)
					cout << "I hope you are enjoying retirement. \n";

	cout << "\n\nYours sincerely\n\n";
	cout << "\t\t " << your_first_name << " \n";

	return 0;


}