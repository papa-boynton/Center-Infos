[Rainmeter]

[Variables]
TitleOnChangeAction3=[!WriteKeyValue Variables PlayerTitle1 "[*MeasurePlayerWebTitle*]" "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables PlayerArtist1 "[*MeasureWebArtist*]" "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables WebNowPlayingAlbumImage "[*MeasureAlbumArt*]" "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables WebDuration ([MeasureDuration:]+1) "#@#GlobalVar\Control.inc"][!SetVariable PlayerTitle1 [*MeasurePlayerWebTitle*] "Droptop\DropdownBar"][!SetVariable PlayerArtist1 "[*MeasureWebArtist*]" "Droptop\DropdownBar"][!UpdateMeter NowPlayingSongTitle "Droptop\DropdownBar"][!UpdateMeter NowPlayingSongTitleB "Droptop\DropdownBar"][!UpdateMeter CenterInfos.Meter "Droptop\DropdownBar"][!UpdateMeter TimeCenter "Droptop\DropdownBar"][!UpdateMeter TopBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]

[MeasurePlayerWebTitle]
OnChangeAction=[!CommandMeasure RunCommand.CoverBlur "Run"][!UpdateMeasureGroup WebNowPlaying][#TitleOnChangeAction3]
