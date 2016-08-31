#include "declarations.hpp"
const char * title=
"c..            .lkkl.           .lkx,.           .:'        .;' .     .,""\n"
"k:              .,;.             .'.                                  .l""\n"
"k:              ....             ...              ....                 l""\n"
"k:     .        ....     .  .    ....    .  ..    ....                .l""\n"
"kc.   ... ..    ....    ... ..   ..'.    . .'.    .,,'                .o""\n"
"kl.   .'....  ..,',,.   ......   ',;.    ...;'   .';,,.  ..          .'o""\n"
"kl'   .',.......;;:;.....,'...   ;:c.    ..;c,....,c::....,.         .;d""\n"
"ko'   .,''.,....c:c:....;:;.'.   :cl'    ..::,....clcl,'.,:,...  ..  .:d""\n"
"kd;   ,,.',,...'ollo'',':o:.,,.. lld' ...'.;l:,,;,ldlx;;,:c:;''',l.  .ox""\n"
"kxc...;c';,''',;xodx:c:::cllo:'..dod;.'''c:cllcc::odckcc;cl:x:,,:d;..'xk""\n"
"kOl...','',;,;;;xc:dolc:::c;ccclll;:lll;;c::cllclol:cOlc:oo'do:d;o:'';OO""\n"
"k0d,;,,;;;:::cood:,';looolllodooc;.';coooolllddoc'';:clodkd.,loo,dc',;0O""\n"
"k0x;c::llcooolc:;;;colllllol:;;;clool:,;;:llclllodxdl:;;:l:.'cl,;xl;,:0O""\n"
"k0x:lclollc:;;;,:ldkkkkkxoc;:lxkkkkkkkkoc::odkkkkkkkkkxolx;.,;,''docc:0O""\n"
"k0xllllc::,';cldkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkdoxk;.;xkdlo0O""\n"
"kko:;;:;;codkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkko:;;:lox0O""\n"
"ko;';:ldxkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkxdlc:;;;l""\n"
"kkxldkkkkkkkkkkkkkkkkkkkkPress any key to play!kkkkkkkkkkkkkkkkkkkkko',x""\n";
const char * gun=
"kkkkkkkkkkkkxo,,lxkkkkkkk""\n"
"kkkkkkkkkkkd'.. ..dkkkkkk""\n"
"kkkkkkkkkko..:,.. .xkkkkk""\n"
"kkkkkkkkkd,.cc......dkkkk""\n"
"kkkkkkkkc.',o;.   ...dkkk""\n"
"kkkkkkkkx'.;;.      .kkkk""\n"
"kkkkkkxo:..,,..      lkkk""\n"
"kkkdlllll:'....   .',;clx""\n"
"kkk::cllloooc:,;:lxOko:,;""\n"
"kkc.,;:ccccllloxdooxo:'.'""\n"
"kk:.,:;:cllllllll;:c;'.lk""\n"
"kko';cloollllcc:,''.. lkk""\n"
"ol:;;:coxdl::c:;,..  'xkk""\n"
"..;:;:;;:loc;:lo;.  'kkkk""\n";
const char * enemy_50=
"kkkocdkkkkkkkdokkkkkkkkkkkkkkkkkkkkodOkkkkkkdcokkk""\n"
"kkkdclxkkkkkdlokkkkkkkkkkkkkkkkkkkkolxOkkkkxlcdkkk""\n"
"kkkkdclxkkkkocdkkkkkkkkkkkkkkkkkkkkdcokkkkxlcdOkkk""\n"
"kkkkkdccodxkl,clloddoc:;::;:coddollc,lkxdoccxkkkkk""\n"
"Okkkkko,:coxo:'.....''',::,''......':oxoc:,okkkkkk""\n"
"xdxxkkx:,,:odxxo,......'''''.....,oxxdl:,,:xkkxxdx""\n"
"kkoldxl,'.';::lo:................:ol::;'.',lxdlokk""\n"
"kkko::cc;'..'''''................'''''..';cc::okkk""\n"
"kko'...............''........''...............'okk""\n"
"kd,............''................''............,xk""\n"
"kc.......',;;,',;;.....,'.......,;,',;;'........ck""\n"
"o,......';:clc;''','.',:,.,,'.',''';clc:;,......,o""\n"
"'........,::cllccc;;,,''..'',,;;cccllc::,'.......'""\n"
"..';,.';,,.',;:lollcclol,,lolccllolc;,'.,,;.......""\n"
"........,c;''',,:lodlokxccxkoldol:;,''';c'.  .....""\n"
"....':'..',',:,,,,;cllol::lollc;,',,:,.,...':'....""\n"
"l..',,...'. .';c,''',',,,,,,',''',c;'. .'..',,...l""\n"
"x:...',;;l,   ..'l:;;.';::;'.;;:l'.....,l;;,'...:x""\n"
"kx,.','..''.... 'dl'..,',,',..'ld,..'..''......,xk""\n"
"kx'.,:c,..',',,..;l,.,l,..,l,.,l:..,,','''.....'xk""\n"
"kl'::,'''....''......','''','......''..,;,...;;'lk""\n"
"kko;;,,c;'.............'..'............'';c,,;;lkO""\n"
"kkkkkkol:'...........'......'............:lokkkkkk""\n"
"kkkkkkocolcc:'..;;',,,......,,;';;...:cclocokkkkkk""\n"
"kkkkkkkkkkkkkxc;;;....,;l:';....;;;cxkkkkkkkkkkkkk""\n"
"kkkkkkkkkkkkkkkOd:::'..oOko'.':::oOkkkkkkkkkkkkkkk""\n";

const char * enemy_40=
"kOdcxkkkkkdokkkkkkkkkkkkkkkkoxkkkkkxcdkk""\n"
"kkxcokkkkxldkkkkkkkkkkkkkkkkdokkkkkolxkk""\n"
"kkkxlcdxkd:oxkkkxdlooldxkkkxolkkxdclxkkk""\n"
"kkkkx::lod;,',;;,'';;'',;;,',lxol::xkkkk""\n"
"xdxkkd;,:oxxo,'....'''...',oxdl:,;dkkxdx""\n"
"kxoodc,.';:cl,............,lc;,'.,cdooxk""\n"
"kkl,,;;'........'......'........',;,,lkk""\n"
"xc...................................'ck""\n"
"o......',;,',;'....'.....';,';;'.......o""\n"
":......,:cl:,,,''';;,;''',,,:lc:;'.....:""\n"
"..',..'',;clol::::;,,:::::lol:,,,'......""\n"
"......':,'',:cloldkllkdlolc:;'',:'. ....""\n"
"...';..',,:,,,;:lldlldll:;,,,;.,...,'...""\n"
":..'',';. .,:,',;,,;;,,;,',:,. .;,,''..:""\n"
"d,..',,:,.   :o;'.,;;;.';o:....,:,,...,d""\n"
"k;.,:;'.',''.,o:.;l''l;.:o;.'',',.....;x""\n"
"d.,:,,'...''.....','','.....''.,;'..;,.d""\n"
"kxlc:::'........................':::clxk""\n"
"kkkkd:c;''.....','....','.....,';c:dkkkk""\n"
"kkkkkdkkkkl;;:...',;,,'...:;;dkkkkdkkkkk""\n"
"kkkkkkkkkkkkOl::'.'dd,.'::lOkkkkkkkkkkkk""\n";
const char * enemy_30=
"kkodkkkxokkkkkkkkkkkkoxkkkdokk""\n"
"kkdlxkkddkkkkkkkkkkkkddkkxldkk""\n"
"kkkocoxl:cllc;::;cllc:lxocokkk""\n"
"xxkkc,:oo:....,''...:oo:,ckkxx""\n"
"kxlc:,.',,..........,,'.,cclxk""\n"
"kl'........................'lk""\n"
"o....',,',,...'....,,',,'....o""\n"
",....':cc::;,'..',;::cc:,....,""\n"
"..'..,',:llllo::ollll:,',.....""\n"
"...'..,',;;:coccoc:;;,',..'...""\n"
"l..',;' .';,''::'',;'..';,'..l""\n"
"k,.,'''..'o;.;,,;.;o'''''...,k""\n"
"d,,,,...'.''.,'',.''.'.',..',d""\n"
"kkdoc,......'....'......,codkk""\n"
"kkkxlol:'''',,'.,,'''':lolxkkk""\n"
"kkkkkkkkxc;,',dl;',;cxkkkkkkkk""\n";
const char * enemy_20=
"kdxkkdkkkkkkkkdkkxdk""\n"
"kklddcodollodolkdlkk""\n"
"xxd;:c,..''..,c;;dxx""\n"
"d,.'............'.,d""\n"
",..'::;,''.',;:;'..,""\n"
".'.',;:collol:;,'...""\n"
":.',..,;,;;,;;..,'.:""\n"
"o','..',',,',''''.'o""\n"
"kxoc,..''..''..,coxk""\n"
"kkkkkoc,'cc',cdkkkkk""\n";
const char * enemy_10=
"xdxkxxkxdx""\n"
"d:;'..';:d""\n"
"'.;;;;;;..""\n"
":,.''',',:""\n"
"kd:,'',:dk""\n";
