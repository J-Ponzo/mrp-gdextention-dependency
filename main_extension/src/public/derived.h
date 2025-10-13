#ifndef DERIVED_H
#define DERIVED_H

#include <base.h>

namespace godot {

class Derived : public Base {
	GDCLASS(Derived, Base)

protected:
	static void _bind_methods();

public:
	Derived() = default;
	~Derived() = default;

	void foo() override;
};

}

#endif