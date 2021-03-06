#pragma once
#include "GameActor.h"
#include "RagEffectPrim.h"
#include "Struct.h"
#include "3dLib/Renderer.h" // RPTriFace
#include "Resource/EZeffect.h"


struct objectSegment
{
	/* this+ 0 */ vector3d pos;
	/* this+12 */ vector3d deltaPos;
	/* this+24 */ float longitude;
	/* this+28 */ float latitude;
	/* this+32 */ matrix mat;
};


class CRagEffect : public CRenderObject
{
public:
	CRagEffect();
	virtual ~CRagEffect();
	virtual bool OnProcess();
	virtual void SendMsg(CGameObject* sender, int message, int arg1, int arg2, int arg3);
	virtual void Render(matrix& vtm);
	void Init(CRenderObject* master, int effectId, vector3d fDeltaPos);
	//CEffectPrim* CRagEffect::LaunchEffectPrim(enum EFFECTPRIMID, struct vector3d);
	int GetType();
	//int GetDuration();
	//int GetRagStateCnt();
	//void SetDuration(int);
protected:
	void LoadEzEffect(char* fName);
	//void CRagEffect::InitEZ2STRFrame();
	//unsigned char CRagEffect::ProcessEZ2STR(float, float, float);
	void RenderAniClip(KAC_LAYER& pLayer, const KAC_XFORMDATA* pXformData, int rpCnt, matrix& wtm);
private:
	//void CRagEffect::Test();
	//void CRagEffect::LockOn();
	//void CRagEffect::ColdHit();
	//void CRagEffect::TopRank();
	//void CRagEffect::WarpZone();
	//void CRagEffect::PoisonHit();
	//void CRagEffect::BeginSpell7();
	//void CRagEffect::BeginSpell6();
	//void CRagEffect::BeginSpell5();
	//void CRagEffect::BeginSpell4();
	//void CRagEffect::BeginSpell3();
	//void CRagEffect::BeginSpell2();
	//void CRagEffect::FireSplashHit();
	//void CRagEffect::BeginCasting(char *, char);
	//unsigned char CRagEffect::Signum();
	//unsigned char CRagEffect::Angelus();
	//unsigned char CRagEffect::Mvp();
	//unsigned char CRagEffect::Cure();
	//unsigned char CRagEffect::Lord();
	//unsigned char CRagEffect::Kyrie();
	//unsigned char CRagEffect::Freeze();
	//unsigned char CRagEffect::Magnus();
	//unsigned char CRagEffect::Gloria();
	//unsigned char CRagEffect::Freezed();
	//unsigned char CRagEffect::Invenom();
	//unsigned char CRagEffect::Provoke();
	//unsigned char CRagEffect::FireHit();
	//unsigned char CRagEffect::RefineOk();
	//unsigned char CRagEffect::MaxPower();
	//unsigned char CRagEffect::Quagmire();
	//unsigned char CRagEffect::SkidTrap();
	//unsigned char CRagEffect::Recovery();
	//unsigned char CRagEffect::Aspersio();
	//unsigned char CRagEffect::Claymore();
	//unsigned char CRagEffect::Freezing();
	//unsigned char CRagEffect::Splasher();
	//unsigned char CRagEffect::ShockWave();
	//unsigned char CRagEffect::Sanctuary();
	//unsigned char CRagEffect::Impositio();
	//unsigned char CRagEffect::LexDivina();
	//unsigned char CRagEffect::StormGust();
	//unsigned char CRagEffect::VenomDust();
	//unsigned char CRagEffect::SpringTrap();
	//unsigned char CRagEffect::CrashEarth();
	//unsigned char CRagEffect::Perfection();
	//unsigned char CRagEffect::FirePillar();
	//unsigned char CRagEffect::Benedictio();
	//unsigned char CRagEffect::Suffragium();
	//unsigned char CRagEffect::LexAeterna();
	//unsigned char CRagEffect::Magnificat();
	//unsigned char CRagEffect::RefineFail();
	//unsigned char CRagEffect::AutoCounter();
	//unsigned char CRagEffect::MeteorStorm();
	//unsigned char CRagEffect::PoisonReact2();
	//unsigned char CRagEffect::RepairWeapon();
	//unsigned char CRagEffect::Resurrection();
	//unsigned char CRagEffect::Concentration();
	//unsigned char CRagEffect::BlastMineBomb();
	//unsigned char CRagEffect::FirePillarBomb();
	//unsigned char CRagEffect::TwoHandQuicken();
	//unsigned char CRagEffect::Coin();
	//unsigned char CRagEffect::FireWall();
	//unsigned char CRagEffect::GlassWall();
	//unsigned char CRagEffect::LightBolt();
	//unsigned char CRagEffect::StoneCurse();
	//unsigned char CRagEffect::ThunderStorm();
	//unsigned char CRagEffect::ShieldCharge();
	//unsigned char CRagEffect::JobLvUp50(int);
	//unsigned char EnergyCoat();
	//unsigned char CRagEffect::CartRevolution();
	//unsigned char CRagEffect::EZ2STROnlyEffect();
	//void CRagEffect::Rain();
	//void CRagEffect::Snow();
	//void CRagEffect::Torch();
	//void CRagEffect::Sakura();
	//void CRagEffect::Maple();
	//void CRagEffect::Portal();
	//void CRagEffect::FireFly();
	//void CRagEffect::SandWind();
	//void CRagEffect::SprayPond();
	//void CRagEffect::Banjjakii();
	//void CRagEffect::Cloud(char);
	//void CRagEffect::PokJuk();
	//void CRagEffect::PokJuk_Sound();
	//void CRagEffect::PotionPillar(float, int);
	//unsigned char CRagEffect::Potion_Con();
	//unsigned char CRagEffect::Potion_();
	//unsigned char CRagEffect::Potion_Berserk();
	//void CRagEffect::Hit1();
	//void CRagEffect::Hit2(int);
	//void CRagEffect::Hit3();
	//void CRagEffect::Hit4();
	//void CRagEffect::Hit5();
	//void CRagEffect::Hit6();
	//void CRagEffect::Warp();
	//void CRagEffect::Exit();
	//void CRagEffect::Bash();
	//void CRagEffect::Aqua();
	//void CRagEffect::Vallentine(char);
	//void CRagEffect::Party();
	//void CRagEffect::Entry();
	//void CRagEffect::Steal();
	//void CRagEffect::Sight();
	//void CRagEffect::Smoke();
	//void Hiding();
	//void CRagEffect::HealSP();
	//void CRagEffect::Endure();
	//void CRagEffect::Ruwach();
	//void CRagEffect::Enhance();
	//void CRagEffect::MakeBlur();
	//void CRagEffect::Blessing();
	//void CRagEffect::FireBall();
	//void CRagEffect::IceArrow();
	//void CRagEffect::IncAGIDEX();
	//void CRagEffect::FireArrow();
	//void CRagEffect::VenomDust2();
	//void CRagEffect::NapalmBeat();
	//void CRagEffect::BeginSpell();
	//void CRagEffect::SoulStrike();
	//void CRagEffect::FrostDiver();
	//void CRagEffect::IncAgility();
	//void CRagEffect::CartBoost();
	//void CRagEffect::DecAgility();
	//void CRagEffect::TetraVoltex();
	//void CRagEffect::FrostDiver2();
	//void CRagEffect::StatusState();
	//void CRagEffect::MagnumBreak();
	//void CRagEffect::ReadyPortal();
	//void CRagEffect::Detoxication();
	//void CRagEffect::Teleportation();
	//void CRagEffect::DragonSmoke();
	//void CRagEffect::Cone();
	//void CRagEffect::Sphere();
	//void CRagEffect::Pierce();
	//void CRagEffect::Bottom();
	//void CRagEffect::Revive();
	//void CRagEffect::Bottom2();
	//void CRagEffect::Flasher();
	//void CRagEffect::IceWall();
	//void CRagEffect::Barrier();
	//void CRagEffect::Yufitel();
	//void CRagEffect::HasteUp();
	//void CRagEffect::FireIvy();
	//void CRagEffect::SpearBmr();
	//void CRagEffect::Cloaking();
	//void CRagEffect::BlastMine();
	//void CRagEffect::GrimTooth();
	//void CRagEffect::Detecting();
	//void CRagEffect::BlitzBeat();
	//void CRagEffect::SonicBlow();
	//void CRagEffect::WaterBall();
	//void CRagEffect::WaterBall2();
	//void CRagEffect::OverThrust();
	//void CRagEffect::RemoveTrap();
	//void CRagEffect::YufitelHit();
	//void CRagEffect::EarthSpike();
	//void CRagEffect::TurnUndead();
	//void CRagEffect::SlowPoison();
	//void CRagEffect::BowlingBash();
	//void CRagEffect::Sightrasher();
	//void CRagEffect::FirePillarOn();
	//void CRagEffect::HeavensDrive();
	//void CRagEffect::SonicBlowHit();
	//void CRagEffect::GrimToothAtk();
	//void CRagEffect::EnchantPoison();
	//void CRagEffect::HitDark();
	//void CRagEffect::ChangeDark();
	//void CRagEffect::ChangeFire();
	//void CRagEffect::ChangeCold();
	//void CRagEffect::ChangeWind();
	//void CRagEffect::ChangeFlame();
	//void CRagEffect::ChangeEarth();
	//void CRagEffect::ChangeHoly();
	//void CRagEffect::ChangePoison();
	//void CRagEffect::CurseAttack();
	//void CRagEffect::DarkBreath();
	//void CRagEffect::SummonSlave();
	//void CRagEffect::BloodDrain();
	//void CRagEffect::EnergyDrain();
	//void CRagEffect::EnergyDrain2();
	//void CRagEffect::EnergyDrain3();
	//unsigned char CRagEffect::Suicide();
	//unsigned char CRagEffect::SuiExplosion();
	//void CRagEffect::Level99(char *);
	//void CRagEffect::Level99_2(char *);
	//void CRagEffect::Level99_3(char);
	//void CRagEffect::WaterFallParticle(char, char);
	//void CRagEffect::GumGang(char);
	//void CRagEffect::DEFENDER(char *);
	//void CRagEffect::SAINTCASTING(short, char *, char);
	//void CRagEffect::CoupleCasting(char *);
	//void CRagEffect::HeartCasting(char *, float, float);
	//void CRagEffect::WIND();
	//void CRagEffect::VOLCANO(char *, char);
	//void CRagEffect::VOLCANO2(char *, char);
	//void CRagEffect::GRANDCROSS(short);
	//void CRagEffect::GRANDCROSS2();
	//void RECT_UP();
	//void CRagEffect::INTIMIDATE();
	//void CRagEffect::RG_COIN();
	//void CRagEffect::PRESSURE(char *);
	//void CRagEffect::BASH3D(char *, char, char);
	//void CRagEffect::GroundShake(char *, int);
	//void CRagEffect::TEIHIT1(char *, char);
	//void CRagEffect::TEIHIT2();
	//void CRagEffect::TEIHIT3(char *, char);
	//void CRagEffect::TANJI();
	//void CRagEffect::CHIMTO();
	//void CRagEffect::TRIPLEATTACK();
	//void CRagEffect::TRIPLEATTACK2();
	//void CRagEffect::TRIPLEATTACK3();
	//void CRagEffect::Demonstration();
	//void CRagEffect::CHEMICALPROTECTION(short);
	//void CRagEffect::CHEMICAL2(short);
	//void CRagEffect::CALLZONE(char *);
	//void CRagEffect::BLIND();
	//void CRagEffect::POISON();
	//void CRagEffect::TELEPORTATION2(char *, short);
	//void CRagEffect::PARTICLE_UP();
	//void CRagEffect::CHOOKGI();
	//void CRagEffect::MAPPILLAR(char *, char);
	//void CRagEffect::LINELINK();
	//void CRagEffect::LINELINK2();
	//void CRagEffect::LINELINK3();
	//void CRagEffect::Bottom_Volcano(char *, char, float, float);
	//void CRagEffect::Bottom_Light(char *, char);
	//void CRagEffect::Bottom_LandProtector(char *, char);
	//void CRagEffect::Bottom_Music(char *, char);
	//void CRagEffect::EffectTextureSet(char *, char);
	//void CRagEffect::Bottom_Vertical(char *, char);
	//void CRagEffect::Bottom_Out(char *, char);
	//void CRagEffect::Bottom_Spr();
	//void CRagEffect::MagicRod();
	//void CRagEffect::Providence(char *);
	//void CRagEffect::ForestLight(char *, char);
	//void CRagEffect::WaterFall(char *, char, char, char);
	//void CRagEffect::LightSphere(char *);
	//void CRagEffect::ShieldBoomerang();
	//void CRagEffect::FirstAid();
	//void CRagEffect::ThrowItem(char *, char);
	//void CRagEffect::HealTime(char *, char);
	//void CRagEffect::Heal(char *, char);
	//void CRagEffect::Heal2(char *, char);
	//void CRagEffect::Exit2(char *);
	//void CRagEffect::Guard(char *);
	//void CRagEffect::SaintWing(char *);
	//void CRagEffect::SphereWind(char *, int, char);
	//unsigned char CRagEffect::GlassWall2(char *);
	//void CRagEffect::Bottom_Magnus(char *, char);
	//void CRagEffect::Basilica(char *, char);
	//void CRagEffect::ReadyPortal2();
	//void CRagEffect::Portal2(char);
	//void CRagEffect::PortalWind(char);
	//void CRagEffect::WarpZone2(char *);
	//void CRagEffect::Magnum2(char *);
	//void CRagEffect::Entry2();
	//void CRagEffect::ColorPaper(char *);
	//void CRagEffect::Foot(char *);
	//void CRagEffect::BeginAsura();
	//void CRagEffect::HitLine(char);
	//void CRagEffect::Ghost(char);
	//void CRagEffect::SuperAngel(char, char);
	//void CRagEffect::SoulBreaker();
	//void CRagEffect::Talk_FrostJoke(char);

private:
	/* this+    0 */ //CRenderObject baseclass_0;
	/* this+  204 */ CRenderObject* m_master;
	/* this+  208 */ int m_defZ;
	/* this+  212 */ int m_isDirection;
	/* this+  216 */ int m_type;
	/* this+  220 */ int m_level;
	/* this+  224 */ int m_flag;
	/* this+  228 */ int m_count;
	/* this+  232 */ int m_stateCnt;
	/* this+  236 */ int m_duration;
	/* this+  240 */ float m_param[4];
	/* this+  256 */ float m_longitude;
	/* this+  260 */ float m_latitude;
	/* this+  264 */ float m_tlvertX;
	/* this+  268 */ float m_tlvertY;
	/* this+  272 */ float m_tlvertZ;
	/* this+  276 */ vector3d m_deltaPos;
	/* this+  288 */ vector3d m_deltaPos2;
	/* this+  300 */ vector3d m_deltaPos3;
	/* this+  312 */ mystd::list<CEffectPrim*> m_primList;
	/* this+  324 */ objectSegment m_objSeg[20];
	/* this+ 1924 */ CEZeffectRes* m_ezEffectRes;
	/* this+ 1928 */ KANICLIP* m_aniClips;
	/* this+ 1932 */ KAC_XFORMDATA m_actXformData[128];
	/* this+16780 */ int m_iCurLayer;
	/* this+16784 */ int m_cEndLayer;
	/* this+16788 */ bool m_isLayerDrawn[128];
	/* this+16916 */ int m_aiCurAniKey[128];
	/* this+17428 */ RPTriFace m_rp[512];

private:
	static hook_func<bool (CRagEffect::*)()> CRagEffect::_OnProcess;
	static hook_func<void (CRagEffect::*)(CGameObject* sender, int message, int arg1, int arg2, int arg3)> CRagEffect::_SendMsg;
	static hook_func<void (CRagEffect::*)(CRenderObject* master, int effectId, vector3d fDeltaPos)> CRagEffect::_Init;
	static hook_func<void (CRagEffect::*)(KAC_LAYER& pLayer, const KAC_XFORMDATA* pXformData, int rpCnt, matrix& wtm)> CRagEffect::_RenderAniClip;
};
