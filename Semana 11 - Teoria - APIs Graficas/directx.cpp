#include <windows.h>
#include <d3d11.h>
#pragma comment (lib, "d3d11.lib")

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    // código de inicialização da janela omitido
    
    // criação do dispositivo DirectX e do contexto de renderização
    ID3D11Device* device;
    ID3D11DeviceContext* context;
    D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, 0, NULL,
