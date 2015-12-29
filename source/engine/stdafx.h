#pragma once

#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용은 Windows 헤더에서 제외합니다.

#define DX_XMFLOAT3 DirectX::XMFLOAT3
#define DX_XMMATRIX DirectX::XMMATRIX

#include <windows.h>


#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include <d3d11.h>
#include <d3dcompiler.h>
#include <directxMath.h>

#include <string>
#include <vector>
#include <list>
#include <map>


//common
#include "singleton.h"

#include <d3d11.h>
#include <d3dcompiler.h>
#include <directxmath.h>
#include <directxcolors.h>

#include "device.h"

#include "typeName.h"
#include "componentName.h"
#include "staticAllocatorManager.h"
#include "object.h"
#include "component.h"
#include "gameObject.h"
#include "resource.h"
#include "videoResource.h"

#include "vertexInputLayoutManager.h"
#include "vertexBuffer.h"


#include "app.h"



