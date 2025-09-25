#include<iostream>
using namespace std;

class student{
    private:
    int m1,m2,m3;
    void getmarks(){
        cout<<"Enter the marks of 3 subjects"<<endl;
        cin>>m1>>m2>>m3;
    }
    public:
    void calculate_result(){
        getmarks();
        int average = m1+m2+m3/3;
        cout<<"The average is "<<average<<endl;
        if(average >= 75){
            cout<<" Distinction "<<endl;
        }
        else if(50 <= average < 75){
            cout<<"Pass"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }
        
    };
};

int main(){
student sanvi;
sanvi.calculate_result();
}