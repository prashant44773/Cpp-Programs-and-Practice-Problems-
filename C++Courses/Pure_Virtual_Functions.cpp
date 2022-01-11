#include<iostream>
#include<string.h>

using namespace std;

class CWH
{
    protected :
    string title;
    float rating;

    public :
    CWH(string s,float num)
    {
        title = s;
        rating = num;
    }

    virtual void display()=0; // do-nothing function ---> pure virtual functions 
};


class CWHVideo : public CWH
{
    protected :
    float videolength;

    public :
    CWHVideo(string s1,float t,float vl) : CWH(s1,t)
    {
        videolength = vl;
    }

    void display()
    {
        cout<<"The Title of this Aamzing video is  "<<title<<endl;
        cout<<"The Rating of this video is  "<<rating<<endl;
        cout<<"The length of this video is  "<<videolength<<endl;
    }
};


class CWHText : public CWH
{
    protected :
    int words;

    public :
    CWHText(string s1,float t,int wl) : CWH(s1,t)
    {
        words = wl;
    }

    void display()
    {
        cout<<"The Title of this Aamzing Text is  "<<title<<endl;
        cout<<"The Rating of this Text is  "<<rating<<endl;
        cout<<"The length of this Text is  "<<words<<endl;
    }
};



int main ()
{
    string tit;
    float rat , vidlen;
    int word;

    // cout<<"Enter the Title of Video"<<endl;
    // cin>>tit;
    // cout<<"Rate this video out of 5"<<endl;
    // cin>>rat;
    // cout<<"Enter the Length of the video"<<endl;
    // cin>>word;

    tit = "lone wolf";
    rat = 4.5;
    vidlen = 34.50;
    word = 455;
   
    CWHVideo b(tit,rat,vidlen);
    CWHText a(tit,rat,word);
    // a.display();

    CWH *tut[2];

    tut[0] = &a;
    tut[1] = &b;

    tut[0]->display();
    tut[1]->display();

    return 0;
}