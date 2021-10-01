
#include "../../hdr/shape/Block.h"
#include "../../hdr/core/Logic.h"

Block::Block(const sf::Vector2f &shape) : RectangleShape({(float)Logic::BLOCK_WIDTH, (float)Logic::BLOCK_HEIGHT}) {
        setPosition(shape.x, shape.y);
        setFillColor(sf::Color::Blue);
        setOrigin(Logic::BLOCK_WIDTH / 2.f, Logic::BLOCK_HEIGHT / 2.f);
}

Block::Block(const sf::Vector2f & pos, const sf::Vector2f & size, sf::Color color): RectangleShape(size) {
    setPosition(pos);
    setFillColor(color);
    setOrigin(size.x / 2.f, size.y / 2.f);

}
