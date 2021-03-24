#include <iostream>
#include<iomanip>
using namespace std;

int main() {
int x;
cin >> x;
cout << x << "\n";
cout << x/100 << " nota(s) de R$ 100,00" "\n";
x = x%100;
cout << x/50 << " nota(s) de R$ 50,00" "\n";
x= x%50;
cout << x/20 << " nota(s) de R$ 20,00" "\n";
x= x%20;
cout << x/10 << " nota(s) de R$ 10,00" "\n";
x= x%10;
cout << x/5 << " nota(s) de R$ 5,00" "\n";
x= x%5;
cout << x/2 << " nota(s) de R$ 2,00" "\n";
x= x%2;
cout << x/1 << " nota(s) de R$ 1,00" "\n";
return 0;
}
