#pragma once
#include <iostream>
#include "../factories/Factory.hpp"

struct View {
        Button* button;
        Window* window;
        View(Button* button, Window* window) : button(button), window(window) {};
        ~View() {
            delete this->button;
            delete this->window;
        };
};

class Client {
    private:
        AbstractFactory* factory;
    public:
        Client(AbstractFactory* factory) : factory(factory) {
            std::cout << "Client Builded" << std::endl;
        };
        virtual ~Client() {
            std::cout << "Client Destroyed" << std::endl;
            delete this->factory;
        };
        View* buildView(std::string title, int width, int height) {
            return new View(this->factory->buildButton(title, width, height), this->factory->buildWindow(title, width, height));
        };
};