// FPC�Ķ���
{$IFDEF FPC}
  {$mode delphi}
  {$DEFINE UseLowVer}
  // fcp��ʹ�ü���delphi�﷨
  {$DEFINE SupportGeneric}
  {$DEFINE SupportInline}
{$ENDIF}

// ��Unicodeģʽ��ȫ��ʹ��Ansi�汾
{$IFNDEF UNICODE}
  {$IFNDEF UseLowVer}
    {$DEFINE UseLowVer}
  {$ENDIF}
{$ENDIF}

// ����֧��
{$IFNDEF UseLowVer}
   {$IFNDEF SupportGeneric}
     {$DEFINE SupportGeneric}
   {$ENDIF}
   {$IFNDEF SupportInline}
     {$DEFINE SupportInline}
   {$ENDIF}
{$ENDIF}

// ��Delphi����FPC�ķ��ͣ���modeʹ��delphiʱ�����ܼ���Delphi�ķ���
{$IFDEF SupportGeneric}
  {$IFDEF FPC}
     {$DEFINE FPCGeneric}
  {$ELSE}
     {$DEFINE DelphiGeneric}
  {$ENDIF}
{$ENDIF}

