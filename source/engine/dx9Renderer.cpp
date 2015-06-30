#include "stdafx.h"
#include "dx9Renderer.h"



dx9Renderer::dx9Renderer() :
_deviceDX9(NULL),
_D3D9(NULL)
{

}

dx9Renderer::~dx9Renderer()
{

}


HRESULT dx9Renderer::onRelease()
{
	//release renderData all!
	//texture, shader, dertex....

	return S_OK;
}

HRESULT dx9Renderer::onInit(HWND hWnd)
{
	HRESULT hr = S_OK;

	_D3D9 = ::Direct3DCreate9(D3D_SDK_VERSION);
	if (_D3D9 == NULL)
		return E_FAIL;

	D3DDISPLAYMODE d3ddm;
	hr = _D3D9->GetAdapterDisplayMode(D3DADAPTER_DEFAULT, &d3ddm);
	if (hr != S_OK)
		return hr;

	hr = _D3D9->CheckDeviceFormat(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, d3ddm.Format, D3DUSAGE_DEPTHSTENCIL, D3DRTYPE_SURFACE, D3DFMT_D16);
	if (hr != S_OK)
		return hr;

	D3DCAPS9 d3dCaps;
	hr = _D3D9->GetDeviceCaps(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, &d3dCaps);
	if (hr != S_OK)
		return hr;
	
	D3DPRESENT_PARAMETERS d3dpp;
	memset(&d3dpp, 0, sizeof(d3dpp));

	d3dpp.BackBufferFormat = d3ddm.Format;
	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	d3dpp.Windowed = TRUE;
	d3dpp.EnableAutoDepthStencil = TRUE;
	d3dpp.AutoDepthStencilFormat = D3DFMT_D16;
	d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;

	hr = _D3D9->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_HARDWARE_VERTEXPROCESSING, &d3dpp, &_deviceDX9);
	if (hr != S_OK)
		return hr;

	return S_OK;
	//m_pd3dDevice->CreateTexture(TEXDEPTH_WIDTH, TEXDEPTH_HEIGHT, 1, D3DUSAGE_DEPTHSTENCIL, (D3DFORMAT)MAKEFOURCC('I', 'N', 'T', 'Z'), D3DPOOL_DEFAULT, &m_pSMZTexture, NULL);
}

HRESULT dx9Renderer::onDestroy()
{
	return S_OK;
}

HRESULT dx9Renderer::onLostDevice()
{
	return S_OK;
}