#include <iostream>
using namespace std;

int main(){
  // Array Examples
    int marks[] = {23, 45, 56, 89};
    
    int mathMarks[4];
    mathMarks[0] = 234;
    mathMarks[1] = 376;
    mathMarks[2] = 456;
    mathMarks[3] = 564;

    cout<<"These are Math marks"<<endl;;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

     cout<<"These are marks"<<endl;
      marks[2] = 455;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    // You can change the value of an array means update the value
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    return 0;
}