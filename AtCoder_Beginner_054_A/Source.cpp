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

//map���Ăǂ��Ŏg���̂��킩��Ȃ������̂ŁAmap���g�������Ƃ��̔��z�����͂ŏo�Ă��Ċ�����
//�������Ɠ��̗ǂ����@�Ȃ��ł����c

//������x�����ɏ]�������l�̋������

int main() {
	const int max = 13; //�g�p����g�����v��13�����@13
	const int singularity = 1; //����̓|�[�J�[�Ȃ̂�1�����ِ��@��x���̏ꍇ�ɂ�2����ԋ����̂�2�������ɑ������
	const int adjustment = 1;  //�g�����v�͂P����n�܂�̂�0����n�߂�v���O�����ɒ��߂���(1����n�߂Ă������ł���int i=1���Ă����������̂ŋp�� int i=0  (�����mp�̏����l�@mp[N]=1�@����@mp[N]=0�@�ɂ���))

	int alice, bob;
	std::string result;
	std::map<int,int> mp;

	for (int i = max; i > 0;i--) {
		if (i > singularity) {
			mp[i] = i - singularity - adjustment;  //max==13���猸���Ă���
		}
		else {
			mp[i] = max + i - singularity - adjustment;      //singularity��萔�l�����������Ƃ��A���݂���ő�̐��l�̎��̐��l��������@�|�[�J�[(const int singularity = 1)�̎��A�u�P�v�̋������u12(0�`12��13���̂����ŋ�)�v�@��x��(const singularity = 2)�̎��A�u1�v�̋������u11(0�`12��13���̂�����Ԗڂɋ���)�A�u2�v�̋������u12(0�`12��13���̂����ŋ�)�v
		}
	}

	
	for (auto&& x : mp) {
		std::cout<<x.first<<" "<<x.second<<std::endl; //mp�̊m�F(AtCoder�ɂ͖��ʂȏo�͂Ȃ̂ŃR�����g������)
	}
	

	std::cin >> alice >> bob;

	mp[alice]>mp[bob]? result = "Alice" : mp[alice] < mp[bob] ? result = "Bob" : result = "Draw";

	std::cout << result << std::endl;

	return 0;
}


//�蓮git_ver_1
/*
mp[2] = 0;
mp[3] = 1;
mp[4] = 2;
mp[5] = 3;
mp[6] = 4;
mp[7] = 5;
mp[8] = 6;
mp[9] = 7;
mp[10] = 8;
mp[11] = 9;
mp[12] = 10;
mp[13] = 11;
mp[1] = 12;
*/