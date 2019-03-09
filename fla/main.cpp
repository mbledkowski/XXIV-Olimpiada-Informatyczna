#include <iostream>

using namespace std;

//pozycja
int x=0;
int y=0;

//przeszkody
int n;//ilosc przeszkod
int cx[500000];//polozenie na osi x
int a[500000];//polozenie na osi y dol
int b[500000];//polozenie na osi y gora

//odleglosci od przeszkody
int odlx;//odleglosc na osi x
int odly;//odleglosc miedzy y - a

//meta
int meta;

//licznik stukniec
int licz;

int main()
{
    cin>>n>>meta;
    for(int i=0; i<n; i++)
    {
        cin>>cx[i]>>a[i]>>b[i];
    }

    for(int i=0; i<n; i++)
    {
        odlx=cx[i]-x;

        for(int ii=odlx; ii>0; ii--)
        {
            if(y<=a[i]+1)
            {
                y++;
                licz++;
            }
            else
            {
                y--;
            }
            x++;

            //cout<<"y="<<y<<" "<<"x="<<x<<"a="<<a[i]<<" "<<"b="<<b[i]<<"ii="<<ii<<"\n";
            if(y>=b[i]||y<=a[i])
            {
                if(ii==1)
                {
                    //cout<<ii<<"  "<<y<<" "<<b[i]<<"  "<<y<<" "<<a[i];
                    cout<<"NIE";
                    return 0;
                }
            }
        }
    }

    cout<<licz;
    return 0;
}
