/*Access modifiers are used to implement an important aspect of Object-Oriented Programming known as Data Hiding. Consider a real-life example: 
The Research and Analysis Wing (R&AW), having 10 core members, has come into possession of sensitive confidential information regarding national security. Now we can correlate these core members to data members or member functions of a class, which in turn can be correlated to the R&A Wing. These 10 members can directly access the confidential information from their wing (the class), but anyone apart from these 10 members can’t access this information directly, i.e., outside functions other than those prevalent in the class itself can’t access the information (that is not entitled to them) without having either assigned privileges (such as those possessed by a friend class or an inherited class, as will be seen in this article ahead) or access to one of these 10 members who is allowed direct access to the confidential information (similar to how private members of a class can be accessed in the outside world through public member functions of the class that have direct access to private members). This is what data hiding is in practice. 
Access Modifiers or Access Specifiers in a class are used to assign the accessibility to the class members, i.e., they set some restrictions on the class members so that they can’t be directly accessed by the outside functions.*/
#include <iostream>
#include<math.h>
using namespace std;

/*
Abstraction
means displaying only essential information and hiding the details
e.g calculator, sort() function, car acceleration
*/

// int main(){
//     int n = 10;
//     int power = 3;

//     int result = pow(n,power);
//     cout << "Power is : " << result << endl;
// }

/*
Access modifiers
We can use access modifiers to enforce restriction on class members.
*/
class implementAbstraction{
    private:

    int a=5, b=10;

    public:
    void setValue(int x, int y){
        a = x;
        b = y;
    }

    void display(){
        cout << " A : " << a << endl;
        cout << " B : " << b << endl;
    }

};

int main(){
    implementAbstraction obj;
    obj.display();

    obj.setValue(10,20);
    obj.display();

}