#pragma once


// class vertexInputLayoutManager
// {
// public:
// 	enum eSemantics
// 	{
// 		POSITION,
// 		COLOR0, COLOR1, COLOR2, COLOR3,
// 		TEXCOORD0, TEXCOORD1, TEXCOORD2, TEXCOORD3, TEXCOORD4, TEXCOORD5, TEXCOORD6, TEXCOORD7,
// 		NORMAL0,
// 		BINORMAL,
// 		TANGENT,
// 	};
// 
// 	struct inputLayout
// 	{
// 		std::vector< std::string > semantics;
// 		std::vector< unsigned int > indices;
// 		std::vector< DXGI_FORMAT > gi_format;
// 
// 		D3D11_INPUT_ELEMENT_DESC* layout;
// 	};
// 
// public:
// 	vertexInputLayoutManager();
// 	virtual ~vertexInputLayoutManager();
// 
// 	void add( std::string& smt, unsigned int index, DXGI_FORMAT fmt );
// 
// 	D3D11_INPUT_ELEMENT_DESC* getLayout();
// 
// 	void buildLayout();
// 
// private:
// 
// };