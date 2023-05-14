#include <iostream>
#include <thread>

int main()
{
    int a,b;
    int result;
    std::cin>>a>>b;
    std::thread t1([a,b,&result](){result = a + b;});
    t1.join();
    std::cout<<result;
    return 0;
}