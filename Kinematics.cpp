//
//  Kinematics.cpp
//  
//
//  Created by Pan, Zimeng on 11/12/16.
//
//

#include "Kinematics.hpp"
#include "Seek.cpp"
#include "LienarAlgebra.cpp"
#include <cmath>

class Kinematic{
    // Structure for all the kinematic data
    Vec position;
    std::double orientation;
    Vec velocity;
    std::double rotation;
    
    public:
    void update(SteeringOuput &steering, std::double time);
}

struct SteeringOuput{
    // Acceleration
    Vec linear;
    std::double angular;
}

struct KinematicSteeringOutput{
    // Structure for ouput
    Vec velocity;
    std::double rotation;
}
SteeringOutput steering;

void Kinematic::update(SteeringOuput &steering, std::double time){
    this.position += velocity * time;
    this.orientation += rotation * time;
    this.velocity += steering.linear * time;
    this.rotation += steering.angular * time;
}

void getNewOrientation(double &currentOrientation, double &velocity){
    // Note the oreintation is soley depends on its movement
    if(velocity.length() > 0)
        currentOrientation = atan2(-static.x, static.z);
}
