#include <iostream>
using namespace std;
int main() {
	string name;
	



	cout << "hello and welcome to my choose your own adventure game!\n";
	system("pause \n");
		cout << "before anything starts, what is your name?\n";
			cin >> name;
		cout << "hello ";
		cout << name;
		cout << "!\n";
			system("pause");
		cout << "adventure start!\n";
			system("pause");
		cout << "today is like any other day. ";
		cout << name;
		cout << " is walking down the sidewalk to see his friend at the park.\n";
			system("pause");
		cout << "little did ";
		cout << name;
		cout << " know, his small choices that happen today will have disastrous long term effects.\n";
			system("pause");
		cout << "this walk is taking a long time. should you run?\n";
		cout << "yes/no (1=yes 2=no)\n";
				int choice;
		cin >> choice;
			if (choice == 1)
				{
					cout << "you died lol\n";
					{
						exit;
					}
				}

			if (choice == 2)
			{
				cout << "you decide to do the safe thing and not run.\n";
				system("pause");
				cout << "when you get the park, you see your friends.\n";
				cout << "you go over to them, but then you get a call from an unknown number.\n";
				cout << "hello? you say.\n \n";
				system("pause");
				cout << "you can either choose to hang up or keep talking. (1 to keep talking and 2 to hang up.)\n";
				
			}
				cin >> choice;
				if (choice == 1)
				{
					cout << "you keep talking.\n";
						cout <<name;
						cout << ": who are you?\n";
						cout << "Phone: listen to me carefully. you are in danger. do not go to the park today.";
						cout << "thats all i feel like coding today go away";
						system("pause");
				
				}

				if (choice == 2)
				{
					cout << "you hang up. that was the wrong choice.";
					{
						exit;
					}
				}
				
}