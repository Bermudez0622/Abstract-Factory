#pragma once
#include "Factory.hpp"
#include "../models/LightTheme.hpp"

class LightFactory : public AbstractFactory {
    public:
        LightFactory() : AbstractFactory() {
            std::cout << "LightFactory Builded" << std::endl;
        };
        virtual ~LightFactory() {
            std::cout << "LightFactory Destroyed" << std::endl;
        };
        LightWindow* buildWindow(std::string title, int width, int height) override {
            return new LightWindow(title, width, height);
        };
        LightButton* buildButton(std::string label, int width, int height) override {
            return new LightButton(label, width, height);
        };
};