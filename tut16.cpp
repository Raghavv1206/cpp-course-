#include<iostream>
using namespace std;
int sum(int a , int b){
    int c = a+b ;
    return c;

}
//this will not swap a and b
void swap(int a , int b){       // temp    a     b  
    int temp = a;              // 4       4     5 
    a=b;                       // 4       5     5 
    b= temp;                   // 4       5     4         
     
}
    int x = 4 ,y = 5;

    // call by reference using pointers
void  swapPointer(int* a , int* b){       // temp    a     b  
    int temp = *a;              // 4       4     5 
    *a=*b;                       // 4       5     5 
    *b= temp;                   // 4       5     4   

}

      
 
    // call by reference using c++ reference variable
void /*int &*/ swapReferenceVar(int &a , int &b){       // temp    a     b  
    int temp = a;                             // 4       4     5 
    a=b;                                      // 4       5     5 
    b= temp;                                  // 4       5     4         
    
// return a;
}




int main(){
    int x = 4 ,y = 5;

// cout<<" the sum of 4 and 5 is "<<sum(a,b)<<endl;
cout<<" the value of a "<<x<<" the value of b is "<<y<<endl;

// swap(x,y); // this will not swap a and b 

// cout<<" the value of a "<<x<<" the value of b is "<<y<<endl;

// swapPointer(&x,&y);   // this will swap a and b using pointer reference 

swapReferenceVar(x,y) ;   // this will swap a and b using pointer variable
// swapReferenceVar(x,y) =776;   // this will swap a and b using pointer variable
cout<<" the value of a "<<x<<" the value of b is "<<y<<endl;












return 0;
}