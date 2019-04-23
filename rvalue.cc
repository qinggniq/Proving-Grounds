#include <iostream>
using namespace std;

class Test 
{ 
   /* Class data members */ 
public: 
   Test(const Test &t) { cout << "copy" << endl;/* Copy data members from t*/} 
   Test()        { cout << "init" << endl;/* Initialize data members */ } 
}; 
  
Test fun() 
{ 
    Test t; 
    return t; 
} 
  
int main() 
{ 
    Test t2 =  fun(); 
    return 0; 
} 
