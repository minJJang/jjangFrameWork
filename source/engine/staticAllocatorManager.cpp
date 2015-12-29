#include "stdafx.h"
#include "staticAllocatorManager.h"

staticAllocator< DX_XMFLOAT3> staticAllocatorManager::pos;
staticAllocator< DX_XMFLOAT3> staticAllocatorManager::rotation;
staticAllocator< DX_XMFLOAT3> staticAllocatorManager::scale;
staticAllocator< DX_XMMATRIX> staticAllocatorManager::matrix;