#include <iostream>
#include <string>

using namespace std;
string a, subsir;
unsigned int perioada;

void aflaPerioada()
{
    bool valid;
    unsigned int i = 0; perioada = 1;
    while (i <= a.size())
    {
        valid = true;
        subsir = a.substr(0, perioada);

        for (i = 0;  i <= a.size() && valid;  i += perioada)
        {
            if (subsir != a.substr(i, perioada))
                valid = false;
        }

        if (perioada > a.size() / 2)
        {
            perioada = a.size();
            break;
        }
        else if (i <= a.size()) ++perioada;
    }
    subsir = a.substr(0, perioada);
}

int main()
{
    cout << "String = "; getline(cin, a);
    aflaPerioada();
    cout << endl << "Substring = " << subsir << endl << "Period: " << perioada << endl;

    return 0;
}
