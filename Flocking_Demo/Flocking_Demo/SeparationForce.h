#pragma once
#include "SteeringForce.h"
class SeparationForce : public SteeringForce {
public:
	SeparationForce();
	~SeparationForce();

	void setBoids(std::vector<Agent*> boids) { m_boids = boids; }
	void setRadius(float radius) { m_radius = radius; }

	virtual Vector3 getForce(Agent* agent);

private:
	std::vector<Agent*> m_boids;
	float m_radius;
};

