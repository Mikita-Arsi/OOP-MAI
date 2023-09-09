#include <iostream>

auto input(char l)
{
    unsigned int x;
    std::cout << l << ": ";
    std::cin >> x;
    return x;
}

unsigned int bin(unsigned int x)
{
    int result{0}, k{1};
    while (x)
    {
        result += x % 2 * k;
        x /= 2;
        k *= 10;
    }
    return result;
}

// auto print_array(int (&x)[], int len)
// {
//     for (int i{0}; i < len; i++)
//     {
//         std::cout << x[i] << " " << i << std::endl;
//     }
// }

auto print(auto x)
{
    std::cout << x << std::endl;
}

auto count(unsigned int x)
{
    int result{0};
    while (x)
    {
        if (x % 10 == 1)
        {
            result += 1;
            x -= 1;
        }
        x /= 10;
    }
    return result;
}

int sum(int (&x)[], int len)
{
    int result{0};
    for (int i{0}; i < len; i++)
    {
        result += x[i];
    }

    return result;
}

int main()
{
    unsigned int a, b;
    a = input('a');
    b = input('b');
    auto len{b - a + 1};
    int array[len]{};
    for (int i{0}; i <= len;)
    {
        array[i] = count(bin(a));
        a += 1;
        i++;
    }

    print(sum(array, len));

    return 0;
}