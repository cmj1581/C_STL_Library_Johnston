/*
	Teacher: Dr. Tyson McMillan, Ph.D.  
  STUDENT (McMillanite):
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};

class MyClassVector2 {
  vector<int> vec2;

  public:
    MyClassVector2(vector<int> v2) : vec2(v2) {
    }
    void print() {
        for (int i = 0; i < vec2.size(); i++)
          cout << vec2[i] << " ";
    }
};

class MyClassVector3 {

    vector<int>& vec3;

  public:
  MyClassVector3(vector<int>& arr)
      : vec3(arr) {
      }
  void print() {
    for (int i = 0; i < vec3.size(); i++)
      cout << vec3[i] << " ";
  }
};

typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;

bool less_than_7(int value) {
      return value < 7;
    }


int main(int argc, char* argv[]) 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(55.4); 

    //add 3 elements to the vi vector
    vi.push_back(10);
    vi.push_back(22);
    vi.push_back(53);
   // add 3 elements to the vs vector
    vs.push_back("Win");
    vs.push_back("or");
    vs.push_back("lose");
    vs.push_back("you can always come out ahead by learning from the experience");
   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }
    cout << endl;
    //display the 3 elements in the vi vector
    cout << "Here are your vi elements Mr. T" << endl;
    for (int i = 0; i < 10; i++) {
      cout << "*";
    }
    cout << endl;
    for (int vals : vi) {
      cout << vals << endl;
    }
   // display the 3 elements in the vs vector
    cout << endl << "Here are your vs elements Mr. T" << endl;
    for (int i = 0; i < 10; i++) {
      cout << "*";
    }
    cout << endl;
    for (string vals : vs) {
      cout << vals << " ";
    }
    cout << endl;
    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      //Continue with MyClassVector2 and MyClassVector3
    cout << endl << "Vector_Using_Initializer" << endl;
    vector<int> vec2;
    for (int i = 1; i <= 5; i++)
        vec2.push_back(i);
    MyClassVector2 obj2(vec2);
    obj2.print();

    cout << endl << "Vector as a reference" << endl;
    vector<int> vec3;
    for (int i = 1; i <= 5; i++)
      vec3.push_back(i);
    MyClassVector3 obj3(vec3);
    obj3.print();
  

    /****Section_Name***STL_Iterators*/ 
    vector <int> vint(10);
    vint[0] = 10;
    vint[1] = 20;
    vint[2] = 30;
    vint[3] = 40;
    vint[4] = 50;
    vint[5] = 60;
    vint[6] = 70;
    vint[7] = 80;
    vint[8] = 90;
    vint[9] = 100;

    vector<int>::iterator it;
    cout << endl << endl << "Hey look I'm using an iterator!" << endl;
    for (it = vint.begin(); it != vint.end(); ++it) {
      cout << endl << " " << *it;
    }

    /****Section_Name*** Stack*/
    cout << endl << endl << "Let's mess around with the stack and see what happens" << endl;
    stack<int> st;
    st.push(100); //puts one number on top of the stack
    assert(st.size() == 1); // checking the size to see if it's one element
    assert(st.top() == 100); // make sure the value on top is the one we put there

    st.top() = 456; // assign 456 to the top
    assert(st.top() == 456); // check the top to make sure it's 456

    st.pop(); // remove the top element
    assert(st.empty() == true); // make sure it's gone

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set
    cout << endl << endl << "Now let's set up some values Dr. T" << endl;
    set<int> iset;

    iset.insert(11); //puttin in some values
    iset.insert(-11);
    iset.insert(55);
    iset.insert(22);
    iset.insert(22);
    if (iset.find(55) != iset.end()) { // is 55 in there?
      iset.insert(55); // if not let's get one in there
    }
    assert(iset.size() == 4); //make sure there's four numbers in there
    set<int>::iterator it2; //set up an iterator like before
    for (it2 = iset.begin(); it2 != iset.end(); it2++) { //spit out them values
      cout << " " << *it2;
    }

    cout << endl << endl;


    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure

    pair<string, string > strstr; // make the data type pair first
    strstr.first = "Hello"; // assign them
    strstr.second = "Dr. T";

    pair <int, string> intstr; // you can mix it up
    intstr.first = 1;
    intstr.second = "Uno";

    pair<string, int> strint("dos", 2); // here's just to check that they're right
    assert(strint.first == "dos");
    assert(strint.second == 2);


    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert
    MapT amap; //declared the map
    pair<MapIterT, bool> result = amap.insert(make_pair("Abraham", 16)); // insert the pair into the map
    assert(result.second == true); // change the bool to true so it doesn't do it again, maybe this would be useful in a loop if there's one or a few values I don't want to repeat?
    assert(result.first->second == 16);
    result = amap.insert(make_pair("Abraham", 17)); //change it but Abraham remains
    assert(result.second == false); //Abraham wasn't the 17th president!
    assert(result.first->second == 16); //go back go back


    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary
    cout << "Let's set up a little phonebook for the essentials" << endl;
    map<string, string> phone_book; // let's make a phone book
    phone_book["411"] = "Directory"; // assigning the unique values
    phone_book["911"] = "Emergency";
    phone_book["508-678-2811"] = "BCC";
    if (phone_book.find("411") != phone_book.end()) { // make sure 411 is there
      phone_book.insert(make_pair(string("411"), string("Directory")));
    }
    assert(phone_book.size() == 3);
    map<string, string>::const_iterator it3; // iterate and printerate
    for (it3 = phone_book.begin(); it3 != phone_book.end(); ++it3) {
      cout << " " << it3->first << " " << it3->second << endl;
    }
    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example
    int arr[4] = {20, 10, 40, 30}; // initialize an array
    sort(arr, arr + 4); // sort it
    for (int i = 0; i < 3; i++) { //print 
      cout << arr[i] << endl;
    }
    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    vector<int> v1;
    int count_less = std::count_if(v1.begin(), v1.end(), less_than_7); // we check to see if the number given is less than 7 to do something.
    //Write comments that help one better understand what the code is doing. 

      return 0; 
 }
