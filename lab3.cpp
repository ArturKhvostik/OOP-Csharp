#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Student {
    private:
    string name;
    string age;
    string stat;
    string phone;
public:
    Student(string n,string a,string s,string p) {

        name = n;
        age = a;
        stat = s;
        phone = p;
    }
    string GetName() {
        return name;
    }
    string GetAge() {
        return age;
    }
    string GetStat() {
        return stat;
    }
    string GetPhone()
    {
        return phone;
    }
    void Print() {
        cout << GetName() << endl << GetAge() << endl << GetStat() << endl << GetPhone() << endl;
    }
    friend void ChangeF(Student& value);
};
void ChangeF(Student& value)
{
    value.name = "Olya",
        value.age = "25",
        value.phone = "+380975238756",
        value.stat = "woman";
     
}

int main()
{
    setlocale(LC_ALL, "rus");

    string nam, ag, st, ph;

    Student a("Peter","18","man","323822393");
    a.Print();
    cout << endl;
    ChangeF(a);
    a.Print();
    string path = "myFile.txt";
    ofstream fout;
    fout.open(path);
    if (!fout.is_open())
    {
        cout << "Ошибка открытия файла!" << endl;
    }
    else
    {
        fout << a.GetName() << endl;
        fout << a.GetAge()<<endl;
        fout << a.GetStat() << endl;
        fout << a.GetPhone() << endl;
        
    }
    fout.close();
    
}
