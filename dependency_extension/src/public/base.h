#ifndef BASE_H
#define BASE_H

#include <godot_cpp/classes/ref_counted.hpp>

#ifdef DEPENDENCY_EXPORTS
#define DEPENDENCY_API __declspec(dllexport)
#else
#define DEPENDENCY_API __declspec(dllimport)
#endif

namespace godot {

class DEPENDENCY_API Base : public RefCounted {
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