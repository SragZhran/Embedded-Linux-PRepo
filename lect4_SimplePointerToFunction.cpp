#include <iostream>
#include <array>
using namespace std;

void func1 (void (*callback) (int))
{
    callback(3);
}

void func(int a)
{
    cout<<a<<endl;
}

int main()
{
    void (*ptr)(int) = &func;
    ptr(5);
    func1(&func);

    /************************/

    void (*callbackPTR)(void (*callback) (int)) = &func1;
    callbackPTR(&func);

}
