#ifndef BASE_H
#define BASE_H

#include <godot_cpp/classes/ref_counted.hpp>

namespace godot {

class Base : public RefCounted {
	GDCLASS(Base, RefCounted)

protected:
	static void _bind_methods();

public:
	Base();
	~Base();

	virtual void foo();
};

}

#endif