#pragma once


#define declTypeName(className) \
public: \
	virtual typeName getName() { return tn_##className; }

#define tnMacro(className) tn_##className,

enum typeName
{
	tnMacro(resource)
	tnMacro(object)
	tnMacro(videoResource)
	tnMacro(vertexResource)
	tnMacro(gameObject)
};