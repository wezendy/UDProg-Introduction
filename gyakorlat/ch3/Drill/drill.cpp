#include "std_lib_facilities.h"

int main()

{
	string friend_name;
	string other_friend_name;
	char other_friend_sex = 0;
	int  age = 0;


	cout << "Enter the name of the person you want to write to: \n";
	cin >> friend_name;

	cout << "Enter the name of the other friend: \n";
	cin >> other_friend_name;

	cout << "Enter the sex of other your friend: \n";
	cin >> other_friend_sex;

	cout << "Enter the age of your friend: \n";
	cin >> age;


	cout << "Dear friend " << friend_name << "!\n";


	cout << "How are you? I am fine.\n""I miss you. I hope you doing well boi. Have you seen " << other_friend_name << " lately?\n";

	if (other_friend_sex = 'm')
		cout << "If you see " << other_friend_name << " please ask him to call me.\n";

	else 
		cout << "If you see " << other_friend_name << " please ask her to call me.\n";

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

	cout << "Yours sincerely\n\n";


}