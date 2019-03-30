#include "Main.hpp"



int main()
{
    std::cout << "Hello World!" << std::endl;

    sf::RenderWindow window(sf::VideoMode(800, 600), "Hitch is a bitch!");
    sf::CircleShape shape(window.getSize().x/2);

    shape.setFillColor(sf::Color::White);

    sf::Texture shapeTexture;
    shapeTexture.loadFromFile("content/sfml.png");
    shape.setTexture(&shapeTexture);

    sf::Sprite sfmlLogo = sf::Sprite(shapeTexture);

    sf::Clock clock;
    clock.restart();
    sf::Time prevTime = clock.getElapsedTime();
    sf::Time currTime = clock.getElapsedTime();

    const float speed = 100;

    while (window.isOpen())
    {
        prevTime = currTime;
        currTime = clock.getElapsedTime();

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();


            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
                window.close();
            }

        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
            std::cout<<"Left Pressed"<< std::endl;
            sfmlLogo.move(sf::Vector2f(-1,0)*(currTime-prevTime).asSeconds() * speed);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
            std::cout<<"Right Pressed"<< std::endl;
            sfmlLogo.move(sf::Vector2f(1,0)*(currTime-prevTime).asSeconds() * speed);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            std::cout<<"Up Pressed"<< std::endl;
            sfmlLogo.move(sf::Vector2f(0,-1)*(currTime-prevTime).asSeconds() * speed);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            std::cout<<"Down Pressed"<< std::endl;
            sfmlLogo.move(sf::Vector2f(0,1)*(currTime-prevTime).asSeconds() * speed);
        }

        window.clear();
        // window.draw(shape);
        window.draw(sfmlLogo);
        window.display();
    }

    return 0;
}
