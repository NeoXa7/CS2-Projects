#pragma once
#include <Memory/hProcess.h>

#define Screen_WIDTH GetSystemMetrics(SM_CXSCREEN)
#define Screen_HEIGHT GetSystemMetrics(SM_CYSCREEN)

namespace Flags
{
    // menu flags;
    inline bool isRunning = true;
    inline bool showMenu = true;

    // cheats flags;
    inline bool enableTriggerbot = false;
    inline bool enableRCS = false;
    inline bool enableBhop = false;
    inline bool enableAntiflash = false;
    inline bool enableRadarHack = false;
    inline bool enableGlowHack= false;
    inline bool enableAimbot = false;
    inline bool enableJumpShot = true;
    inline bool enableEsp = true;
}

namespace CS2
{
    inline DWORD procID = ProcessManager::GetProcessID(L"cs2.exe");
    inline uintptr_t clientAddress = ProcessManager::GetModuleBaseAddress(procID, L"client.dll");
}

namespace Offsets
{
    // buttons;
    inline int dwForceAttack = 0x17BC020;
    inline int dwForceAttack2 = 0x17BC0B0;
    inline int dwForceJump = 0x17BC530;

    // offsets;
    inline int dwEntityList = 0x1956A68; // uintptr_t
    inline int dwLocalPlayerPawn = 0x17C37F0; // uintptr_t
    inline int dwViewAngles = 0x19C7E58; // uintptr_t
    inline int dwViewMatrix = 0x19B89F0; // uintptr_t
    inline int dwSensitivity = 0x19B5038; // uintptr_t
    inline int dwSensitivity_sensitivity = 0x40; // uintptr_t

    // client_dll;   
    inline int m_iTeamNum = 0x3C3; // uint8
    inline int m_iHealth = 0x324; // int32
    inline int m_hPlayerPawn = 0x7EC; // CHandle<C_CSPlayerPawn>
    inline int m_flFlashBangTime = 0x1348; // float32
    inline int m_iIDEntIndex = 0x13A8; // CEntityIndex
    inline int m_iShotsFired = 0x22B4; // int32
    inline int m_aimPunchAngle = 0x14CC; // QAngle
    inline int m_vOldOrigin = 0x1274; // Vector
    inline int m_vecViewOffset = 0xC50; // CNetworkViewOffsetVector
    inline int m_Glow = 0xBA0; // CGlowProperty
    inline int m_glowColorOverride = 0x40; // Color
    inline int m_bGlowing = 0x51; // bool
    inline int m_entitySpottedState = 0xEE0; // EntitySpottedState_t
    inline int m_bSpotted = 0x8; // bool
    inline int m_iszPlayerName = 0x640; // char[128]
    inline int m_pGameSceneNode = 0x308; // CGameSceneNode*
    inline int m_modelState = 0x170; // CModelState
    inline int m_fFlags = 0x63; // uint8
    inline int m_vecAbsVelocity = 0x3D0; // Vector
}