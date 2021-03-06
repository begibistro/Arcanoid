

#include "../../hdr/core/Game.h"

void Game::run() {
    auto &screen = app->getScreen();
    while (screen.isOpen()) {
        sf::Event event;
        while (screen.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                screen.close();
        }
        app->stateUpdate();
        app->render();
    }
}
