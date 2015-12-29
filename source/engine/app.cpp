#include "stdafx.h"
#include "app.h"

d3d11Device app::gDevice;


LRESULT CALLBACK app::WndProc( HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam )
{
	switch( message )
	{
	case WM_DESTROY:
		PostQuitMessage( 0 );
		break;

	default:
		return DefWindowProc( hWnd, message, wParam, lParam );
	}

	return 0;
}

app::app( HINSTANCE hInst, int nShow ) : 
hInstance(hInst),
nCmdShow(nShow)
{

}

app::~app()
{

}

HRESULT app::init( int wid, int hei )
{
	width = wid;
	height = hei;

	WNDCLASSEX wcex;
	wcex.cbSize = sizeof( WNDCLASSEX );
	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = app::WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = NULL;
	wcex.hCursor = LoadCursor( NULL, IDC_ARROW );
	wcex.hbrBackground = ( HBRUSH )( COLOR_WINDOW + 1 );
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = L"testDX11";
	wcex.hIconSm = NULL;
	if( !RegisterClassEx( &wcex ) )
		return E_FAIL;

	RECT rc = { 0, 0, width, height };
	AdjustWindowRect( &rc, WS_OVERLAPPEDWINDOW, FALSE );
	hWnd = CreateWindow( L"testDX11", L"title", WS_OVERLAPPEDWINDOW, 0, 0, rc.right - rc.left, rc.bottom - rc.top, NULL, NULL, hInstance, NULL );
	if( !hWnd )
		return E_FAIL;

	ShowWindow(hWnd, nCmdShow);

	return S_OK;
}

HRESULT app::createDevice()
{
	HRESULT hr = S_OK;

	hr = gDevice.init( width, height, hWnd );
	
	return hr;
}