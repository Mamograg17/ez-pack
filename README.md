# ez-pack

EZ-Pack is a Linux program that manage the packages for you, if you have Arch-linux or a distro that is based on it, you can manage your packages easily , just clone the source code, complete the installation process, run the program and choose what you want to do.
# Installation:
### For linux:
```bash
git clone https://github.com/Mamograg17/ez-pack
cd Downloads
cd ez-pack
g++ main.cpp pacman-commands.cpp pacman-commands.h repository-managing.cpp repository-managing.h -o ez-pack
sudo cp -i ez-pack /usr/local/bin
```
and that's it !!
# Usage
To run the program, just type in the terminal ``sudo ez-pack``, it is important to run the `ez-pack` as root, because managing packages requires root access.
## Contributing
This is a small project, you are free to use it, you can add other operating systems to the program, enjoy.
## License
[gpl-3.0](https://www.gnu.org/licenses/gpl-3.0.en.html)
