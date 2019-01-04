#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int bil1, bil2;
    cout<<" Masukan bilangan pertama : ";
    cin>>bil1;
    cout<<endl;
    cout<<" Masukan bilangan kedua: ";
    cin>>bil2;
    cout<<endl;
        int hasil=0;
        for(int i=1;i<=bil2;i++)
        {
            hasil = hasil+bil1;
        }

    cout<<bil1<<" x "<<bil2<<" = "<<hasil<<endl;

}
