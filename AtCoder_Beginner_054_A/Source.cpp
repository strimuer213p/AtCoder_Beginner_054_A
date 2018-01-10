/*
問題文
AliceとBobは、2人で1枚ポーカーを行います。
1枚ポーカーは、トランプを用いて行う2人ゲームです。

今回使用するトランプでは、各カードに 1 から 13 までの数が書かれています。
カードの強さは、カードに書かれている数で決まり，強さの基準は以下の通りです。
弱 2 < 3 < 4 < 5 < 6 < 7 < 8 < 9 < 10 < 11 < 12 < 13 < 1 強

1枚ポーカーは以下の手順で行います。

各プレイヤーは、トランプからカードを1枚選んで、自分の手札とします。
両プレイヤーは、手札を見せ合います。強いカードを持っているプレイヤーが勝ちです。
なお、両プレイヤーの持っているカードの強さが同じ場合は引き分けです。
2人の対戦を眺めていたあなたは、AliceとBobの手札を知ることができます。
Aliceが持っているカードに書かれている数は A 、Bobが持っているカードカードに書かれている数は B です。
2人の代わりに、勝敗を判定するプログラムを作ってください。
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