// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class item{
    int number;
    float cost;
    public:
    void getdata(int a,float b);
    void putdata(void){
        cout<<"number:"<<number<<"\n";
        cout<<"Cost:"<<cost<<"\n";
        
    }
};
void item :: getdata(int a, float b){
    number= a;
    cost=b;

}

int main() {
    // Write C++ code here
    item x;
    cout<<"\n object x"<<"\n";
    x.getdata(100,299.95);
    x.putdata();
    item y;
    cout <<"\n object y "<<"\n";
    y.getdata(200,175.50);
    y.putdata();
    
    return 0;
}
