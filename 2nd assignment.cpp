#include <iostream>
using namespace std;


class OurMainClass{ //class

   private: //variable to keep track of objects
      static int count;

   public:
      OurMainClass() { //constructor of the class
         cout << "ekta object create korlei ami class call hobo" << endl;
         count++;
      }

      static int objCount() { //count k print kora ba count er result return korar jonno function laghbei laghbe
         return count;
      }
   };

//int OurMainClass::count; //je kotha nicher tao se kotha.
int OurMainClass::count = 0;

//baire theke count ke 0 dia start kora hoiche, jake amra machine e tel dala hoiche bolte pari

int main() {
   OurMainClass firstObj, secondObj, thirdObj; //class k object banalam

   int countkeeper; //oi je count korchi oita re rakhar jonno variable create korlam
   countkeeper = OurMainClass::objCount(); //function call kore variable rakha hoiche

   cout << "Number of objects: " << countkeeper; //total result print
}
