#pragma once

#include "DynamicObject.h"

class Plane : public DynamicObject {
public:

    virtual ~Plane() = default;

    virtual void Draw() const = 0;

    virtual void DrawBody() const = 0;
    virtual void DrawWings() const = 0;
    virtual void DrawTail() const = 0;

    inline void ChangePlaneY(double dy) { yDirection += dy; }
    void BeNotified(std::string info) override {};
private:

};

class ColorPlane :public Plane
{
public:
	ColorPlane() = default;
	~ColorPlane() override = default;

    void Draw() const override;

    void DrawBody() const override;
    void DrawWings() const override;
    void DrawTail() const override;

private:

};


class BigPlane :public Plane
{
public:
    BigPlane() = default;
    ~BigPlane() override = default;

    void Draw() const override;

    void DrawBody() const override;
    void DrawWings() const override;
    void DrawTail() const override;

private:

};

