#pragma once
#include "../models/Theme.hpp"

class AbstractFactory {
    public:
        AbstractFactory() {
            std::cout << "AbstractFactory Builded" << std::endl;
        };
        virtual ~AbstractFactory() {
            std::cout << "AbstractFactory Destroyed" << std::endl;
        };
        virtual Window* buildWindow(std::string title, int width, int height) = 0;
        virtual Button* buildButton(std::string label, int width, int height) = 0;
};