#include <iostream>
#include <cstdlib>

#include "tools.cpp"

namespace logical
{

    class Menu
    {
        public:
            // init contruct of class
             Menu()
            {
                std::cout << "Start Menu" <<std::endl;
                Menu::show();
            }

            ~Menu(){}

        private:
            // switch option 
            void show()
            {
                char option;
                bool status = true;
                while (status)
                {
                    option = showMenu();
                    Tools* jdk = new Tools();
                    switch (option)
                    {
                        case '1':
                            jdk->jdk8();
                            break;
                        case '2':
                            jdk->jdk7();
                            break;
                        case 'q':
                            status = false;
                            break;
                        default:
                            std::cout << "OPTION INVALID!!!" << std::endl;
                            std::system("pause");
                            break;
                    }
                }
            }
            // show options for users
            char showMenu(){
                // std::system("cls");
                std::cout << "INPUT AN OPTION" << std::endl;
                std::cout << "1 => SET JAVA HOME JDK 8" << std::endl;
                std::cout << "2 => SET JAVA HOME JDK 7" << std::endl;
                std::cout << "q => EXIT" << std::endl;
                char option;
                std::cout << "INGRESE UNA OPCION: ";
                std::cin >> option;
                return option;
            }
    };

}