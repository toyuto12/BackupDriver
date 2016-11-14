#define IO_C
#include "io.h"

/**
 * 入力信号から、モータ動作指令を読み取る
 * @param in デジタル入力信号
 * @return モータ動作指令
 */
uint8_t CheckMoveSig( stInput *in ){
	static uint8_t r=false;
	static uint8_t RDly=STATE_CHANGE_DLY;
	
	if( in->es ) r = false;
	else if( in->ss ) r = true;
	
	if( in->r2_14d ){
		if( RDly ) RDly--;
	}else{
		r = false;
		RDly = STATE_CHANGE_DLY;
	}
		
	return (r && (!RDly));
}

#define CHATA	10
/**
 * デジタル信号関連のタスク
 * @param in デジタル入力信号
 */
void TaskInput( stInput *in ){
	static uint8_t Cnt[7];
	stInput tmp = {0};
	uint8_t msk = 1;
	uint8_t *pInput,*pOutput,changeFlg,i;

	if( !iSIG_DIP1 )	tmp.dpsw1 = 1;
	if( !iSIG_DIP2 )	tmp.dpsw2 = 1;
	if( !iSIG_ES )		tmp.es = 1;
	if( !iSIG_SS )		tmp.ss = 1;
	if( iMOT_ERROR )	tmp.motErr = 1;
	if( iSIG_R2_14D )	tmp.r2_14d = 1;

	pInput = (uint8_t *) &tmp;
	pOutput = (uint8_t *) in;
	changeFlg = *pInput ^ *pOutput;

	for( i=0;i<7;i++ ){
		if( changeFlg & msk ){
			if( Cnt[i] < CHATA ) Cnt[i] ++;
			else{
				Cnt[i] = 0;
				if( *pInput & msk ) *pOutput |= msk;
				else *pOutput &= ~msk;
			}
		}else Cnt[i] = 0;
		msk <<= 1;
	}
	
	// printu("IN:%X\r\n",*pInput);
	
}

/**
 * デジタル入力関係の初期化
 */
void InitIoPort( void ){
	
	TRISA |=  0xD0;
	
	TRISB =   0xBF;

	TRISC &= ~0xF8;
}

