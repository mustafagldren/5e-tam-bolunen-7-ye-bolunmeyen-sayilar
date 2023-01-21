// 1-1000 arası 5e tam bölünüp 7 ye tam bölünmeye sayıları sayan, toplamlarını hesaplayan

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    int i;
    int j=0 , a = 0;
    cout << "Bu sayılar şunlardır : "<< endl;
    for (i = 1; i < 1000; i++) {

        if (i%5== 0 && i%7!=0) {
            j++;
            a = a + i;
            
            cout <<" " << i;
        } 
       
     }
    cout << endl << endl << "1-1000 arası 5'e bölünüp 7'ye bölünmeyen sayı adeti = " << j << endl;
    cout << endl<< "1-1000 arası 5'e bölünüp 7'ye bölünmeyen sayı toplamı = " << a << endl;

    system("pause");
    return 0;
}

