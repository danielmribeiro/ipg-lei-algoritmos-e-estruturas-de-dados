object Form1: TForm1
  Left = 23
  Top = 120
  Width = 249
  Height = 426
  HorzScrollBar.Tracking = True
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 8
    Top = 8
    Width = 75
    Height = 25
    Caption = '&Inserir'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 8
    Top = 40
    Width = 75
    Height = 25
    Caption = 'Listar'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 96
    Top = 8
    Width = 41
    Height = 21
    TabOrder = 2
    Text = '50'
  end
  object ListBox1: TListBox
    Left = 8
    Top = 72
    Width = 121
    Height = 129
    ItemHeight = 13
    TabOrder = 3
  end
  object Button3: TButton
    Left = 144
    Top = 72
    Width = 75
    Height = 25
    Caption = 'Ver'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 104
    Top = 40
    Width = 113
    Height = 25
    Caption = 'Cria arvore 1..15'
    TabOrder = 5
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 144
    Top = 8
    Width = 75
    Height = 25
    Caption = '&Eliminar'
    TabOrder = 6
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 144
    Top = 104
    Width = 75
    Height = 25
    Caption = 'livro 6.22'
    TabOrder = 7
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 144
    Top = 136
    Width = 75
    Height = 25
    Caption = 'Livro 6.22.b'
    TabOrder = 8
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 144
    Top = 168
    Width = 75
    Height = 25
    Caption = 'Exercicio'
    TabOrder = 9
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 8
    Top = 208
    Width = 75
    Height = 25
    Caption = 'Elimina '#225'rvore'
    TabOrder = 10
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 8
    Top = 240
    Width = 75
    Height = 25
    Caption = '&Pesquisa'
    TabOrder = 11
    OnClick = Button10Click
  end
  object Button11: TButton
    Left = 88
    Top = 208
    Width = 145
    Height = 25
    Caption = 'Eliminar pai(dir) filho (esq)'
    TabOrder = 12
    OnClick = Button11Click
  end
  object Button12: TButton
    Left = 88
    Top = 232
    Width = 145
    Height = 25
    Caption = 'Eliminar pai(esq) filho (esq)'
    TabOrder = 13
    OnClick = Button12Click
  end
  object Button13: TButton
    Left = 88
    Top = 256
    Width = 145
    Height = 25
    Caption = 'Eliminar pai(dir) filho (dir)'
    TabOrder = 14
    OnClick = Button13Click
  end
  object Button14: TButton
    Left = 88
    Top = 280
    Width = 145
    Height = 25
    Caption = 'Eliminar pai(esq) filho (dir)'
    TabOrder = 15
    OnClick = Button14Click
  end
  object Button15: TButton
    Left = 88
    Top = 304
    Width = 145
    Height = 25
    Caption = #193'rvore remover subti.'
    TabOrder = 16
    OnClick = Button15Click
  end
  object Button16: TButton
    Left = 88
    Top = 328
    Width = 145
    Height = 25
    Caption = 'Elimina Subtitui'#231#227'o'
    TabOrder = 17
    OnClick = Button16Click
  end
end
