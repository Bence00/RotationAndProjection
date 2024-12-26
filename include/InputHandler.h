#pragma once

#include <SDL.h>
#include "Rotations.h"
#include "GlobalVariables.h"
#include <vector>

enum Direction {
    X,
    Y,
    Z
};

class InputHandler {
public:
    InputHandler() : rotationAngle(0.0), rotationSpeed(3), isPerspective(true) {}

    void handleInput(SDL_Event& event, vector<Vec3>& model3D, float deltaTime) {
        if (event.type == SDL_KEYDOWN) {
            switch (event.key.keysym.sym) {
                case SDLK_LEFT: // Balra forgatás
                    rotationAngle -= rotationSpeed * deltaTime;
                break;
                case SDLK_RIGHT: // Jobbra forgatás
                    rotationAngle += rotationSpeed * deltaTime;
                break;
                case SDLK_x:
                    direction = Direction::X;
                break;
                case SDLK_y:
                    direction = Direction::Y;
                break;
                case SDLK_z:
                    direction = Direction::Z;
                break;
                case SDLK_SPACE:
                    isPerspective = !isPerspective;
                break;
                default:
                    break;
            }
        }

        if (rotationAngle != 0.0) {
            model3D = Rotation(model3D, rotationAngle, direction);
            rotationAngle = 0.0;
        }
    }

    bool getProjectionType() const {
        return isPerspective;
    }

private:
    Direction direction = Direction::Z;
    double rotationAngle;
    double rotationSpeed;
    bool isPerspective;
};
