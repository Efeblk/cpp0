#include <iostream>

int main(int argc, char const *argv[])
{
    argv++;
    if (argc >= 2)
    {
        while(*argv)
        {
            while (**argv)
            {
                std::cout << (char)toupper(**argv);
                (*argv)++;
            }
            argv++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << "\n";
    return 0;
}
