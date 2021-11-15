/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string a[5];
    int b = 0;
    
    cout << "Cuaca mendung ? (ya/tidak) : "; cin >> a[0];
    cout << "Hawa lebih dingin ? (ya/tidak) : "; cin >> a[1];
    cout << "Terdengar suara petir ? (ya/tidak) : "; cin >> a[2];
    cout << "Matahari tertutup awan gelap ? (ya/tidak) : "; cin >> a[3];
    cout << "Suhu < 18 derajat ? (ya/tidak) : "; cin >> a[4];
    
    for (int i = 0; i <= 4; i++) {
        if (a[i] == "ya") b+=20;
    }
    
    cout << endl;
    
    cout << "peluang terjadi hujan : " << b << "%"<< endl << endl;
    
    if (b < 50) cout << "tidak terjadi hujan";
    else cout << "akan terjadi hujan";
}
