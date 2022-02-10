#include <iostream> //import io
#include <cstdlib> //import the system functions

using std::string;

#ifndef EASIER_PACKS_COMMANDS_H
#define EASIER_PACKS_COMMANDS_H
class pacman_commands{
  public:
    static void install_Packages(string package_name);                    //install a package

    static void remove_Packages(string package_name);                     //remove a package

    static void remove_Packages_And_dependencies(string package_name);    //remove a package and its dependencies

    static void remove_package_dep_pack_that_depend_on_it(string package_name); //->remove package, its dependencies and all
                                                                          //packages that depend on it

    static void remove_package_required_by_other_package(string package_name); //->remove a package that is required by another
                                                                       //package,without removing the dependent package

    static void update_system();                                            //update packages

    static void search_for_package(string package_name);                      //search for a package

    static void search_for_already_installed_pack(string package_name) ;      //search for an already installed package

    static void display_extensive_info_about_pack(string package_name);       //display extensive info about a package

    static void delete_cache();                                               //deleting pacman cache

    static void delete_uninstalled_packages();                                //delete uninstalled packages

    static void download_pack_without_install(string package_name);          //download a package without installing it

};



#endif //EASIER_PACKS_COMMANDS_H
