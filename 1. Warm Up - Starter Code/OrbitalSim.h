/**
 * @brief Orbital simulation
 * @author Marc S. Ressl
 *
 * @copyright Copyright (c) 2022-2023
 */

#ifndef ORBITALSIM_H
#define ORBITALSIM_H

/**
 * @brief Orbital body definition
 */
struct OrbitalBody
{
    // Fill in your code here...
    const char* name;       // Name
    float mass;		        // [kg]
    float radius;	        // [m]
    Color color;	        // Raylib color
    Vector3 position;       // [m]
    Vector3 velocity;       // [m/s]
    Vector3 acceleration;   // [m/s^2]

};

/**
 * @brief Orbital simulation definition
 */
struct OrbitalSim
{
    // Fill in your code here...
    float timeStep;                 // [s]
    int numBodies;                  // number of bodies in simulation
    OrbitalBody** orbitalBodies;    //pointer to array (pointer) of OrbitalBody

};

OrbitalSim *constructOrbitalSim(float timeStep);
void destroyOrbitalSim(OrbitalSim *sim);

void updateOrbitalSim(OrbitalSim *sim);

#endif
