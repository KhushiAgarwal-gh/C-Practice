#include<iostream>
using namespace std;

template <class T>
class array
{
T *a;
int n,i;
public:
void getdata()
{
int i;
cout<<"enter how many no:";
cin>>n;
a=new T[n];
for (i=0;i<n;i++)
{
cout<<"enter a number:";
cin>>a[i];
}
}
void putdata()
{
    for (i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
}
void sort( )
{
T k;
int i,j;
for(i=0;i<n-1;i++)
{
for (j=0;j<n;j++)
{
if (a[i]>a[j])
{
k=a[i];
a[i]=a[j];
a[j]=k;
}
}
}
}
};
int main()
{

x.getdata();
x.sort();

x.putdata();

y.getdata();
y.sort();
y.putdata();

}