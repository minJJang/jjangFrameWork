#pragma once

class d3d11Device
{
public:
	d3d11Device();
	~d3d11Device();

	HRESULT init( int width, int height, HWND hWnd );
	HRESULT release();

	ID3D11Device* getDevice() { return d3dDevice; }

private:
	ID3D11Device*  d3dDevice;
	IDXGISwapChain* swapChain;
	ID3D11DeviceContext* immediateContext;
	ID3D11RenderTargetView* renderTargetView;
	D3D_FEATURE_LEVEL featureLevel;
};