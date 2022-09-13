#include<iostream>
using namespace std;
class abc
{
    public:
    int pranav(unsigned int a,unsigned int b);
    int length();

};
int abc::pranav(unsigned int a,unsigned int b)
{
    unsigned int c;
    c=a+b;
    return c;
}
int abc::length()
{
    int i;
    char array;
    for( i=0;array[i]!='/0';i++);
    cout<<"length of the string is :"<<i<<endl;
    return 0;
}
int main()
{
    //int i;
    abc a;
   cout<<"addition of a and b is:"<< a.pranav(6,7)<<endl;
   char array[5];
   cout<<"enter five characters:"<<endl;
   for(int i=0;i<5;i++)
   {
       cin>>array[i];
   }
   cout<<"your string is:"<<array<<endl;
   a.length();

}
