#include<iostream>
using namespace std;

struct poly{
  int expo;
  int coef;
}p1[10],p2[10],p3[10];

int main()
{
    int n1,n2;
    cout<<"Enter no. of terms in first polynomial:"<<endl;
    cin>>n1;
    cout<<"Enter no. of terms in second polynomial:"<<endl;
    cin>>n2;
    int i=0;
    int j=0;
    int k=0;
    for(i=0;i<n1;i++)
    {
        cout<<"enter the coefficients and exponents of first polynomial:"<<endl;
        cin>>p1[i].coef>>p1[i].expo;
    }
    for(j=0;j<n2;j++)
    {
        cout<<"enter the coefficient and exponents of second polynomial:"<<endl;
        cin>>p2[j].coef>>p2[j].expo;
    }

    while(i<n1 && j<n2)
    {
        if(p1[i].expo == p2[j].expo)
        {
            p3[k].coef=p1[i].coef+p2[j].coef;
            p3[k].expo=p1[i].expo;
            i++;
            j++;
            k++;
        }
        else
        {
            if(p1[i].expo > p2[j].expo)
            {
                p3[k].expo = p1[i].expo;
                p3[k].coef = p1[i].coef;
                i++;
                k++;
            }
            else if(p1[i].expo < p2[j].expo)
            {
                p3[k].expo = p2[j].expo;
                p3[k].coef = p2[j].coef;
                j++;
                k++;
            }
        }
    }
    cout<<"term:"<<p3[0].expo<<endl;
    cout<<"term:"<<p3[0].coef<<endl;
    return 0;

}
