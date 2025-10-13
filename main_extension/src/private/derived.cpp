#include "derived.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

void Derived::_bind_methods() {
	ClassDB::bind_method(D_METHOD("foo"), &Derived::foo);
}

void Derived::foo() {
	UtilityFunctions::print("Derived.foo() invoked");
}