#include "register_types.h"

#include "derived.h"

#include <gdextension_interface.h>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>
#include <godot_cpp/classes/project_settings.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

// #include <windows.h>

using namespace godot;

void initialize_main_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	GDREGISTER_RUNTIME_CLASS(Derived);
}

void uninitialize_main_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}

// void add_dll_search_dir() {
	// String res_path = "res://dependency_extension/bin/";
	// String abs_path = ProjectSettings::get_singleton()->globalize_path(res_path);
    // SetDllDirectory(abs_path.utf8().get_data());
	// UtilityFunctions::print("Add dependency folder to dll search folders : ", abs_path.utf8().get_data());
// }

extern "C" {
// Initialization.
GDExtensionBool GDE_EXPORT main_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address, const GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization) {
	// add_dll_search_dir();
	
	godot::GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library, r_initialization);

	init_obj.register_initializer(initialize_main_module);
	init_obj.register_terminator(uninitialize_main_module);
	init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);

	return init_obj.init();
}
}