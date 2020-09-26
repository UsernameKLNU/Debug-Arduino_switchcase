int exit_status=0;
char lang=null;
void setup() {
  Serial.begin(115200);
}

void loop() {
  if (Serial.available() > 0)
  {
    int game = Serial.read();
    switch (game)
    {
      case "开始游戏":
        Serial.println("第一章 镜中镜");
        Serial.println("屏幕前出现选择语言");
        break;
      case "读取存档":
        Serial.println("抱歉，没有存档");
        break;
      case "退出游戏":
‮        Serial.println("欢迎下次再来！");‮
        exit_status=1;
        break;
      default:
        Serial.println("输入错误！");
    }
  }
  if (Serial.available() > 0)
  {
    int game = Serial.read();
    switch (game)
    {
      case "zh-hans":
        lang="zh-hans";
        Serial.println("你要是能看懂这个，请离开游戏");
        break;
      case "zh-hant"
        lang="zh-hant";
        Serial.println("你要是能看懂這個，請離開遊戲");
      default:
        Serial.println("只支持zh-hans 简体字和zh-hant 繁体字,只能输入 zh-hans、zh-hant")
    }
    int game = Serial.read();
    switch (game)
    {
      
    }
    }
}
