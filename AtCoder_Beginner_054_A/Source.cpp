/*
��蕶
Alice��Bob�́A2�l��1���|�[�J�[���s���܂��B
1���|�[�J�[�́A�g�����v��p���čs��2�l�Q�[���ł��B

����g�p����g�����v�ł́A�e�J�[�h�� 1 ���� 13 �܂ł̐���������Ă��܂��B
�J�[�h�̋����́A�J�[�h�ɏ�����Ă��鐔�Ō��܂�C�����̊�͈ȉ��̒ʂ�ł��B
�� 2 < 3 < 4 < 5 < 6 < 7 < 8 < 9 < 10 < 11 < 12 < 13 < 1 ��

1���|�[�J�[�͈ȉ��̎菇�ōs���܂��B

�e�v���C���[�́A�g�����v����J�[�h��1���I��ŁA�����̎�D�Ƃ��܂��B
���v���C���[�́A��D�����������܂��B�����J�[�h�������Ă���v���C���[�������ł��B
�Ȃ��A���v���C���[�̎����Ă���J�[�h�̋����������ꍇ�͈��������ł��B
2�l�̑ΐ�𒭂߂Ă������Ȃ��́AAlice��Bob�̎�D��m�邱�Ƃ��ł��܂��B
Alice�������Ă���J�[�h�ɏ�����Ă��鐔�� A �ABob�������Ă���J�[�h�J�[�h�ɏ�����Ă��鐔�� B �ł��B
2�l�̑���ɁA���s�𔻒肷��v���O����������Ă��������B
*/

#include<iostream>
#include<map>
#include<string>

int main() {
	int alice, bob;
	std::string result;
	std::map<int,int> mp;
	mp[1] = 13;
	mp[2] = 0;
	mp[3] = 1;
	mp[4] = 3;
	mp[5] = 4;
	mp[6] = 5;
	mp[7] = 6;
	mp[8] = 7;
	mp[9] = 8;
	mp[10] = 9;
	mp[11] = 10;
	mp[12] = 11;
	mp[13] = 12;

	std::cin >> alice >> bob;

	mp[alice]>mp[bob]? result = "Alice" : mp[alice] < mp[bob] ? result = "Bob" : result = "Draw";

	std::cout << result << std::endl;

	return 0;
}