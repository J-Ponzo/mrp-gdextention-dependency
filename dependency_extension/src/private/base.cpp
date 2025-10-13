#include "base.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

void Base::_bind_methods() {
	ClassDB::bind_method(D_METHOD("foo"), &Base::foo);
}

Base::Base() {
	// Initialize any variables here.
}

Base::~Base() {
	// Add your cleanup here.
}

void Base::foo() {
	UtilityFunctions::print("Base.foo() invoked");
}