#include <iostream>

using namespace std;

class Fraction {

private:

    int num,denom;
    
public:
    
    
    Fraction(int n, int d)
    {
        num = n;
        denom = d;
    }
    int getNum() {
        return num;
    }
    int getDenom() {
        return denom;
    }
    

};
int Sum(Fraction a,Fraction b,int sum)
{
    cout << a.getNum() + b.getNum() << "/" << a.getDenom() + b.getDenom() << endl;
    return sum=a.getNum() + b.getNum(), a.getDenom() + b.getDenom();
    
}
int Sub(Fraction a, Fraction b, int sub)
{
    cout << a.getNum() - b.getNum() << "/" << a.getDenom() - b.getDenom() << endl;
    return sub = a.getNum() - b.getNum(), a.getDenom() - b.getDenom();
}
int Mult(Fraction a, Fraction b, int sub)
{
    cout << a.getNum() * b.getNum() << "/" << a.getDenom() * b.getDenom() << endl;
    return sub = a.getNum() * b.getNum(), a.getDenom() * b.getDenom();
}
int Div(Fraction a, Fraction b, int sub)
{
    cout << a.getNum() * b.getDenom() << "/" << a.getDenom() * b.getNum() << endl;
    return sub = a.getNum() * b.getDenom(), a.getDenom() * b.getNum();
}
int main()
{
    setlocale(LC_ALL, "rus");
    int a,b,c,d,sum=0;
    cout << "Введiть чисельник для 1-ого дробу:" << endl;
    cin >> a;
    cout << "Введiть знаменник для 1-ого дробу:" << endl;
    cin >> b;
    cout << "Введiть чисельник для 2-ого дробу:" << endl;
    cin >> c;
    cout << "Введiть знаменник для 2-ого дробу:" << endl;
    cin >> d;
    Fraction g(a,b);
    Fraction f(c,d);
    cout << "Сума:" <<endl;
    Sum(g, f,sum);
    cout << "Рiзниця:" << endl;
    Sub(g, f, sum);
    cout << "Добуток:" << endl;
    Mult(g, f, sum);
    cout << "Частка:" << endl;
    Div(g, f, sum);
    

  
    

       
}
