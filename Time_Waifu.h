#pragma once

#include<graphics.h>

//mci�ӿڵĲ���
#define DETAILS NULL,0,NULL

//������ʾ�ķ�Χ�����ϣ��ң��£�
#define TEXTAREA 450,20,630,170

//��ʱ��ʱ�䣨�֣�ʮλ���֣���λ���룺ʮλ���룺��λ��
#define ONTIME t[14]=='0'&&t[15]=='0'&&t[17]=='0'&&t[18]=='0'

void textStyle(const TCHAR* fontFamily, int fontSize, COLORREF fontColor); //����������ʽ
void displayWords(char h_chara, char h1, char h2);       //��ʾ̨��
void volumeText(int volume);                             //��ʾ��������
void changeVolume(int volume);
void timeVoice(char h_chara, char h1, char h2, int volume); //�������㱨ʱ����
void charaText();                                        //��ʾ��ɫ�л�����

