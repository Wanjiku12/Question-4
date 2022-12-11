// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
float markAverage(float marks[7])
{
    float sum;
    float length=sizeof(marks)/sizeof(marks[0]);
    
    for(int i=0;i<length;i++){
        sum=sum+marks[i];
    }
    std::cout << sum << std::endl;
    float markAverage=sum/length;
    return markAverage;
}
int main()
{
    float input;
    float marks[7];
    float length=sizeof(marks)/sizeof(marks[0]);
    cout<<"Enter 7 marks\n";
    for(int i=0;i<length;i++){
        std::cin >> input;
        marks[i]=input;
    }
    float average=markAverage(marks);
    std::cout << average << std::endl;
    
    

    return 0;
}
