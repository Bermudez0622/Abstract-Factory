#include "client/Client.hpp"
#include "factories/DarkFactory.hpp"
#include "factories/LightFactory.hpp"

int main(int argc, char **argv) {
    auto client = new Client(new DarkFactory());
    auto view = client->buildView("Titulo Oscuro", 0, 255);
    view->button->paint();
    view->window->paint();
    delete view;
    delete client;
    return 0;
};