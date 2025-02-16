#include<iostream>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
        CWH(string s, float r){
        title = s;
        rating = r;

    }
    virtual void display() =0; // do- nothing function ---> pure virtual function 
    
};

class CWHvideo: public CWH{
    float videolength;
    public:
    CWHvideo(string s, float r, float vl): CWH(s,r){
        videolength = vl;

    }
    void display(){
        cout<<"this is an amazing video with title "<<title<<endl;
        cout<<"Rating:"<<rating<<"out of 5 stars"<<endl;
        cout<<"Length of this video is :"<<videolength<<"minutes"<<endl;
    }
};
class CWHText: public CWH{
    int words;
    public:
    CWHText(string s, float r, float wc): CWH(s,r){
        words = wc ;

    }
    void display(){
        cout<<"this is an amazing text tutorial with title "<<title<<endl;
        cout<<"Ratingof text tutorial: "<<rating<<"out of 5 stars"<<endl;
        cout<<"No of words in text tutorial is :"<<words<<"words"<<endl;
    }
    

};
int main(){

string title;
float rating, vlen;
int words;

// for code with harry video
title = "Django tutorial";
vlen = 4.56;
rating = 4.89;
CWHvideo djvideo(title , rating, vlen);
// djvideo.display();

// for code with harry text
title = "Django tutorial text ";
words = 433;
rating = 4.19;
CWHText djtext(title , rating, words);
// djtext.display();

CWH* tuts[2];
tuts[0] = &djvideo;
tuts[1] = &djtext;

tuts[0]->display();
tuts[1]->display();
return 0;
}

// rules for virtual FUNCTIOn
// 1. they cannot be static
// 2. they are accessed by any object pointers
// 3. virtual function can be a friend of another class
// 4. A virtual function in base class might not be used.
// 5. if a virtual function is defined in a base class, there is no necessity of redefining it in the derived class 