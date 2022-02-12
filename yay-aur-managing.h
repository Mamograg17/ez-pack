#include "pacman-commands.h"
#ifndef EASIER_PACKS_YAY_AUR_MANAGING_H
#define EASIER_PACKS_YAY_AUR_MANAGING_H

class yay_commands {
     public:

      static  void update_aur_packages();

      static void install_aur_package(string package_name);
      static void remove_aur_package(string package_name);
};
#endif //EASIER_PACKS_YAY_AUR_MANAGING_H
