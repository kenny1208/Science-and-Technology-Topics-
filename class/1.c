#include <stdio.h>

int main(void)
{
  int j=1;
 while (j>0)
   {
    int i=0,a;
    printf("������T���ի�1�}�l\n");
    while (i==0)
    {
        scanf("%d",&a);
        if (a==1)
        {
            i=1;
        }
        else
          printf("������T���ի�1�}�l\n");
    }
    a=0;

  int p=0;
    printf("�б�:�A�������ڭ̬�t?\n��1�^��:�ڳ��w���q��\n��2�^��:�ڳ��w�ѨM�����D���H\n��3�^��:�q�p�N��q���ܷP����\n");
  scanf("%d",&a);
  a=0;
  printf("�б�:���A������Q�ӳo���Ǯ�?\n��1�^��:���a��\n��2�^��:�����s�ڿ諸\n��3�^��:�����ܦn\n");
  scanf("%d",&a);
  a=0;
  int g;
  printf("�б�:�A�̫�@���������`���h��?\n");
  scanf("%d",&g);
  if(g>=50)
  {
    printf("����\n");
    a=a+3;
  }
  else if(g>=40&&g<50)
  {
    printf("����\n");
    a=a+2;
  }
  else if(g>=30&&g<40)
  {
    printf("ok\n");
    a=a+1;
  }
    else if(g>=20&&g<30)
  {
    printf("�F��\n");
  }
  else
  {
    printf("...");
  }
  printf("�q�����o�i�i�����|�Ӯɴ��Ga.�n��q���ɴ��Fb.����ɴ��Fc.�q����ɴ��Fd.�u�źޮɴ��F��o�i���Ķ̌Ǭ��M?\n(1)ABCD\n(2)BADC\n(3)BDCA\n(4)CABD\n");
scanf("%d",&p);
  if(p==3)
  {
    a=a+2;
  }
  p=0;
printf("�i�H�����ֳt�ƧǪ���z��?\n(1)��z�O���q��l�ǦC����@�Ӱ�ǭȡA���۳v�ӱN��ƻP��ǭȤ���A���ǭȤp����Ʃ�b����A���ǭȤj����Ʃ�b�k��A�N��ǭȩ�b�ǦC�������A�Ϩ䥪�䳣�p���ǭȡA�k�䳣�j���ǭȡA�A�q����ǦC��X��ǭȡA���ƫe���B�J�A����Ƨǧ�\n(2)�O�N��Ƴv�ө�J�w�Ʀn���ǦC���A�B�v�өM�w�Ʀn����Ƥ���A��쥿�T����m���J\n");
  scanf("%d",&p);
  if(p==1)
  {
    a=a+2;
  }
  p=0;
 printf("��ת��p��?\n(1)�O�ǥѱK�X�ǻP�@�Ѿ���޳N�إ߻P�x�s�e�j�����ư϶����쪺�I���I�����t�ΡC �C�@�Ӱ϶��]�t�F�e�@�Ӱ϶����[�K����B�����ɶ��W�O�H�Υ�����\n(2)�O�@�حp��˸m�B����B�Ʀ�����ۤ����p���t�ΡA��Ƴq�ΰߤ@���ѽX�A�è㦳�q�L�����ǿ�ƾڪ���O�A�L�ݤH�P�H�B�άO�H�P�˸m������\n");
  scanf("%d",&p);
  if(p==2)
  {
    a=a+2;
  }
  p=0;
  printf("�q���W 0 �P 1 �N����\n(1)0���u�{�v�ӻ����L�����\n(2)�]���o�O���i�쪺��{�覡\n(3)�H�q���ӻ�1�Ӫ�ܶ}�A�H0�Ӫ����\n");
    scanf("%d",&p);
  if(p==3)
  {
    a=a+2;
  }
  p=0;
  printf("�p�G�ݭn�ƦC�j�q��������ӨϥΦ�رƧǤ覡?\n(1)�w�w�Ƨ�\n(2)�ֳt�Ƨ�\n(3)�X�ֱƧ�\n(4)���J�Ƨ�\n");
  scanf("%d",&p);
  if(p==2)
  {
    a=a+2;
  }
  p=0;
  printf("HTTP �O����H\n(1)�W�奻�ǿ��w\n(2)�ɮ׶ǿ��w\n(3)²��l��ǿ��w\n(4)���ں�����T�s����w\n");
    scanf("%d",&p);
  if(p==1)
  {
    a=a+2;
  }
  p=0;
  printf("visualization����O����?\n(1)�Ȼs��\n(2)���X\n(3)�w�ľ�\n(4)��ı��\n");
     scanf("%d",&p);
  if(p==4)
  {
    a=a+2;
  }
  p=0;
  printf("����OISDN?\n(1)��X�A�ȼƦ����\n(2)�A�Ӻ���\n(3)�v����\n(4)�즡�ϰ��\n");
    scanf("%d",&p);
  if(p==1)
  {
    a=a+2;
  }
  p=0;
  printf("www�����W?\n(1)World Web Wallpaper\n(2)Wild World Website\n(3)World Wide Web\n(4)World Webtoon wide\n ");
  scanf("%d",&p);
  if(p==3)
  {
    a=a+2;
  }
  p=0;
  printf("��̬OC�y�����u�I?\n(1)�O�����y��\n(2)���\�����X�ݪ��z�a�}�A�i�H������w��i��ާ@\n(3)�@�ث��O�X�y���A�u�n�@�g�N�i�H����A�]���٥h�F�sĶ�s�����·�\n(4))�O�����y��");
  scanf("%d",&p);
  if(p==2)
  {
    a=a+2;
  }
  p=0;
  printf("RAM�PROM�������t��?\n(1)RAM�N���H���s���O����AROM�N���Ū�O����\n(2)RAM�Ω�q���AROM�Ω���\n(2)ROM����ƵL�k�x�s��RAM�i�H\n(3)ROM�O���o�ʰO�����RAM���O\n");
  scanf("%d",&p);
  if(p==1)
  {
    a=a+2;
  }
  p=0;
  printf("�����u�W�C�����g���\n(1)��\n(2)�S��\n");
  scanf("%d",&p);
  if(p==1||p==2)
  {
    printf("ok\n");
  }
  else
  {
    printf("...\n");
  }
  p=0;
  printf("��ױs����?\n(1)�뺸�F�ǻ����@�ӯ��q\n(2)�O�WCTF�N�������W\n(3)�@�Ӹ�w�ζ����W��\n(4)�@�O�W�Źq��\n");
  scanf("%d",&p);
  if(p==4)
  {
    a=a+2;
  }
  p=0;
  printf("�U�C���󨾤��𪺤��Ц�̦��~?\n(1)�̰򥻪��\��N�O�j������\n(2)����ʱ��ǤJ�M�ǥX�����y�q��������w�˸m\n(3)�O�L�n�M�ݪ��n��\n(4)�@�Ӭ[�]�b���ں����P������������w�t��\n");
  scanf("%d",&p);
  if(p==3)
  {
    a=a+2;
  }
  p=0;
  printf("����N�z���A�����u�I��̦��~?\n(1)�����s���t��\n(2)���ïu��IP\n(3)�]���s������Ӳ׺ݨëD�����s���ҥH�t�v���C\n(4)��}�����f�d\n");
  scanf("%d",&p);
  if(p==3)
  {
    a=a+2;
  }
  p=0;
  printf("����O�M�a�t��?\n(1)�H�u���z��쪺�@��\n(2)google��u�{�v�����Ť覡\n(3)�@�رƧǤ覡\n(4)�M�a�t�εL�k��ϵۥ����ѤH�����¾��\n");
  scanf("%d",&p);
  if(p==1)
  {
    a=a+2;
  }
  p=0;
  printf("����OETC?\n(1)�q�l�D�����O�t��\n(2)�q�豱��t��\n(3)�q�l���z����\n(4)�����w������\n");
  scanf("%d",&p);
  if(p==1)
  {
    a=a+2;
  }
  p=0;
  printf("����q���w�骺���j�椸��̦��~?\n(1)��J�椸(Input Unit)²��IU\n(2)��X�椸(Output Unit)²��OU\n(3)����椸(Control Unit)²��CU\n(4)�O�г椸(Memory Unit)²��MU\n(5)�B�z�椸(Process Unit)²��PU\n");
  scanf("%d",&p);
  if(p==5)
  {
    a=a+2;
  }
  p=0;
  printf("���TQC?\n(1)�q�O��q����\n(2)���~�H�~�ޯ�{��\n(3)��w���v��\n(4)�@�غt��k\n");
  scanf("%d",&p);
  if(p==2)
  {
    a=a+2;
  }
  p=0;
  printf("�����F�A�Aı�o�ڷ|�����A��?\n(1)�|(2)���|\n");
  scanf("%d",&p);
  if(a>=30)
  {
    printf("���ߧA�����F\n");
  }
  else
  {
    printf("�A���~�A�ӧa\n");
  }
  printf("�C������\n");
  }


}
