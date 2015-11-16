#pragma once

#define CLASS_TE( typeEnum ) virtual classTypeEnum getTD() { return TE_##typeEnum; }
#define TE( typeEnum ) TE_##typeEnum

enum classTypeEnum
{
	TE( object ),
};