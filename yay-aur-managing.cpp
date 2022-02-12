//
// Created by mamograg17 on 2/12/22.
//

#include "yay-aur-managing.h"
#include <cstdlib> //import the system functions
#include <iostream>

void yay_commands::install_aur_package(string package_name) {
    string aur_package_name = "yay -S " + package_name;
    system(aur_package_name.c_str());
}

void yay_commands::update_aur_packages() {
    system("yay -Syu");
}

void yay_commands::remove_aur_package(string package_name) {
    string aur_package_name = "yay -R " + package_name;
    system(aur_package_name.c_str());
}
