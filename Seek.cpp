//
//  Seek.cpp
//  
//
//  Created by Pan, Zimeng on 11/12/16.
//
//

#include "Seek.hpp"
#include "Kinematics.cpp"

class KinematicSeek{
    SteeringOuput character, target;
    
public:
    SteeringOuput getSteering(){
        steering = new KinematicSteeringOuput();
        steering.velocity = target.position - character.position;
        
        steering.velocity.norm();
        steering.velocity *= maxSpeed;
        
        character.orientation = getNewOrientation(character,orientation, steering.velocty);
        
        steering.rotation = 0;
        return steering;
    }
}
