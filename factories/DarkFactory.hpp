#pragma once
#include "Factory.hpp"
#include "../models/DarkTheme.hpp"

class DarkFactory : public AbstractFactory {
    public:
        DarkFactory() : AbstractFactory() {
            std::cout << "DarkFactory Builded" << std::endl;
        };
        virtual ~DarkFactory() {
            std::cout << "DarkFactory Destroyed" << std::endl;
        };
        DarkWindow* buildWindow(std::string title, int width, int height) override {
            return new DarkWindow(title, width, height);
        };
        DarkButton* buildButton(std::string label, int width, int height) override {
            return new DarkButton(label, width, height);
        };
};