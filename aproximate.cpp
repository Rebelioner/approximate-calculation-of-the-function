#include <iostream>
#include <cmath>
using namespace std;
double F(double a,double tc)
{



double d;

double x = 1/tc;
a = a*x;


d= trunc(a) ;
d = d*tc;


return(d);


}

int main()
{
double sum =1;
double x;
double tc;
int n ;
setlocale(LC_ALL,"Russian");
cout << "Введите x:" << endl;
cin >> x;
cout << "Введите точность вычислений:" <<  endl;
cin >> tc;
cout << "Введите количество членов ряда:" << endl;
cin >> n;
cout << "№"<< " "<< "член ряда" << " " << "сумма" << endl;
double a;
a = x/3;
cout << "1"<< " "<< "1" << " "  << "1" <<  endl;
sum = sum + F(a,tc);
cout << "2" << " "<< F(a,tc) << " " << sum << endl;

for(int i = 3;i<=n;++i)
{
    if(a > 0)
    {
       a = abs(a/3);
        
        
    }
    else
    {
        
        a = -abs(a/3);
    }



sum = sum +a;
cout << i << " " << F(a,tc) << " " <<  F(sum,tc) << endl;
}
cout << "Количество членов ряда:" << n << endl;
cout << "Сумма:" << F(sum,tc) << endl;


return 0;
}
