#include <iostream>
using namespace std;
/*Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. In Object Oriented Programming, 
data and the functions that manipulate them.

Consider a real-life example of encapsulation, in a company, there are different sections like the accounts section, finance section, 
sales section, etc. Now,

The finance section handles all the financial transactions and keeps records of all the data related to finance.
Similarly, the sales section handles all the sales-related activities and keeps records of all the sales.
Now there may arise a situation when for some reason an official from the finance section needs all the data about sales in a particular month.

In this case, he is not allowed to directly access the data of the sales section. He will first have to contact some other officer in the sales
section and then request him to give the particular data.

This is what Encapsulation is. Here the data of the sales section and the employees that can manipulate them are wrapped under a single name “sales section”. 

Features of Encapsulation
Below are the features of encapsulation:

We can not access any function from the class directly. We need an object to access that function that is using the member variables of that class. 
The function which we are making inside the class must use only member variables, only then it is called encapsulation.
If we don’t make a function inside the class which is using the member variable of the class then we don’t call it encapsulation.
Increase in the security of data
It helps to control the modification of our data members.
*/
/*
Encapsulation
- It is defined as binding together the data and functions
e.g Company - tech, sales, acc department
college - mech, cse, ece branch
* feaatures
- We cannot access any function from the class directly, we need an object to access that function
- it also increases the security of data
- it helps to control the modication of data members of that particular class
*/

class Encapsulation{

    private:
    //Data hidden from outside the class
    int x;

    public:
    void set(int a){
        x = a;
    }

    int get(){
        return x;
    }
};

int main(){
    Encapsulation obj;
    obj.set(10);
    cout << obj.get();
}