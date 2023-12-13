#include <cstdlib>
#include <iostream>

using namespace std;
    
float fpersama1(int a,int b,int c){
    float hasil;
    hasil = (4*a*b)/(7*c);
    return hasil;
}
int main (){
    int a,b,c;
    float hasil;
    cout<<"Masukan Nilai A :";
    cin>>a;
    cout<<"Masukan Nilai B :";
    cin>>b;
    cout<<"Masukan Nilai C :";
    cin>>c;
    hasil = fpersama1(a,b,c);
    cout<<"Hasil Persama 1 = "<<hasil<<endl<<endl;  
    system("pause");
    return 0;  
}
