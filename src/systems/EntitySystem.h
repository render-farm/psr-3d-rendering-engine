#ifndef PSR_3D_RENDERER_ENTITYSYSTEM_H
#define PSR_3D_RENDERER_ENTITYSYSTEM_H

#include <glm/glm.hpp> // vec2, vec3, mat4, radians
#include <opencv2/opencv.hpp>
#include "../entities/EntityComponents.h"
#include "../systems/CameraSystem.h"

class EntitySystem {
private:
    CameraSystem cameraSystem;
    Positions positions;
    Orientations orientations;
    Meshes meshes;
    int64_t totalEntitiesAdded;
public:
    enum Entity {
        SPHERE, CUBE, TORUS, PYRAMID
    };

    explicit EntitySystem(CameraSystem& cameraSystem);

    void updateGame(int keycode);

    void addEntity(Entity entity);

    void removeEntity(EntityID id);

    Positions getPositions();

    Orientations getOrientations();

    Meshes getMeshes();
};


#endif //PSR_3D_RENDERER_ENTITYSYSTEM_H
