#include <iostream>
#include "pacman-commands.h"
#include "repository-managing.h"
#include "yay-aur-managing.h"

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
    cout << "-----------------------------------------------------------------------------------------" << endl;

    string current_place = "main menu";
    int main_choice = 0;                                                  //a variable that store the choice of the user
    int repository_choice;
    int aur_choice;
    string aur_package_name;
    while(main_choice != 3) {
        if (current_place == "main menu") {
            cout << "                         What do you want to do :" << endl;
            cout << endl;
            cout << "-1- Manage repository packages." << endl;
            cout << "-2- Manage AUR packages using yay." << endl;
            cout << "-3- exit." << endl;
            cout << "---------------------------------------------------------------------------------------------"
                 << endl;
            cout << "-> ";
            cin >> main_choice;
            if (main_choice == 1)
                current_place = "repository menu";
            else if (main_choice == 2) {
                current_place = "aur menu";
            }
        }

        if (current_place == "repository menu") {
                cout << "-----------------------------------------------------------------------------------------"
                     << endl;
                cout << "                         what do you want to do now :" << endl;
                cout << "-0- return to the main menu." << endl;
                cout << "-1- install a specific packages." << endl;
                cout << "-2- search for a package." << endl;
                cout << "-3- update your system." << endl;
                cout << "-4- remove a package." << endl;
                cout << "-5- remove a package and its dependencies which aren't required by ano other installed package."
                        << endl;
                cout << "-6- remove a package, its dependencies & all the packages that depend on the target package."
                     << endl;
                cout << "-7- remove a package which is required by another package without removing the dependent package."
                        << endl;
                cout << "-8- search for already installed package." << endl;
                cout << "-9- display extensive information about a package." << endl;
                cout << "-10- delete pacman cache." << endl;
                cout << "-11- delete uninstalled package." << endl;
                cout << "-12- download a package without installing it ." << endl;
                cout << "-----------------------------------------------------------------------------------------"
                     << endl;
                cout << "--> Please enter your choice : ";
                cin >> repository_choice;                                               //taking the user choice
                cout << "-----------------------------------------------------------------------------------------"
                     << endl;
                if (repository_choice == 0)
                    current_place = "main menu";                  //change the current place variable value to main menu

                else {                                           //if the user didn't choose to exit
                    apply_repository_choice(repository_choice);  //checking the user choice & apply it
                    cout << "-----------------------------------------------------------------------------------------"
                         << endl;
                }
        }

        else if(current_place == "aur menu"){
            cout << "-----------------------------------------------------------------------------------------"
                 << endl;
            cout << "Hint: yay is required to complete the processes in this window, if you don't have it installed,\n"
                    "      so you need to install it first." << endl;
            cout << "-----------------------------------------------------------------------------------------"
                 << endl;
            cout << "                         what do you want to do now :" << endl;
            cout << "-0- return to the main menu." << endl;
            cout << "-1- install a specific package." << endl;
            cout << "-2- update AUR packages using yay." << endl;
            cout << "-3- remove a package that is installed using yay." << endl;
            cout << "-----------------------------------------------------------------------------------------"
                 << endl;
            cout << "--> Please enter your choice : ";
            cin >> aur_choice;
            cout << "-----------------------------------------------------------------------------------------"
                 << endl;
            if (aur_choice == 0)
                current_place = "main menu";
            else if(aur_choice == 1){
                cout << "-->You want to install a package from AUR, please enter its name: ";
                cin >> aur_package_name;
                yay_commands::install_aur_package(aur_package_name);
                cout << "--->Done, have a nice day." << endl;
            }
            else if(aur_choice == 2){
                cout << "-->You want to update system, updating in progress..." << endl;
                yay_commands::update_aur_packages();
                cout << "--->Done, have a nice day." << endl;
            }
            else if (aur_choice == 3){
                cout << "-->You want to remove a package, removing in progress..." << endl;
                cin >> aur_package_name;
                yay_commands::remove_aur_package(aur_package_name);
                cout << "--->Done, have a nice day." << endl;
            }
        }
    }
    return 0;
}
