#include "iostream"
#include "cstdlib"

namespace logical
{
    class Tools
    {
        public:
        // init class
            Tools()
            {
                std::cout << "--SET PATH FOR JAVA--" << std::endl;
                // std::system("pause");
            }

            // destruct
            ~Tools() {}
            // set PATH for java version 1.8
            void jdk8()
            {
                
                std::cout << "ESTABLISHED" << std::endl;
                std::system("@echo off");
                std::system("echo Setting JAVA_HOME");
                //std::system("SetEnv -a JAVA_HOME C:\\Programs Files\\Java\\jdk-1.8.0");
                int stat = putenv("JAVA_HOME=C:\\Programs Files\\Java\\jdk-1.8.0");
                if (stat == -1)
                    std::cout<<"failed to define environment variable"<<std::endl;
                std::system("echo Setting PATH");
                // std::system("set PATH=C:\\Programs Files\\Java\\jdk-1.8.0\\bin;%PATH%");
                std::system("echo Display java version");
                std::system("java -version");
                std::system("pause");
            }
            // set PATH for java version 1.7
            void jdk7()
            {
                std::cout << "ESTABLISHED" << std::endl;
                std::system("@echo off");
                std::system("echo Setting JAVA_HOME");
                int stat = putenv("JAVA_HOME=C:\\Programs Files\\Java\\jdk1.7.0");
                if (stat == -1)
                    std::cout<<"failed to define environment variable"<<std::endl;
                std::system("echo Setting PATH");
                // std::system("set PATH=C:\\Programs Files\\Java\\jdk1.7.0\\bin;%PATH%");
                std::system("echo Display java version");
                std::system("java -version");
                std::system("pause");
            }
    };
}