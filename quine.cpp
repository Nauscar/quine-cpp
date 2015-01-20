#include <iostream>
#include <string>
using namespace std;
int main(){
    char q = 34;
    string l[] = {
    "#include <iostream>",
    "#include <string>",
    "using namespace std;",
    "int main(){",
    "    char q = 34;",
    "    string l[] = {",
    "    ",
    "    };",
    "    for(int i = 0; i < 6; i++)",
    "        cout << l[i] << endl;",
    "    for(int i = 0; i < 16; i++)",
    "        cout << l[6] + q + l[i] + q + ',' << endl;",
    "    for(int i = 7; i < 16; i++)",
    "        cout << l[i] << endl;",
    "    return 0;",
    "}",
    };
    for(int i = 0; i < 6; i++)
        cout << l[i] << endl;
    for(int i = 0; i < 16; i++)
        cout << l[6] + q + l[i] + q + ',' << endl;
    for(int i = 7; i < 16; i++)
        cout << l[i] << endl;
    return 0;
}
