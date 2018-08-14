class Star{
public:
	GLfloat radius;
	GLfloat speed, selfSpeed;
	GLfloat diatance;
	GLfloat rgbColor[4];
	
	Star *parentStar;

	Start(GLfloat radius, GLfloat distant, GLfloat speed, GLfloat selfSpeed, Star *parentStar);
	
	void drawStar();

	virtual void draw() {drawStar();}

	virtual void update(long timeSpan);
protected:
	GLfloat alaphaSelf, alpha;
};

class Planet :public Star{
public:
	Planet(GLfloat radius, GLfloat distance, GLfloat speed, GLfloat selfSpeed, Star *parentStar,
		GLfloat rgbColor);
	void drawPlanet();
	virtual void draw(){ drawPlanet(); drawStar()}
};

class LightPlanet : public Planet {
public:
    LightPlanet(GLfloat Radius, GLfloat Distance,
                GLfloat Speed,  GLfloat SelfSpeed,
                Star* ParentStar, GLfloat rgbColor[]);
    void drawLight();
    virtual void draw() { drawLight(); drawPlanet(); drawStar(); }
};
