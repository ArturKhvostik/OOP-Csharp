#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class PhoneBook {
private:
    string prp;
    string telPers;
    string telMob;
    string dodInf;
public:
    PhoneBook() {
        prp = "0";
        telPers = "0";
        telMob = "0";
        dodInf = "0";
    }
    
    PhoneBook(string pr,string telPers2,string telMob2,string dodInf2)
    {
        prp = pr;
        telPers = telPers2;
        telMob = telMob2;
        dodInf = dodInf2;
    }
    ~PhoneBook()
    {

    }
    string GetPrp(){
        return prp;
    }
    string GetTelPers(){
        return telPers;
    }
    string GetTelMob() {
        return telMob;
    }
    string GetDodInf()
    {
        return dodInf;
    }
   
    void Print(){
        cout << GetPrp() << endl << GetTelPers() << endl << GetTelMob() << endl << GetDodInf()<<endl;      
    }

};

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size;
    int i=0;
    string p, pmt, di, mt;
    char dalee;
    cout << "Скiльки людей бажаєте записати?" << endl;
    cin >> size;
    cout << "Введите фамилию,имья,отчество:" << endl;
    getline(cin, p);
   
        PhoneBook at[10];
        for (int i = 0; i < size; i++) {
            
            getline(cin, p);

            cout << "Введите персональный телефон:" << endl;
            getline(cin, pmt);


            cout << "Введите мобильный телефон" << endl;
            getline(cin, di);

            cout << "Введите доп инфу о абоненте" << endl;
            getline(cin, mt);
            cout << "Введите фамилию,имья,отчество:" << endl;
            at[i] = { p,pmt,di,mt };
        }
        cout << "абоненти:" << endl;
        for (int i = 0; i < size; i++)
        {
            at[i].Print();
            cout << endl;
        }
    
    
  
    
}


