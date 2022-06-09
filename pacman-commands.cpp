#include <iostream> //import io
#include <cstdlib> //import the system functions
#include "pacman-commands.h" //import the commands class

using std::string;

void pacman_commands::install_Packages(string package_name) {  //->install a package
    string install = "pacman -S " + package_name;           //->make the command and the package name one command
    system(install.c_str());                       //-> passing the command to sys function using c_str()
}

void pacman_commands::remove_Packages(string package_name) {  //->remove a package
    string remove= "pacman -R " + package_name;            //->make the command and the package name one command
    system(remove.c_str());                       //->passing the command to sys function using c_str()
}

void pacman_commands::remove_Packages_And_dependencies(string package_name) { //->remove a package and its dependencies
    string remove_pack_and_dependencies = "pacman -Rs " + package_name;  //->make the command and the package name one command
    system(remove_pack_and_dependencies.c_str());           //->passing the command to sys function using c_str()
}

void pacman_commands::remove_package_dep_pack_that_depend_on_it(string package_name) { //->remove package, its dependencies
                                                                                     // & all packages that depend on it
    string remove_package_dep_pack_that_depend_on_it = "pacman -Rsc " + package_name;//->make the command & the package
                                                                                    // name one command

    system(remove_package_dep_pack_that_depend_on_it.c_str());            // ->passing the command to system
                                                                                    // function using c_str()
}

void pacman_commands::remove_package_required_by_other_package(string package_name) {
    string remove_package_required_by_other_package= "pacman -Rdd " + package_name; // ->make the command and the package
                                                                                   // name one command
    system(remove_package_required_by_other_package.c_str());   //-> remove a package that is required by other
                                                                        //package without removing the dependent package
}

void pacman_commands::update_system() {
    system("pacman -Syu");                                    //update the system
}

void pacman_commands::search_for_package(string package_name) {           //search for a package in the repo
    string search_for_package = "pacman -Ss "+ package_name;
    system(search_for_package.c_str());
}

void pacman_commands::search_for_already_installed_pack(string package_name) {  //search for an already installed package

     string search_for_already_installed_pack = "pacman -Qs " + package_name; //->make the command and the package
                                                                              //name one command
     system(search_for_already_installed_pack.c_str());              //search for an already installed package
}

void pacman_commands::display_extensive_info_about_pack(string package_name) {  //display extensive info about a package
     string display_extensive_info_about_pack = "pacman -Si "+package_name;

     system(display_extensive_info_about_pack.c_str());             //display extensive info about a package
}

void pacman_commands::delete_cache() {
     system("paccache -r");                                         //deleting the pacman cache
}

void pacman_commands::delete_uninstalled_packages() {                          //delete the uninstalled packages
     system("pacman -Sc");
}

void pacman_commands::download_pack_without_install(string package_name) {    //download a package without installing it
    string download_pack_without_install = "pacman -Sw "+ package_name ;
}

