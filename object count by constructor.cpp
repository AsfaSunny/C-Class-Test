
#include <iostream>
#include <string.h>
using namespace std;

//class
class Assignment
{
	private: //member static variable
      static int count;

    public:
        string OutputTEXT; //member variable for output message


	public:
		Assignment() { //constructor
			count++;
		}

		//member function to print message
		void printMessage() {
			cout << OutputTEXT << endl;
		}

		//member function for keep trucking the counter value or number
		static int ObjectsKeeperFunction() {
			return count;
		}
};

//static member variable seted at 0; (int Message::count = 0;)
int Assignment::count;



//main function
int main()
{
	Assignment O1, O2, O3, O4, O5; //class to object

	O1.OutputTEXT = "First time Class Call for first object creation \n";
	O1.printMessage();

	O2.OutputTEXT = "Second time Class Call for 2nd object creation \n";
	O2.printMessage();

	O3.OutputTEXT = "Third time Class Call for 3rd object creation \n";
	O3.printMessage();

	O4.OutputTEXT = "Fourth time Class Call for 4th object creation \n";
	O4.printMessage();

	O5.OutputTEXT = "Fifth time Class Call for 5th object creation \n";
	O5.printMessage();



	//printing total object that we counted:
	cout << "Our Total Objects: " << Assignment::ObjectsKeeperFunction() << endl;

	return 0;
}
