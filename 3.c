#include <unistd.h>

int main()
{
    char c;

    c = 'A';
    write(1, &c, 1);
    return 0;
}