#include <iostream>

using namespace std;

int numeri[10];

void pippuzzo ()
{
    cout<<"Gabri Cuea ";
}

int main()
{
    while (TRUE)
    {
         pippuzzo();
    }
    
    int i;
    for(i=0; i<10; i++)
    {
        cout<<"inserisci il valore n " <<(i+1) <<": ";
        cin>>numeri[i];
    }
    for(i=0; i<3; i++)
    {
        numeri[i]=2*numeri[i];
    }

    return 0;
}
