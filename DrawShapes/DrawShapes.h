#pragma once
#include <d3d9.h>
#include <d3dx9.h>
#include <windows.h>
#define D3DFVF_CUSTOMVERTEX (D3DFVF_XYZ | D3DFVF_DIFFUSE)

// ���� ����
LPDIRECT3D9             g_pD3D = NULL; // D3D ����̽��� ������ D3D��ü����
LPDIRECT3DDEVICE9       g_pd3dDevice = NULL; // �������� ���� D3D����̽�
LPDIRECT3DVERTEXBUFFER9 g_pVB = NULL; // ������ ������ ��������

// ���� ����ü
struct CUSTOMVERTEX
{
    D3DXVECTOR3 position; // ������ ��ġ
    DWORD color; // ������ ����
};

// ������ ���ν��� �Լ�
LRESULT WINAPI WindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// �ʱ�ȭ �Լ�
HRESULT InitD3D(HWND hWnd);

// ���� �Լ�
VOID Cleanup();

// ������ �Լ�
VOID Render();

// ���ø����̼� ������
INT WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR, INT);