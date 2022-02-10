//
// Created by mamograg17 on 2/9/22.
//

#include "repository-managing.h"            //include the repository managing header file
#include "pacman-commands.h"                //include the commands functions
#include <iostream>                         //include io commands

using std::cout;
using std::cin;
using std::endl;

void apply_repository_choice(int input) {
    string package_name;
    if (input == 1){
        cout << "-->You want to install a package, please enter its name :";
        cin >> package_name;
        pacman_commands::install_Packages(package_name);
        cout << "--->Woah, package installed, have a nice day." << endl;
    }
    else if(input == 2){
        cout << "-->You want to search for a package, please enter its name :" << endl;
        cin>> package_name;
        pacman_commands::search_for_package(package_name);
        cout << "---> Done,have a nice day." << endl;
    }
    else if (input == 3){
        cout << "-->System updating is in process..." << endl;
        pacman_commands::update_system();
        cout << "---> System update is done, enjoy." << endl;
    }
    else if(input == 4){
        cout << "-->Enter the package name to remove : ";
        cin >> package_name;
        pacman_commands::remove_Packages(package_name);
        cout << "---> Done, have a nice day." << endl;
    }
    else if(input == 5){
        cout << "-->You want to remove a package and its dependencies which aren't required by ano other installed "
                "package, enter its name : ";
        cin >> package_name;
        pacman_commands::remove_Packages_And_dependencies(package_name);
        cout << "---> Done, have a nice day." << endl;
    }
    else if (input == 6){
        cout << "--> You want to remove a package, its dependencies & all the packages that depend on the target "
                "package, enter its name :";
        cin >> package_name;
        pacman_commands::remove_package_dep_pack_that_depend_on_it(package_name);
        cout << "---> Done, have a nice day." << endl;
    }
    else if(input == 7){
        cout << "--> You want to remove a package which is required by another package without removing the dependent"
                " package,enter its name :" ;
        cin >> package_name;
        pacman_commands::remove_package_required_by_other_package(package_name);
        cout << "---> Done, have a nice day." << endl;
    }
    else if(input == 8){
        cout << "--> You want to search for already installed package, enter its name :";
        cin >> package_name;
        pacman_commands::search_for_already_installed_pack(package_name);
        cout << "---> Done, have a nice day." << endl;
    }
    else if (input == 9){
        cout << "--> You want to display extensive information about a package, enter its name :";
        cin >> package_name;
        pacman_commands::display_extensive_info_about_pack(package_name);
        cout << "---> Done, have a nice day." << endl;
    }
    else if(input == 10){
        cout << "--> You want to delete pacman cache, deleting in progress...";
        pacman_commands::delete_cache();
        cout << "---> Done, have a nice day" << endl;
    }
    else if(input == 11){
        cout << "--> You want to delete uninstalled packages, deleting in progress...";
        pacman_commands::delete_uninstalled_packages();
        cout << "---> Done, have a nice day." << endl;
    }
    else if (input == 12){
        cout << "--> You want to download a package without installing it, please enter its name :";
        cin >> package_name;
        pacman_commands::download_pack_without_install(package_name);
        cout << "---> Done, have a nice day." << endl;
    }
}
