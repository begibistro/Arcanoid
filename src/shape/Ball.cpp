
#include "../../hdr/shape/Ball.h"
#include "../../hdr/core/Logic.h"

Ball::Ball(float radius): sf::CircleShape(radius) {
    setFillColor(sf::Color::White);
    setPosition(Logic::BALL_DEFAULT_POSITION);
    setOrigin(radius, radius);
};
