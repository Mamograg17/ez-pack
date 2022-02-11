#include <iostream>
#include "pacman-commands.h"
#include "repository-managing.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
    cout << " +--------   +--------+        +-------+  +--------+     +---------  |       *  " << endl;
    cout << " |                   +         |       |  |        |   *             |     *      " << endl;
    cout << " |                 +           |       |  |        |  *              |   * " << endl;
    cout << " +--------       +        /*/  |-------+  |        |  *              | *            " << endl;
    cout << " |              +              |          |--------|  *              |   *         " << endl;
    cout << " |            +                |          |        |   *             |     *        " << endl;
    cout << " +--------   +--------+        |          |        |     +---------- |       *     " << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;

    string current_place = "main menu";
    int main_choice = 0;                                                       //a variable that store the choice of the user
    int repository_choice;

    while(main_choice != 3) {
        if (current_place == "main menu") {
            cout << "                         What do you want to do :" << endl;
            cout << endl;
            cout << "-1- Manage repository packages." << endl;
            cout << "-2- Manage the AUR packages with the help of yay.(coming soon)" << endl;
            cout << "-3- exit." << endl;
            cout << "---------------------------------------------------------------------------------------------"
                 << endl;
            cout << "-> ";
            cin >> main_choice;
            if (main_choice == 1)
                current_place = "repository menu";
            else if (main_choice == 2) {
                cout << "-->Sorry but this option isn't available right now, it's coming soon." << endl;
                cout << "---------------------------------------------------------------------------------------------"
                     << endl;
                //current_place = "aur menu";
            }
        }
        if (current_place == "repository menu") {
            if (main_choice == 1) {
                cout << "-----------------------------------------------------------------------------------------"
                     << endl;
                cout << "                         what do you want to do now :" << endl;
                cout << "-0- return to the main menu." << endl;
                cout << "-1- installing a specific packages." << endl;
                cout << "-2- search for a package." << endl;
                cout << "-3- updating your system." << endl;
                cout << "-4- remove a package." << endl;
                cout
                        << "-5- remove a package and its dependencies which aren't required by ano other installed package."
                        << endl;
                cout << "-6- remove a package, its dependencies & all the packages that depend on the target package."
                     << endl;
                cout
                        << "-7- remove a package which is required by another package without removing the dependent package."
                        << endl;
                cout << "-8- search for already installed package." << endl;
                cout << "-9- display extensive information about a package." << endl;
                cout << "-10- delete pacman cache." << endl;
                cout << "-11- delete uninstalled package." << endl;
                cout << "-12- download a package without installing it ." << endl;
                cout << "------------------------------------------------------------------------------------------"
                     << endl;
                cout << "--> Please enter your choice : ";
                cin >> repository_choice;                                               //taking the user choice
                cout << "------------------------------------------------------------------------------------------"
                     << endl;
                if (repository_choice == 0)
                    current_place = "main menu";                      //change the current place variable value to main menu

                else                                                 //if the user didn't choose to exit
                    apply_repository_choice(repository_choice);  //checking the user choice & apply it
            }
            /*else if(current_place == "aur menu"){
                cout << "-----------------------------------------------------------------------------------------"
                     << endl;
                cout <<
            }*/

        }
    }
    return 0;
}
