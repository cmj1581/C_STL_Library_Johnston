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
using namespace std; 

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


int main() 
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
    

    /****Section_Name*** Stack*/


    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    //Write comments that help one better understand what the code is doing. 

      return 0; 
 }
