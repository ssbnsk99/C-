#include<iostream>
#include<string>
using namespace std;
class student
{
public:
    char name[30];
    void get_name()
    {
        cout<<"Enter your name";
        cin>>name;
    }
}s;
class internal:public student
{
public:
    float s1,s2,s3,s4,s5;
    void getmarksint()
    {
        cout<<"Enter your Internal marks";
        cin>>s1>>s2>>s3>>s4>>s5;
    }

}i;
class external:public student
{

public:
    float r1,r2,r3,r4,r5;
    float w1,w2,w3,w4,w5;
    void getmarksext()
    {
         cout<<"Enter your External marks";
         cin>>r1>>r2>>r3>>r4>>r5;
         w1=(r1/10)*7.5;
         w2=(r2/10)*7.5;
         w3=(r3/10)*7.5;
         w4=(r4/10)*7.5;
         w5=(r5/10)*7.5;

    }
}e;
class result:public internal,public external
{
public:
    void finalresult()
    {
        float t1,t2,t3,t4,t5,avg;
        t1=i.s1+e.w1;
        t2=i.s2+e.w2;
        t3=i.s3+e.w3;
        t4=i.s4+e.w4;
        t5=i.s5+e.w5;
        avg=(t1+t2+t3+t4+t5)/5;
        cout<<"Your result is"<<avg;

    }
}r;
int main()
{
  cout<<"Results\n";
  s.get_name();
  cout<<"\n";
  i.getmarksint();
  cout<<"\n";
  e.getmarksext();
  cout<<"\n";
  r.finalresult();
  return 0;



}
