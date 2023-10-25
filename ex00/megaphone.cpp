#include <iostream>

int main(int argc, char const *argv[])
{
    (void)argc;
    argv++;
    while(*argv)
    {
        while (**argv)
        {
            std::cout << (char)toupper(**argv);
            (*argv)++;
        }
        argv++;
    }
    std::cout << "\n";
    return 0;
}
