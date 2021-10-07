#include <iostream>

int main()
{
    int a, b, i;
    int gcd{1}, lcm{1};  

    std::cout << " Enter the two numbers you want to find the GCD and LCM of : \n\n";
    std::cin >> a >> b;

    for (i = 1; i < 1000; i++)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            gcd = i;          
        }
    }

    lcm = (a * b) / gcd;
    std::cout << "The GCD of the 2 numbers: " << a << " and " << b << " is : " << gcd << std::endl;
    std::cout << "The LCM of the 2 numbers: " << b << " and " << b << " is : " << lcm << std::endl;

    return 0;
}
