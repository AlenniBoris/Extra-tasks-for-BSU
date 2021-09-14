#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    double x1, x2 , d;


    cout  << "Enter a:";
    cin >> a;
    cout  << "Enter b:";
    cin >> b;
    cout  << "Enter c:";
    cin >> c;

    d= sqrt(pow(b,2)-(4*a*c));

    if (d<0){
        cout << "There is no solution";
    }
    if (d==0){
        x1= (-b)/2*a;
        cout << "Your solution:";
        cout << x1;
    }
    if (d>0){
        x1= ((-b)-d)/2*a;
        x2= ((-b)+d)/2*a;
        cout << "Your solution:";
        cout << x1 <<endl;
        cout << x2;
    }
return 0;

}
