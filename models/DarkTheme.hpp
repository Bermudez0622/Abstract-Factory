#pragma once
#include <iostream>
#include "Theme.hpp"

class DarkWindow : public Window {
    public:
        DarkWindow(std::string title, int width, int height) : Window(title, width, height) {
            std::cout << "DarkWindow Builded" << std::endl;
        };
        virtual ~DarkWindow() {
            std::cout << "DarkWindow Destroyed" << std::endl;
        };

        void paint() override {
            std::cout << "DarkWindow" << std::endl;
        };
};

class DarkButton : public Button {
    public:
        DarkButton(std::string label, int width, int height) : Button(label, width, height) {
            std::cout << "DarkButton Builded" << std::endl;
        };
        virtual ~DarkButton() {
            std::cout << "DarkButton Destroyed" << std::endl;
        };
        void paint() override {
            std::cout << "DarkButton" << std::endl;
        };
};