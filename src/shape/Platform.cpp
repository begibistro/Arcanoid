
#include "../../hdr/shape/Platform.h"
#include "../../hdr/core/Logic.h"


Platform::Platform(const sf::Vector2f &shape) : RectangleShape(shape) {
    setOrigin(Logic::PLATFORM_WIDTH/ 2.f, Logic::PLATFORM_HEIGHT/2.f);
    setFillColor(sf::Color::Green);
    setPosition(Logic::PLATFORM_DEFAULT_POSITION);
}
