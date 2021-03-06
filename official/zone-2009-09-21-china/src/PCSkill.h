#pragma once
#include "struct.hpp"
#include "std/deque"
#include "std/map"
#include "std/vector"
class CPC;
class CZGuildInfo;


class CPCSkill
{
	/* this+  0 */ public: //const CPCSkill::`vftable';
	/* this+  4 */ private: int m_plusItemWeight;
	/* this+  8 */ private: int m_plusItemWeightBySkill;
	/* this+ 12 */ private: short m_warpXPos;
	/* this+ 14 */ private: short m_warpYPos;
	/* this+ 16 */ private: unsigned long m_warpExpireTime;
	/* this+ 20 */ private: int m_warpSize;
	/* this+ 24 */ private: char m_talkBoxContents[80];
	/* this+104 */ private: char m_graffitiContents[80];
	/* this+184 */ private: CPC* m_pc;
	/* this+188 */ private: int m_sanctuaryCnt;
	/* this+192 */ private: int m_stormGustCnt;
	/* this+196 */ private: int m_fireWallCount[3];
	/* this+208 */ private: MONSTER_CREATED_BYSKILL m_monsterCreatedBySkill[3];
	/* this+244 */ private: int m_playSkillCount;
	/* this+248 */ private: int m_warpCount;
	/* this+252 */ private: unsigned short m_encoreSKID;
	/* this+254 */ private: unsigned short m_encoreSkLevel;
	/* this+256 */ private: unsigned short m_curImitSKID;
	/* this+260 */ private: unsigned long m_partnerAID;
	/* this+264 */ private: unsigned long m_playStartedTime;
	/* this+268 */ private: unsigned long m_graffitiAID;
	/* this+272 */ private: unsigned long m_weaponMasterAID;
	/* this+276 */ private: int m_isEncoreSkill;
	/* this+280 */ private: mystd::map<unsigned short,PC_SKILL_INFO> m_skill;
	/* this+292 */ private: mystd::map<unsigned short,PC_SKILL_INFO> m_disposableSkill;
	/* this+304 */ private: mystd::vector<DYNAMIC_SKILLINFO> m_dynamicSkill;
	/* this+320 */ private: mystd::deque<WARP_POSITION> m_warpInfo;
	/* this+352 */ private: mystd::vector<PLAY_SKILLINFO> m_playSkillList;
	/* this+368 */ private: mystd::map<unsigned short,PARAMETER> m_GDMasterParamList;
	/* this+380 */ private: unsigned short m_spellCastingSKID;
	/* this+382 */ private: short m_spellCastingSKLevel;
	/* this+384 */ private: mystd::list<unsigned long> m_specialZoneList;
	/* this+396 */ private: int m_isSkillLoaded;
	/* this+400 */ private: mystd::list<unsigned long> m_spiritsTime;
	/* this+412 */ private: int m_skillCondition;
	/* this+416 */ private: unsigned long m_abracadabraSKID;
	/* this+420 */ private: int m_bCallPartner;
	/* this+424 */ private: mystd::map<unsigned long,int> m_limitedSkill;
	/* this+436 */ private: mystd::map<unsigned long,unsigned long> m_postdelaySkill;

	public: CPCSkill::CPCSkill(void);
	public: virtual CPCSkill::~CPCSkill(void);
	//public: void CPCSkill::Init();
	//public: void CPCSkill::Reset();
	//public: int CPCSkill::AddSkill(unsigned short, PC_SKILL_INFO *, SKILLINFO *, const bool);
	//public: void CPCSkill::AddSkillFromItemServer(unsigned short, int, unsigned long, int);
	//public: void CPCSkill::DeleteSkillFromItemServer(unsigned short, int);
	public: void CPCSkill::AddSkillFromNPCEvent(unsigned short SKID, int level, int type);
	public: void CPCSkill::DeleteSkill(unsigned short SKID, int isDisposable);
	public: PC_SKILL_INFO* CPCSkill::GetSkill(unsigned short SKID, int isFixedSkill);
	//public: int CPCSkill::ParseSkill(const char *, short);
	public: int CPCSkill::LoadSkill(const int in_Length, const unsigned char* in_pData);
	//public: void CPCSkill::UpgradeSkillLevel(unsigned short);
	public: int CPCSkill::SaveSkill(void);
	//public: int CPCSkill::SendSkillSelectList(const mystd::vector<int> &, const enum PACKET_ZC_SKILL_SELECT_REQUEST::enumWHY);
	//public: void CPCSkill::ApplyPassiveSkill(unsigned short, unsigned short);
	//public: void CPCSkill::NotifySkillInfo(unsigned short, bool, int);
	public: void CPCSkill::NotifyAllSkillInfo(void);
	//public: void CPCSkill::NotifySkillInfoDelete(const int);
	//public: void CPCSkill::NotifySkillInfo_FakeType(unsigned short, int);
	//public: void CPCSkill::CheckAllEnableSkill();
	public: int CPCSkill::IsConditionalSkill(unsigned short skillID);
	public: int CPCSkill::IsEnableSkill(unsigned short skillID, short job);
	//public: int CPCSkill::IsEncoreSkill();
	public: void CPCSkill::AddSkillImitation(unsigned short SKID, int level);
	public: int CPCSkill::AM_IsMakableItemBySkill(unsigned short itemID);
	public: int CPCSkill::AM_IsMakableItemByItem(unsigned short itemID );
	public: int CPCSkill::AM_ManufactureItem(unsigned short itemID, unsigned long type, int number, MAKABLEITEM_INFO* info);
	//public: void CPCSkill::SetMyOwner(CPC *);
	public: short CPCSkill::GetSkillLevel(unsigned short SKID, int isFixedSkill);
	//public: int CPCSkill::GetSkillLevel2(unsigned short, int);
	public: int CPCSkill::GetSkillType(unsigned short SKID);
	public: short CPCSkill::GetSkillRange(unsigned short SKID, short level);
	//public: void CPCSkill::UpdateAvailableInfo(unsigned short, bool);
	public: int CPCSkill::GetWarpInfoXpos(char xnum);
	//public: void CPCSkill::LoadWarpInfo();
	public: void CPCSkill::LoadStarPlaceInfo(void);
	public: void CPCSkill::UpdateWarpInfo(void);
	public: void CPCSkill::UpdateStarPlace(char* mapName, short num);
	public: int CPCSkill::GetWarpInfo(WARPPORTAL_INFO* warpinfo);
	public: short CPCSkill::GetWarpXPos(void);
	public: short CPCSkill::GetWarpYPos(void);
	public: void CPCSkill::SetWarpXPos(short xPos);
	public: void CPCSkill::SetWarpYPos(short yPos);
	//public: int CPCSkill::SearchWarpList(char *, short &, short &, int);
	//public: void CPCSkill::SetWarpExpireTime(unsigned long);
	//public: void CPCSkill::SetWarpSize(int);
	//public: unsigned long CPCSkill::GetWarpExpireTime();
	//public: int CPCSkill::GetWarpSize();
	//public: void CPCSkill::PushWarpPosition(short, short, char *);
	//public: int CPCSkill::GetPlusItemWeight();
	//public: void CPCSkill::SetPlusItemWeight(int);
	//public: int CPCSkill::GetDiscountPercent();
	//public: int CPCSkill::GetOverChargePercent();
	//public: int CPCSkill::GetSkillSize();
	public: void CPCSkill::UpdateSkillType(unsigned short SKID, unsigned long type, int level);
	//public: int CPCSkill::GetTotalFirstJobSkillLevel();
	//public: int CPCSkill::GetTotalSecondJobSkillLevel();
	//public: int CPCSkill::GetTotalThirdJobSkillLevel();
	//public: void CPCSkill::ResetFirstJobSkillLevel();
	//public: void CPCSkill::ResetSecondJobSkillLevel();
	//public: void CPCSkill::ResetThirdJobSkillLevel();
	//public: void CPCSkill::ResetAllSkillLevelExceptNoviceSkill();
	//public: int CPCSkill::GetTotalSkillLevelExceptNoviceSkill();
	//public: int CPCSkill::IsSecondSkill(unsigned short);
	//public: static bool CPCSkill::IsSecondSkill(const int, const int);
	//public: int CPCSkill::IsFirstSkill(unsigned short);
	//public: static bool CPCSkill::IsFirstSkill(const int, const int);
	//public: static int CPCSkill::IsThirdSkill(unsigned short);
	public: void CPCSkill::SetFireWallCount(int index, int count);
	//public: int CPCSkill::GetFireWallIndex();
	//public: int CPCSkill::GetPassiveSkillPlusAttackPower(CITP *, CCharacter *, const int);
	//public: int CPCSkill::GetPassiveSkillPlusMeleeAttackPowerbyPercent(CITP *, CCharacter *, const int);
	//public: int CPCSkill::GetPassiveSkillPlusAttackPowerbyPercent(CITP *, CCharacter *, const int);
	public: int CPCSkill::IsMakableItemBySkill(unsigned short itemID);
	public: int CPCSkill::IsMakableItemByItem(unsigned short itemID);
	public: int CPCSkill::ManufactureItem(unsigned short itemID, unsigned long type, MAKABLEITEM_INFO* info);
	//public: void CPCSkill::SetTalkBoxcontents(char *);
	//public: char * CPCSkill::GetTalkBoxcontents();
	//public: void CPCSkill::SetContents(unsigned short, char *);
	//public: char * CPCSkill::GetContents(unsigned short);
	//public: void CPCSkill::AddPlayingSkill(const unsigned long, const int, const int);
	public: void CPCSkill::DeletePlayingSkill(const unsigned long in_skAID);
	//public: void CPCSkill::SetPartnerAID(unsigned long);
	//public: void CPCSkill::SetWeaponMasterAID(unsigned long);
	//public: unsigned long CPCSkill::GetPartnerAID();
	//public: unsigned long CPCSkill::GetWeaponMasterAID();
	//public: unsigned short CPCSkill::GetEncoreSKID();
	//public: int CPCSkill::GetEncoreSkLevel();
	public: void CPCSkill::DestroyPlayingSkill(void);
	public: void CPCSkill::SetPosPlayingSkill(int x, int y);
	public: void CPCSkill::DisappearPlayingSkill(void);
	//public: int CPCSkill::IsSkillLoaded();
	//public: short CPCSkill::GetNumOfSpirits();
	//public: void CPCSkill::ResetSpirits();
	//public: void CPCSkill::AddSpirits(short);
	//public: void CPCSkill::MinusSpirits(short);
	public: void CPCSkill::UpdateSpiritsInfo(void);
	public: unsigned long CPCSkill::GetSKIDFromAbracadabra(void);
	public: void CPCSkill::SetSKIDFromAbracadabra(unsigned long SKID);
	public: void CPCSkill::SetLimitedSkill(unsigned long SKID, int count);
	//public: int CPCSkill::GetLimitedSkillNum(unsigned long);
	//public: void CPCSkill::SetPostdelaySkill(unsigned long, unsigned long);
	//public: int CPCSkill::IsEndPostdelaySkill(unsigned long);
	public: void CPCSkill::SetMasterSkill(CZGuildInfo* pGuild);
	//public: void CPCSkill::ResetMasterSkill();
	//public: void CPCSkill::ApplyGDPassiveSkill(CPC *);
	//public: int CPCSkill::GetLimitNumByCannibalize(int);
	public: mystd::deque<WARP_POSITION>* CPCSkill::GetWarpPosInfo(void);
	//public: void CPCSkill::UpdatePlusItemWeightBySkill();
	//public: MONSTER_CREATED_BYSKILL* CPCSkill::GetMonsterCreatedBySkill(unsigned short);
	//public: int CPCSkill::UpdateMonsterCreatedBySkill(unsigned short, int, int);
	//private: void CPCSkill::UpdateWarpList(char *, short, short);
	//private: void CPCSkill::ApplyPassiveSkillByReset(unsigned short);

private:
	static hook_method<void (CPCSkill::*)(unsigned short SKID, int level, int type)> CPCSkill::_AddSkillFromNPCEvent;
	static hook_method<void (CPCSkill::*)(unsigned short SKID, int isDisposable)> CPCSkill::_DeleteSkill;
	static hook_method<PC_SKILL_INFO* (CPCSkill::*)(unsigned short SKID, int isFixedSkill)> CPCSkill::_GetSkill;
	static hook_method<int (CPCSkill::*)(const int in_Length, const unsigned char* in_pData)> CPCSkill::_LoadSkill;
	static hook_method<int (CPCSkill::*)(void)> CPCSkill::_SaveSkill;
	static hook_method<void (CPCSkill::*)(void)> CPCSkill::_NotifyAllSkillInfo;
	static hook_method<int (CPCSkill::*)(unsigned short skillID)> CPCSkill::_IsConditionalSkill;
	static hook_method<int (CPCSkill::*)(unsigned short skillID, short job)> CPCSkill::_IsEnableSkill;
	static hook_method<void (CPCSkill::*)(unsigned short SKID, int level)> CPCSkill::_AddSkillImitation;
	static hook_method<int (CPCSkill::*)(unsigned short itemID)> CPCSkill::_AM_IsMakableItemBySkill;
	static hook_method<int (CPCSkill::*)(unsigned short itemID )> CPCSkill::_AM_IsMakableItemByItem;
	static hook_method<int (CPCSkill::*)(unsigned short itemID, unsigned long type, int number, MAKABLEITEM_INFO* info)> CPCSkill::_AM_ManufactureItem;
	static hook_method<short (CPCSkill::*)(unsigned short SKID, int isFixedSkill)> CPCSkill::_GetSkillLevel;
	static hook_method<int (CPCSkill::*)(unsigned short SKID)> CPCSkill::_GetSkillType;
	static hook_method<short (CPCSkill::*)(unsigned short SKID, short level)> CPCSkill::_GetSkillRange;
	static hook_method<int (CPCSkill::*)(char xnum)> CPCSkill::_GetWarpInfoXpos;
	static hook_method<void (CPCSkill::*)(void)> CPCSkill::_LoadStarPlaceInfo;
	static hook_method<void (CPCSkill::*)(void)> CPCSkill::_UpdateWarpInfo;
	static hook_method<void (CPCSkill::*)(char* mapName, short num)> CPCSkill::_UpdateStarPlace;
	static hook_method<int (CPCSkill::*)(WARPPORTAL_INFO* warpinfo)> CPCSkill::_GetWarpInfo;
	static hook_method<short (CPCSkill::*)(void)> CPCSkill::_GetWarpXPos;
	static hook_method<short (CPCSkill::*)(void)> CPCSkill::_GetWarpYPos;
	static hook_method<void (CPCSkill::*)(short xPos)> CPCSkill::_SetWarpXPos;
	static hook_method<void (CPCSkill::*)(short yPos)> CPCSkill::_SetWarpYPos;
	static hook_method<void (CPCSkill::*)(unsigned short SKID, unsigned long type, int level)> CPCSkill::_UpdateSkillType;
	static hook_method<void (CPCSkill::*)(int index, int count)> CPCSkill::_SetFireWallCount;
	static hook_method<int (CPCSkill::*)(unsigned short itemID)> CPCSkill::_IsMakableItemBySkill;
	static hook_method<int (CPCSkill::*)(unsigned short itemID)> CPCSkill::_IsMakableItemByItem;
	static hook_method<int (CPCSkill::*)(unsigned short itemID, unsigned long type, MAKABLEITEM_INFO* info)> CPCSkill::_ManufactureItem;
	static hook_method<void (CPCSkill::*)(const unsigned long in_skAID)> CPCSkill::_DeletePlayingSkill;
	static hook_method<void (CPCSkill::*)(void)> CPCSkill::_DestroyPlayingSkill;
	static hook_method<void (CPCSkill::*)(int x, int y)> CPCSkill::_SetPosPlayingSkill;
	static hook_method<void (CPCSkill::*)(void)> CPCSkill::_DisappearPlayingSkill;
	static hook_method<void (CPCSkill::*)(void)> CPCSkill::_UpdateSpiritsInfo;
	static hook_method<unsigned long (CPCSkill::*)(void)> CPCSkill::_GetSKIDFromAbracadabra;
	static hook_method<void (CPCSkill::*)(unsigned long SKID)> CPCSkill::_SetSKIDFromAbracadabra;
	static hook_method<void (CPCSkill::*)(unsigned long SKID, int count)> CPCSkill::_SetLimitedSkill;
	static hook_method<void (CPCSkill::*)(CZGuildInfo* pGuild)> CPCSkill::_SetMasterSkill;
	static hook_method<mystd::deque<WARP_POSITION>* (CPCSkill::*)(void)> CPCSkill::_GetWarpPosInfo;

	friend class CPC;
	friend class CPCPacketHandler;
};
