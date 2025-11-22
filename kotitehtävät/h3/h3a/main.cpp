#include "chef.h"
#include "italianchef.h"

using namespace std;

int main() {
    Chef GordonRamsay("Gordon Ramsay");
    GordonRamsay.makeSalad();
    GordonRamsay.makeSoup();

    ItalianChef AnthonyBourdain("Anthony Bourdain");
    AnthonyBourdain.makeSalad();
    AnthonyBourdain.makeSoup();
    AnthonyBourdain.makePasta();
    cout << "name of the Italian Chef is " << AnthonyBourdain.getName() << endl;
    return 0;
}
