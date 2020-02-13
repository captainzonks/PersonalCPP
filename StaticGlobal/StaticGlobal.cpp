// StaticGlobal.cpp

#include <iostream>

int x{};

int fun(int n)
{
    // static int x{};
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    int r{ fun(5) };

    printf("%d\n", r);

    r = fun(5);

    printf("%d\n", r);

    return 0;
}
