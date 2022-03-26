//
// Created by Rakan on 2022/3/26.
//

#include <iostream>
#include <cstring>
#include <vector>
#include <functional>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdlib>
#include <ctime>
#include <string>
#include <map>
#include <iomanip>
#include <set>
#include <deque>
using namespace std;
#define ifor(i, a, b) for ( int i = (a); i < (b); ++i)
#define MEMS(seq, val) memset(seq, val, sizeof(seq));
const int INF = 0x3f3f3f3f;
typedef vector<int> Iv;
typedef long long LL;
typedef unsigned long long ULL;
bool ifwmpf(LL n)
{
    while(n)
    {
        if( n%10!=1 && n%10!=4 && n%10!=9 && n%10!=0 )
        {
            return 0;
        }
        n/=10;
    }
    return 1;
}
LL sheet[1001]={0,
                0,
                1,
                4,
                9,
                49,
                100,
                144,
                400,
                441,
                900,
                1444,
                4900,
                9409,
                10000,
                10404,
                11449,
                14400,
                19044,
                40000,
                40401,
                44100,
                44944,
                90000,
                144400,
                419904,
                490000,
                491401,
                904401,
                940900,
                994009,
                1000000,
                1004004,
                1014049,
                1040400,
                1100401,
                1144900,
                1440000,
                1904400,
                1940449,
                4000000,
                4004001,
                4040100,
                4410000,
                4494400,
                9000000,
                9909904,
                9941409,
                11909401,
                14010049,
                14040009,
                14440000,
                19909444,
                40411449,
                41990400,
                49000000,
                49014001,
                49140100,
                49999041,
                90440100,
                94090000,
                94109401,
                99400900,
                99940009,
                100000000,
                100040004,
                100140049,
                100400400,
                101404900,
                101949409,
                104040000,
                104919049,
                110040100,
                111049444,
                114041041,
                114490000,
                144000000,
                190440000,
                194044900,
                400000000,
                400040001,
                400400100,
                404010000,
                404090404,
                409941009,
                414000409,
                414041104,
                441000000,
                449440000,
                490091044,
                900000000,
                990990400,
                991494144,
                994140900,
                1190940100,
                1401004900,
                1404000900,
                1409101444,
                1444000000,
                1449401041,
                1490114404,
                1990944400,
                4014109449,
                4019940409,
                4041144900,
                4199040000,
                4900000000,
                4900140001,
                4901400100,
                4914010000,
                4914991449,
                4941949401,
                4999904100,
                9044010000,
                9409000000,
                9409194001,
                9410940100,
                9900449001,
                9940090000,
                9994000900,
                9999400009,
                10000000000,
                10000400004,
                10001400049,
                10004000400,
                10014004900,
                10019409409,
                10040040000,
                10100049001,
                10110101401,
                10140490000,
                10191104401,
                10194940900,
                10404000000,
                10491904900,
                10910011401,
                10949111044,
                10994990449,
                11004010000,
                11104944400,
                11191100944,
                11404104100,
                11449000000,
                14099900049,
                14400000000,
                14910119449,
                19044000000,
                19404490000,
                19490114449,
                40000000000,
                40000400001,
                40004000100,
                40040010000,
                40401000000,
                40409040400,
                40994100900,
                41011110144,
                41110401049,
                41400040900,
                41404110400,
                41409401049,
                44011004944,
                44100000000,
                44944000000,
                49009104400,
                49440411904,
                90000000000,
                90900441009,
                90901044004,
                94094949001,
                99099040000,
                99149414400,
                99414090000,
                100940914944,
                104199194401,
                104909914404,
                119094010000,
                119404111401,
                140100490000,
                140400090000,
                140910144400,
                140919904449,
                140999499001,
                141001001001,
                141111419904,
                144019491001,
                144400000000,
                144940104100,
                149001404049,
                149011440400,
                149991994944,
                199094440000,
                199944911104,
                401410944900,
                401994040900,
                404114490000,
                409911099049,
                414441100441,
                419904000000,
                490000000000,
                490001400001,
                490014000100,
                490140010000,
                491401000000,
                491499144900,
                494014991044,
                494194940100,
                499494149001,
                499990410000,
                904111919104,
                904401000000,
                940900000000,
                940901940001,
                940919400100,
                941094010000,
                941911011441,
                941944009444,
                944090119449,
                990044900100,
                994009000000,
                994010994001,
                999400090000,
                999940000900,
                999994000009,
                1000000000000,
                1000004000004,
                1000014000049,
                1000040000400,
                1000140004900,
                1000194009409,
                1000400040000,
                1001400490000,
                1001940940900,
                1001994994009,
                1004004000000,
                1004499049009,
                1010004900100,
                1011010140100,
                1014049000000,
                1014191999041,
                1019110440100,
                1019494090000,
                1040400000000,
                1041010049401,
                1041110041104,
                1049090111001,
                1049190490000,
                1091001140100,
                1094141104144,
                1094911104400,
                1099499044900,
                1100401000000,
                1110494440000,
                1119110094400,
                1119444409444,
                1140410410000,
                1140940149904,
                1144900000000,
                1144944940441,
                1194109119009,
                1409914010404,
                1409990004900,
                1440000000000,
                1491011944900,
                1491090094404,
                1494144411904,
                1904400000000,
                1911109940041,
                1940449000000,
                1949011444900,
                4000000000000,
                4000004000001,
                4000040000100,
                4000400010000,
                4004001000000,
                4004009004004,
                4011400111104,
                4014441010449,
                4040100000000,
                4040904040000,
                4099410090000,
                4101111014400,
                4111040104900,
                4140004090000,
                4140411040000,
                4140940104900,
                4401100494400,
                4410000000000,
                4410449411449,
                4490110144144,
                4494400000000,
                4900910440000,
                4944041190400,
                9000000000000,
                9090044100900,
                9090104400400,
                9149094414009,
                9409494900100,
                9449494444009,
                9491014401001,
                9909904000000,
                9914941440000,
                9941409000000,
                10094091494400,
                10114009144009,
                10141919191044,
                10190440909009,
                10191404990404,
                10411909109001,
                10419919440100,
                10490991440400,
                10494114049444,
                11004194004049,
                11199109101049,
                11909401000000,
                11940411140100,
                14010049000000,
                14040009000000,
                14091014440000,
                14091990444900,
                14099949900100,
                14100100100100,
                14111141990400,
                14401949100100,
                14440000000000,
                14494010410000,
                14900140404900,
                14901144040000,
                14991199191409,
                14999199494400,
                19144991499001,
                19909444000000,
                19994491110400,
                40141094490000,
                40199404090000,
                40411449000000,
                40944910190041,
                40991109904900,
                41041410011449,
                41444110044100,
                41990400000000,
                44909941414144,
                49000000000000,
                49000014000001,
                49000140000100,
                49001400010000,
                49014001000000,
                49014099014049,
                49041994994001,
                49140100000000,
                49149914490000,
                49401499104400,
                49419494010000,
                49949414900100,
                49999041000000,
                90411191910400,
                90440100000000,
                90441944949409,
                90940044990001,
                90941914104409,
                94090000000000,
                94090019400001,
                94090194000100,
                94091940010000,
                94109401000000,
                94119044041009,
                94191101144100,
                94194400944400,
                94409011944900,
                99004490010000,
                99099994190404,
                99400900000000,
                99400919940001,
                99401099400100,
                99900044990001,
                99940009000000,
                99994000090000,
                99999400000900,
                99999940000009,
                100000000000000,
                100000040000004,
                100000140000049,
                100000400000400,
                100001400004900,
                100001940009409,
                100004000040000,
                100014000490000,
                100019400940900,
                100019940994009,
                100040004000000,
                100100004990001,
                100140049000000,
                100194094090000,
                100194114109401,
                100199499400900,
                100400400000000,
                100449904900900,
                101000490010000,
                101041940049444,
                101101014010000,
                101149041914944,
                101404900000000,
                101419199904100,
                101901999001104,
                101911044010000,
                101914011991009,
                101919140441001,
                101949409000000,
                104040000000000,
                104044100440401,
                104101004940100,
                104111004110400,
                104909011100100,
                104919049000000,
                109100114010000,
                109414110414400,
                109491110440000,
                109949904490000,
                110040100000000,
                111049001404441,
                111049444000000,
                111444949449001,
                111911009440000,
                111944440944400,
                111994449404049,
                114041041000000,
                114094014990400,
                114490000000000,
                114490449400441,
                114494494044100,
                119009400994449,
                119410911900900,
                140991401040400,
                140999000490000,
                141910944119044,
                144000000000000,
                144900491401444,
                149101194490000,
                149104149494041,
                149109009440400,
                149414001144004,
                149414441190400,
                149940049490001,
                190110901901041,
                190440000000000,
                191110994004100,
                194014199494404,
                194044900000000,
                194901144490000,
                400000000000000,
                400000040000001,
                400000400000100,
                400004000010000,
                400040001000000,
                400400100000000,
                400400900400400,
                401000144400144,
                401140011110400,
                401444101044900,
                404010000000000,
                404014100410404,
                404090404000000,
                404901001111104,
                409901001904144,
                409941009000000,
                409941049494001,
                410111101440000,
                411009004049449,
                411104010490000,
                414000409000000,
                414041104000000,
                414094010490000,
                419041411191001,
                419190900119104,
                440110049440000,
                441000000000000,
                441004494011449,
                441044941144900,
                444999910990441,
                449011014414400,
                449440000000000,
                490091044000000,
                490400094910441,
                494404119040000,
                499404141411904,
                900000000000000,
                900900044910009,
                900900104940004,
                901494499910404,
                901499904400144,
                904144941414009,
                909004410090000,
                909010440040000,
                909414914441049,
                910944190149904,
                914909441400900,
                940499911040041,
                940949490010000,
                944109014491449,
                944949444400900,
                949101440100100,
                990990400000000,
                991494144000000,
                991941449990404,
                994140900000000,
                994499049991041,
                1001199014109441,
                1009409149440000,
                1011400914400900,
                1014191919104400,
                1019044090900900,
                1019140499040400,
                1040940014014404,
                1041190910900100,
                1041991944010000,
                1049099144040000,
                1049411404944400,
                1091490414194944,
                1100100104411049,
                1100419400404900,
                1101114010909444,
                1101909419190441,
                1109194449494041,
                1110049009490404,
                1119910910104900,
                1141111911001104,
                1190940100000000,
                1194041114010000,
                1400911101990009,
                1401004900000000,
                1404000900000000,
                1404011991141904,
                1409101444000000,
                1409199044490000,
                1409994990010000,
                1410010010010000,
                1411114199040000,
                1440194910010000,
                1444000000000000,
                1449199119449104,
                1449401041000000,
                1490014040490000,
                1490114404000000,
                1499119919140900,
                1499919949440000,
                1914499149900100,
                1944400949911044,
                1990141499444004,
                1990944400000000,
                1991949101400049,
                1994019994111401,
                1999109111114404,
                1999449111040000,
                4014109449000000,
                4019940409000000,
                4040909440149904,
                4041144900000000,
                4094491019004100,
                4099110990490000,
                4104141001144900,
                4140401410094401,
                4144411004410000,
                4190491144404009,
                4199040000000000,
                4490994141414400,
                4900000000000000,
                4900000140000001,
                4900001400000100,
                4900014000010000,
                4900140001000000,
                4901400100000000,
                4901409901404900,
                4904199499400100,
                4909044109414041,
                4911101140404001,
                4914010000000000,
                4914991449000000,
                4940149910440000,
                4941949401000000,
                4991441999419044,
                4994941490010000,
                4999904100000000,
                9001041911140041,
                9009019910044449,
                9010901999944441,
                9041119191040000,
                9044010000000000,
                9044104910049001,
                9044194494940900,
                9049909444144144,
                9094004499000100,
                9094191410440900,
                9104949109900449,
                9141411499911441,
                9191919941999001,
                9404001090144441,
                9409000000000000,
                9409000194000001,
                9409001940000100,
                9409019400010000,
                9409194001000000,
                9410940100000000,
                9411904404100900,
                9419110114410000,
                9419440094440000,
                9440901194490000,
                9900449001000000,
                9909999419040400,
                9911090904109444,
                9940090000000000,
                9940090199400001,
                9940091994000100,
                9940109940010000,
                9944009194440409,
                9990004499000100,
                9994000900000000,
                9994001099940001,
                9999400009000000,
                9999940000090000,
                9999994000000900,
                9999999400000009,
                10000000000000000,
                10000000400000004,
                10000001400000049,
                10000004000000400,
                10000014000004900,
                10000019400009409,
                10000040000040000,
                10000140000490000,
                10000194000940900,
                10000199400994009,
                10000400004000000,
                10001400049000000,
                10001940094090000,
                10001994099400900,
                10001999499940009,
                10004000400000000,
                10010000499000100,
                10014004900000000,
                10019409409000000,
                10019411410940100,
                10019910100449001,
                10019949940090000,
                10040040000000000,
                10040441004404001,
                10044910110041401,
                10044990490090000,
                10100049001000000,
                10100109099491401,
                10104194004944400,
                10110101401000000,
                10114904191494400,
                10140490000000000,
                10141919990410000,
                10190199900110400,
                10191104401000000,
                10191401199100900,
                10191914044100100,
                10194940900000000,
                10194941101940001,
                10404000000000000,
                10404041004040401,
                10404194004904401,
                10404410044040100,
                10409049000414009,
                10410100494010000,
                10411100411040000,
                10414090449401401,
                10490901110010000,
                10491904900000000,
                10910011401000000,
                10919104919019441,
                10941411041440000,
                10949111044000000,
                10994990449000000,
                10999919490011001,
                11004010000000000,
                11010410040111001,
                11011090419990049,
                11019100419441409,
                11041100904149449,
                11041949099101041,
                11104900140444100,
                11104944400000000,
                11114904409999009,
                11144494944900100,
                11144919119111001,
                11191040010194944,
                11191100944000000,
                11194444094440000,
                11199110104919104,
                11199444940404900,
                11401190414191449,
                11404104100000000,
                11409401499040000,
                11449000000000000,
                11449004494000441,
                11449044940044100,
                11449449404410000,
                11900104910110404,
                11900940099444900,
                11941091190090000,
                11944199400409441,
                14099140104040000,
                14099900049000000,
                14191094411904400,
                14194900040091904,
                14194911001190404,
                14400000000000000,
                14409404494994041,
                14444410909119409,
                14490049140144400,
                14909044194144409,
                14910119449000000,
                14910414949404100,
                14910900944040000,
                14941400114400400,
                14941444119040000,
                14994004949000100,
                19011090190104100,
                19044000000000000,
                19049104409991049,
                19100111499141409,
                19111099400410000,
                19140011110910041,
                19401419949440400,
                19404490000000000,
                19409991904144009,
                19414900449119044,
                19490114449000000,
                40000000000000000,
                40000000400000001,
                40000004000000100,
                40000040000010000,
                40000400001000000,
                40004000100000000,
                40004000900040004,
                40014140049410409,
                40040010000000000,
                40040090040040000,
                40040411001404004,
                40100014440014400,
                40114001111040000,
                40144410104490000,
                40191914444140944,
                40401000000000000,
                40401041004010404,
                40401410041040400,
                40409040400000000,
                40409099901941904,
                40449400011011044,
                40490100111110400,
                40490940014090449,
                40494119409491049,
                40990100190414400,
                40994100900000000,
                40994104949400100,
                41010400140001009,
                41011110144000000,
                41014490949000409,
                41091149904049441,
                41100900404944900,
                41110401049000000,
                41400040900000000,
                41404110400000000,
                41409401049000000,
                41904141119100100,
                41919090011910400,
                44011004944000000,
                44049404100491001,
                44049404940009001,
                44099414941940449,
                44100000000000000,
                44100044940011449,
                44100449401144900,
                44104494114490000,
                44491000011494404,
                44499991099044100,
                44901101441440000,
                44940909941114944,
                44944000000000000,
                49009104400000000,
                49040009491044100,
                49041994144141441,
                49440411904000000,
                49940414141190400,
                90000000000000000,
                90090004491000900,
                90090010494000400,
                90111011410941444,
                90114994909410409,
                90149449991040400,
                90149990440014400,
                90401100099411049,
                90414494141400900,
                90444401440419049,
                90900441009000000,
                90901044004000000,
                90911114919119401,
                90941491444104900,
                91040419010444401,
                91094419014990400,
                91444401019449009,
                91490944140090000,
                91909009949040144,
                91919114109449104,
                91990144490110441,
                94000941041041441,
                94014911901094144,
                94049991104004100,
                94094949001000000,
                94410901449144900,
                94444444090149904,
                94494944440090000,
                94910144010010000,
                99000419449909041,
                99099040000000000,
                99149414400000000,
                99194144999040400,
                99414090000000000,
                99449904999104100,
                100004441141404944,
                100119901410944100,
                100490999011941409,
                100940914944000000,
                101140091440090000,
                101419191910440000,
                101904409090090000,
                101914049904040000,
                104094001401440400,
                104119091090010000,
                104199194401000000,
                104909914404000000,
                104941140494440000,
                104941919910444409,
                109041944904140004,
                109149041419494400,
                110010010441104900,
                110041940040490000,
                110111401090944400,
                110144094119011044,
                110190941919044100,
                110919444949404100,
                110991419140140009,
                111004900949040400,
                111101990409401104,
                111191001911109904,
                111991091010490000,
                114111191100110400,
                114419991994419049,
                114441141001999009,
                114449909009109444,
                119010019191410944,
                119041490191114404,
                119091940099194001,
                119094010000000000,
                119404040909014404,
                119404111401000000,
                119404941411140401,
                119441949940440009,
                119990041944140944,
                140091110199000900,
                140100490000000000,
                140400090000000000,
                140401011014110441,
                140401199114190400,
                140910144400000000,
                140919904449000000,
                140999499001000000,
                141000099049040401,
                141001001001000000,
                141111419904000000,
                141114911949411904,
                144019491001000000,
                144400000000000000,
                144919911944910400,
                144940104100000000,
                149001404049000000,
                149011440400000000,
                149104094194040049,
                149190011904010441,
                149490119199109441,
                149911991914090000,
                149991994944000000,
                190101099490199104,
                190944444011441409,
                190994904490411044,
                191014011904044004,
                191194910994110409,
                191449914990010000,
                194141119104441441,
                194149949119001001,
                194440094991104400,
                194490904104090441,
                199014149944400400,
                199094440000000000,
                199194910140004900,
                199401999411140100,
                199499144494999441,
                199910911111440400,
                199944911104000000,
                400414414944191041,
                400449444049941001,
                400949900490190401,
                401049900090990049,
                401410944900000000,
                401994040900000000,
                404090944014990400,
                404114490000000000,
                404491411909010449,
                404901040001449104,
                409094999910990409,
                409449101900410000,
                409911099049000000,
                410009444991400401,
                410400119000044944,
                410414100114490000,
                410944114001494441,
                411909149999014144,
                411990009401941441,
                414040141009440100,
                414441100441000000,
                414491440999149409,
                414949190101919001,
                419049114440400900,
                419400009911444004,
                419419944910190449,
                419904000000000000,
                441094940900444944,
                441999119041400449,
                444949004009110441,
                449099414141440000,
                449190441044090944,
                490000000000000000,
                490000001400000001,
                490000014000000100,
                490000140000010000,
                490001400001000000,
                490014000100000000,
                490014009900140049,
                490041999499940001,
                490140010000000000,
                490140990140490000,
                490419949940010000,
                490904410941404100,
                491110114040400100,
                491149091490449401,
                491401000000000000,
                491499144900000000,
                494014991044000000,
                494194940100000000,
                499144199941904400,
                499199194111009401,
                499494149001000000,
                499499940119091409,
                499990410000000000,
                900094440009091041,
                900100001490944004,
                900104191114004100,
                900901991004444900,
                901090199994444100,
                904111919104000000,
                904401000000000000,
                904401194004010404,
                904410491004900100,
                904414449091999041,
                904419449494090000,
                904990944414414400,
                909400449900010000,
                909419141044090000,
                910494910990044900,
                914141149991144100,
                919191994199900100,
                940400109014444100,
                940900000000000000,
                940900001940000001,
                940900019400000100,
                940900194000010000,
                940901940001000000,
                940919400100000000,
                940991449941991044,
                940999140491414404,
                941094010000000000,
                941190440410090000,
                941911011441000000,
                941944009444000000,
                944090119449000000,
                949094190119910409,
                990044900100000000,
                990999941904040000,
                991109090410944400,
                994009000000000000,
                994009001994000001,
                994009019940000100,
                994009199400010000,
                994010994001000000,
                994400919444040900,
                999000449900010000,
                999014101119011041,
                999099104994401401,
                999190449909190449,};

int main()
{
    int n=1;
    LL temp;
    for(LL i=0;n<1001;i++)
    {
        temp=i*i;
        if (ifwmpf(temp))
        {
            sheet[n] = temp;
            n++;
            cout<<temp<<","<<endl;
        }
    }

    return 0;
}
