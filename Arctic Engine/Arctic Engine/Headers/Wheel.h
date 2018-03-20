#ifndef WHEEL_H
#define WHEEL_H

#include "GameObject.h"
#include "MeshRenderer.h"
#include "Transform.h"
#include "OBJLoader.h"
#include "Input.h"
#include "BoxCollider.h"
#include "Bounds.h"

class Wheel : public GameObject
{
private:
	std::string m_name;
	OBJECT_TYPE m_object_Type;
	std::weak_ptr<MeshRenderer> m_meshRenderer;
	std::weak_ptr<Bounds> m_bounds;
	std::weak_ptr<BoxCollider> m_boxCollider; 

	std::string m_objName;

	Vector3 m_startingPos; 
	glm::quat m_startingRot; 
	Vector3 m_startingScale; 

public:
	void Awake();
	void Start();
	void Update();
	void Destroy();
	void Render();

	void SetTransform(Vector3 _pos, glm::quat _rot, Vector3 _scale);
	std::string GetObjectName() {return m_name;}
	
	Wheel();
	Wheel(std::string _name, std::string _obj, OBJECT_TYPE _objtype);
	Wheel(std::string _name, std::string _obj, OBJECT_TYPE _objtype, Vector3 _pos, glm::quat _rot, Vector3 _scale, float _mass);
	~Wheel(){};
};


#endif