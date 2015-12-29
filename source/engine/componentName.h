#pragma once


#define declCompName(compName) \
virtual componentName getCompName() { return cn_##compName; }

#define cnMacro(compName) cn_##compName,

enum componentName
{
	cnMacro(component)
	cnMacro(renderComponent)
};

#define declCompFamilyName(familyName) \
virtual componentFamilyName getFamilyName() { return familyName; }

enum componentFamilyName
{
	cf_none,
	cf_render,
	cf_physics,
	cf_state,
};