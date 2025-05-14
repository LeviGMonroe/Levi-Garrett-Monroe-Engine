#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Movable Square");

    sf::RectangleShape square(sf::Vector2f(50.0f, 50.0f));
    square.setFillColor(sf::Color::Green);
    square.setPosition(375.0f, 275.0f);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            square.move(-0.1f, 0.0f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            square.move(0.1f, 0.0f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            square.move(0.0f, -0.1f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            square.move(0.0f, 0.1f);

        window.clear();
        window.draw(square);
        window.display();
    }

    return 0;
}