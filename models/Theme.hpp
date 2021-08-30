#pragma once
#include <iostream>
#include <string>

class Painter {
    public:
        virtual void paint() = 0;
};

struct Size {
        int width, height;
        Size(int width, int height) : width(width), height(height) {};
        ~Size() {};
};

class Window : public Painter {
    private:
        std::string title;
        Size* size;

    public:
        Window(std::string title, int width, int height) : title(title), size(new Size(width, height)) {
            std::cout << "Window Builded" << std::endl;
        };
        virtual ~Window() {
            std::cout << "Window Destroyed" << std::endl;
        };
};

class Button : public Painter {
    private:
        std::string label;
        Size* size;
    public:
        Button(std::string label, int width, int height) : label(label), size(new Size(width, height)) {
            std::cout << "Button Builded" << std::endl;
        };
        virtual ~Button() {
            std::cout << "Button Destroyed" << std::endl;
        };
};