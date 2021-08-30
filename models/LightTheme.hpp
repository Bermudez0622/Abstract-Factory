#pragma once
#include <iostream>
#include "Theme.hpp"

class LightWindow : public Window {
    public:
        LightWindow(std::string title, int width, int height) : Window(title, width, height) {
            std::cout << "LightWindow Builded" << std::endl;
        };
        ~LightWindow() {
            std::cout << "LightWindow Destroyed" << std::endl;
        };
        void paint() override {
            std::cout << "LightWindow" << std::endl;
        };
};

class LightButton : public Button {
    public:
        LightButton(std::string label, int width, int height) : Button(label, width, height) {
            std::cout << "LightButton Builded" << std::endl;
        };
        virtual ~LightButton() {
            std::cout << "LightButton Destroyed" << std::endl;
        };
        void paint() override {
            std::cout << "LightButton" << std::endl;
        };
};