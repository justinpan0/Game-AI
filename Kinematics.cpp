//
// Created by zimen on 11/13/2016.
//
#include <constrol.h>
#include "LinearAlgebra.cpp"
#include "main.cpp"
struct PosLoc{
    Vec P, A;
    PosLoc(Vec P_, Vec A_) : P(P_), A(A_) {}
};

struct Output{
    Vec L, A;
    Output(Vec L_, Vec A_) : L(L_), A(A_) {}
};

struct Force{
    Vec;
};

class KinematicArrive{
    Vec character, target, targetVelocity;
    double const maxAcceleration = 5, maxSpeed = 80, targetRadius = 20,
            slowRadius = 30, time2Target = 0.1;
    double targetSpeed;
public:
    Output GetSteering(Vec target){
        Output output = Output(0, 0);

        double distance = target.dist(character);
        if(distance < targetRadius){
            // run hold-position
        } else if (distance > slowRadius){
            targetSpeed = maxSpeed;
        } else {
            targetSpeed = maxSpeed * distance / slowRadius;
        }

        targetVelocity = (target-character).norm()*targetSpeed;
        output.L = targetVelocity - character.V;
        output.L = output.L * (1/time2Target);

        if(output.L.len() > maxAcceleration){
            output.L = output.L.norm()*maxAcceleration;
        }
        return output;
    }
};

void getNewOrientation(PosLoc pos){
    pos.A =
}

void getSteering(PosLoc &posloc) const
{
    // First work out the direction
    posloc.P = target;
    output->linear -= character->position;

    // If there is no direction, do nothing
    if (output->linear.squareMagnitude() > 0)
    {
        output->linear.normalise();
        output->linear *= maxSpeed;
    }
}

void KinematicFlee::getSteering(SteeringOutput* output) const
{
    // First work out the direction
    output->linear = character->position;
    output->linear -= *target;

    // If there is no direction, do nothing
    if (output->linear.squareMagnitude() > 0)
    {
        output->linear.normalise();
        output->linear *= maxSpeed;
    }
}

void KinematicArrive::getSteering(SteeringOutput* output) const
{
    // First work out the direction
    output->linear = *target;
    output->linear -= character->position;

    // If there is no direction, do nothing
    if (output->linear.squareMagnitude() < radius*radius)
    {
        output->linear.clear();
    }
    else
    {
        // We'd like to arrive in timeToTarget seconds
        output->linear *= ((real)1.0 / timeToTarget);

        // If that is too fast, then clip the speed
        if (output->linear.squareMagnitude() > maxSpeed*maxSpeed)
        {
            output->linear.normalise();
            output->linear *= maxSpeed;
        }
    }
}

void KinematicWander::getSteering(SteeringOutput* output) const
{
    // Move forward in the current direction
    output->linear = character->getOrientationAsVector();
    output->linear *= maxSpeed;

    // Turn a little
    real change = randomBinomial();
    output->angular = change * maxRotation;
}

}; // end of namespace
