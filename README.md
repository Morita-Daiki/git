# matlab FPS measureing

# How to use
## Write bin to Nucleo446
1.connect nucleo to pc\
2.copy [bin file](nucleo446re_64bit_led_code.bin) to nucleo device\
nucleoのボタンを押すたびに(1ms-2ms-5ms-10ms-20ms-50ms-100ms-1ms...)と切り替わります\
https://user-images.githubusercontent.com/37872526/133706962-526c529a-6316-475f-88c9-43b97c9ff280.mp4


3.acuire video by any ways\
4.run the [matlab code](im64bit.mlx)

## 座標選択
座標選択時\
```mousemode=true```

ledの移動順に4点\
1(No.01,x=1,y=1)\
2(No.08,x=8,y=1)\
3(No.57,x=1,y=8)\
4(No.64,x=8,y=8)\
をクリックしていく\
![image](https://user-images.githubusercontent.com/37872526/133704723-b2d30bc4-76b0-4484-bad4-5663c7676934.png)


座標再利用時\
```mousemode=false```,p1,p8,p57,p64に座標を設定しておく

## 結果
フレーム間隔等の推移\
![image](https://user-images.githubusercontent.com/37872526/133704800-add66a24-09f8-41c1-8765-782da07b9b00.png)\
フレーム間隔の分布\
![image](https://user-images.githubusercontent.com/37872526/133704837-1e313d2f-b2dc-4fbf-8abc-a5d7ae6fadf4.png)
