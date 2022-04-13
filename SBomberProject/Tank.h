#pragma once

#include <stdint.h>
#include <memory>

#include "DestroyableGroundObject.h"
#include "Mediator.h"

class Mediator;

class Tank : public DestroyableGroundObject
{
public:
	//Tank(std::unique_ptr<Mediator> mediator) : mediator_(std::move(mediator)) {};
	//Tank() = default;

	bool __fastcall isInside(double x1, double x2) const override;

	inline uint16_t GetScore() const override { return score; }

	void Draw() const override;
	void BeNotified(std::string info) override {};

	static std::unique_ptr<Mediator> mediator_;

private:

	const uint16_t score = 30;
};

