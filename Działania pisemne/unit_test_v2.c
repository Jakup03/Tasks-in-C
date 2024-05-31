/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Naprawdę duże liczby II
 * Autor testowanej odpowiedzi: Jakub Sońta
 * Test wygenerowano automatycznie o 2022-04-26 12:38:33.364147
 *
 * Debug: 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <signal.h>
#include <setjmp.h>
#include <assert.h>

#if !defined(__clang__) && !defined(__GNUC__)
// Zakomentuj poniższy błąd, jeżeli chcesz przetestować testy na swoim kompilatorze C.
#error System testow jednostkowych jest przeznaczony dla kompilatorów GCC/Clang.
#endif

#if defined(_WIN32) || defined(_WIN64) || defined(__CYGWIN__)
// Zakomentuj poniższy błąd, jeżeli chcesz przetestować testy na platformie Windows.
#error System testow jednostkowych NIE jest przeznaczony dla testów uruchamianych na platformach Windows.
#endif

#define _RLDEBUG_API_
#include "unit_helper_v2.h"
#include "rdebug.h"

#include "tested_declarations.h"
#include "rdebug.h"

//
// Elementy globalne dla całego testu
//




//
//  Test 1: Sprawdzanie poprawności działania funkcji validate
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji validate
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("\n");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji validate
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("0");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji validate
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("5");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji validate
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("-4");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji validate
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("1547");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji validate
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("-3661");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji validate
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("3552864");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji validate
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("5225432");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji validate
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("8004007103290223208223148900788184656398293428909393488519659265385799125035253390337286579557057053076416748239241509401056337235326817297888224800778480646794785115695555652486840617738068933296643248379140228406450893925052105208534989470020985227053666909180893761172614483374378595342864204132436924193846775924177186320547670483414915522780829552235153826357861239898297699857086927548743977647980128284474430721424477332247386355393964467454115805733048336244803843458108308915786433517865509001293604407554385782546293107288236563178143316123766471120253089538509450009022314560014245842718423844221604778765434397608896691583795388750966307700511275552314093281268327104474137400443749539349448488719679261898185685536660227967073918563388808744034233102141425054156789517802121537622665698289360385310068732251239188960018728332831622559651912663722256509589103164903314259621352299201185465933652099633474878014990273698425474858554636967832206140580650875700521757276690522128107489012797079469988342319374310136339942498129659075979859735587563870720713412460826771519414069368472762712351214516255303308441197834087058806938533125169429925988778596090886963422057109564974201595982968015069636560580939718460942413133936708911227644577727869318345911403713250759743828771803948554404631463714626630911704801779902561205820018451650211877287978654868497554303558154257192413283423392687659076656670883546526710960466610327268356596903329309271101260655353909085742418782740800049434669538808630825979909043258552617917290488475406884914995013456371516310797416143506204651343");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji validate
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("48290039028491692804980087150310124349194978130696543496062509503742278274959536037487804810818107924448802625633119850795420429418021480167981303021178240650263646896855884222862149484617156139351363071329219121099048938954470950091507926588998724840804986434766513338978064135089030958556671249880959775786994703698674714023016461620542919177890687315453307212193372308314663197798547074383621510334460412439911044445857696348109535865954402306852127490672717782980374100546050232338005375563210769628389998317576899375556913458376359840228049759626680217467274439913191440079390901185254203366337830344687460370239059122902169795811081427041864736470467158772200048203026239101877077102381780846950525344356399569404467811611393383704419295798487618309148654707017829847105229134757813044408285195214504481082671921096501601593394024704070031946989382444086552442371755009069382262502070331663184946025902120075384097949024800227843462716247022311203902449604667023995877222469455694557700237098859411706803206025317342574089020449327524110014801086145965054872933284850965663692521200824332309964805603747423306087316289726228186358635903067524188800883347693269551209653155326802045845420082128808357983527018098243323502503741203971769327054711078827359800922295951229440112277398994844167883160026482561548084199131761827368960551700083109948190023241357308580462477092193505469732033982935214167222383908949067362530645772434673189375116435622497921826515044634393850105933497360767285450579317885414086270311845750854187459300752210697317584432554931376065617384772592964224053175438002373074404703721444031788324585949380595824936979951290302423240223550333212143000863205984300663857492394994706866387356123149398843409338673165480406396111904777204014295531007440206040787103784869964009221224555937188748025651737633493487829821193464588893269944918500339499976075427412166264981849242674296625962405061955116352385856899701019054472799147475986814078259293851299759644661889120670699606601463587790874337976008406500287385910100524716832688108695620390451506270942828051287345185433527065545455325259282774290450075452969277886283940895710541372611319863261394013523053057339705249239855269233610394159899734278532928081619909598092501481690292955810079864733814417024388580341175675415286511556676588834056024653730747656551292693043472053584549857257299645853124541479817179800688481901265159522340388101017446086028013551549853789740961587630259031665545302998572366030323976260134775265686712788019302552528502867065663105299168346487826706926156857908179683025139473696513638548346290615495269247971108549792801000579005366378891195638602360933833317567633870690053607801607240612451201726561094257823746002827223013031735490848503781802219690619621873581928519209055550333711048699036216422045644236355534126343412731786599596233568883085606365211613528708957015403756001410644072037545445735825555606027787390411309581205293237995182881989479381765892068750410640857347977408888542256093168463447582284127633676348383713647020844577260677707453969368234656769430790278042597003217768430278379985008531296285102344245386984205831304922439668386060768641967041652715685522551906440883812656055015015372129874455876442300929365837215181405080057649144734250755402283043865753056068577421108504220968357582337544223300985614935876438931072673689127498465475450709262671195653529622004163867044986777126\n");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji validate
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("32965765395920174114752143085001452454434084603407124378400347501473973556285258601492112859137854177411289554048368948720863142822075874438728549810091176167458717317959692896564679450795403539351244704728183254087255785874449337712685977091188567408786957046694942177936958642306056787363008890097008828380211125183308466493061295648776078339533711998362840292626357409143473730415174463002137253482504764876019728317282958764776794801549649149798630387881634043960097428614512220717991468646643058492489727469296768759776327760387971949842442543182707418843932744679530522599937685295460372265873508843394007509483960762336508791411927099063326092991922175668173606741902456829832927898396158810545026305257307117771735703934797809849952331324524819917425077911348932318330712188743065598148749993846751436988554894620434274048130732465583363809873733339807244793455045614914061510726910289910355181018222022552140303353189230087136881218781556460370403851370019190796695455820235708518874870814677133958314222304641873204304405077978382143594977141485183857591730921201727999156044377922622304387594635806697152636429617685979892252754848446438922571152442727496548703054075582938943798175378828303227521510505516889402847573880654164040334408615730647825325919726512414139128492243738349088996629299552125635259038088422067812718127655151095544274385448630761135014218211055889354947432334530807183890818451236398194726797396974157799621208483627979379894279271676455665822685550650898747379191048226007949658790343067404891930281339198667526959869856099098466497453134860098511976821794782740889480802174153293615326929057212663619850667120503304026606146363465135394800028091185408127186595640757686403043366130853824577948803760927306462885543439359248539075541403800035568482441774495331362882804550917649657239745180609990170005558410136697482350608192446333558247114722564169973609045468235238210195732046208097980863721546444114835541539010484552064622197031410892284477927512833045525687564314706027208574394084288143834603479275095851668928366182715812295591836773124976490390960055563064729997261614178800745586611740675116822643533013394243041154444098539982282204742868759502282644713053373387049184480363897372350137394861448143201280003213143199227848111477712478022789554751137469362557275712579192580816331631510076193601682689837066157032929924411551572340238717554415960799649711");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji validate
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("000000006402812039097599183963591266949");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji validate
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("002");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji validate
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("09");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji validate
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("044343110610788325378637");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji validate
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("8569521578305\n");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji validate
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("959004666326378\n2801007853313527075388");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji validate
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("875648960M74239234750681032239358552228212291016");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji validate
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("4i569716899072195624268979647566821674");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji validate
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("102076988248630151437494373 513264593336461391695");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji validate
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int len = validate(NULL);
            printf("#####END#####\n");
            test_error( len == -1, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość -1, a zwróciła %d", len);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji validate
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 1;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji validate
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 2;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji validate
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 3;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji validate
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 4;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji validate
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 5;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji validate
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 6;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji validate
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 7;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji validate
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 8;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji validate
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 10;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji validate
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 11;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji validate
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 12;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji validate
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 13;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji validate
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 14;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji validate
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 15;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania funkcji validate
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 16;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania funkcji validate
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 17;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania funkcji validate
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 18;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie poprawności działania funkcji validate
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 19;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie poprawności działania funkcji validate
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 20;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzanie poprawności działania funkcji validate
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 21;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie poprawności działania funkcji validate
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 22;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 44: Sprawdzanie poprawności działania funkcji validate
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 23;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 45: Sprawdzanie poprawności działania funkcji validate
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 24;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 46: Sprawdzanie poprawności działania funkcji validate
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 25;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 47: Sprawdzanie poprawności działania funkcji validate
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 26;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 48: Sprawdzanie poprawności działania funkcji validate
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 27;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 49: Sprawdzanie poprawności działania funkcji validate
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 28;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 50: Sprawdzanie poprawności działania funkcji validate
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 29;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 51: Sprawdzanie poprawności działania funkcji validate
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 30;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 52: Sprawdzanie poprawności działania funkcji validate
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 31;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 53: Sprawdzanie poprawności działania funkcji validate
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 32;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 54: Sprawdzanie poprawności działania funkcji validate
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 33;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 55: Sprawdzanie poprawności działania funkcji validate
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 34;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 56: Sprawdzanie poprawności działania funkcji validate
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 35;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 57: Sprawdzanie poprawności działania funkcji validate
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 36;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 58: Sprawdzanie poprawności działania funkcji validate
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 37;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 59: Sprawdzanie poprawności działania funkcji validate
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 38;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 60: Sprawdzanie poprawności działania funkcji validate
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 39;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 61: Sprawdzanie poprawności działania funkcji validate
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 40;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 62: Sprawdzanie poprawności działania funkcji validate
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 41;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 63: Sprawdzanie poprawności działania funkcji validate
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 42;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 64: Sprawdzanie poprawności działania funkcji validate
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 43;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 65: Sprawdzanie poprawności działania funkcji validate
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 44;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 66: Sprawdzanie poprawności działania funkcji validate
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 45;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 67: Sprawdzanie poprawności działania funkcji validate
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 46;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 68: Sprawdzanie poprawności działania funkcji validate
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 47;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 69: Sprawdzanie poprawności działania funkcji validate
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 58;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 70: Sprawdzanie poprawności działania funkcji validate
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 59;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 71: Sprawdzanie poprawności działania funkcji validate
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 60;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 72: Sprawdzanie poprawności działania funkcji validate
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 61;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 73: Sprawdzanie poprawności działania funkcji validate
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 62;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 74: Sprawdzanie poprawności działania funkcji validate
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 63;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 75: Sprawdzanie poprawności działania funkcji validate
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 64;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 76: Sprawdzanie poprawności działania funkcji validate
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 65;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 77: Sprawdzanie poprawności działania funkcji validate
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 66;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 78: Sprawdzanie poprawności działania funkcji validate
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 67;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 79: Sprawdzanie poprawności działania funkcji validate
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 68;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 80: Sprawdzanie poprawności działania funkcji validate
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 69;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 81: Sprawdzanie poprawności działania funkcji validate
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 70;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 82: Sprawdzanie poprawności działania funkcji validate
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 71;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 83: Sprawdzanie poprawności działania funkcji validate
//
void UTEST83(void)
{
    // informacje o teście
    test_start(83, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 72;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 84: Sprawdzanie poprawności działania funkcji validate
//
void UTEST84(void)
{
    // informacje o teście
    test_start(84, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 73;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 85: Sprawdzanie poprawności działania funkcji validate
//
void UTEST85(void)
{
    // informacje o teście
    test_start(85, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 74;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 86: Sprawdzanie poprawności działania funkcji validate
//
void UTEST86(void)
{
    // informacje o teście
    test_start(86, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 75;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 87: Sprawdzanie poprawności działania funkcji validate
//
void UTEST87(void)
{
    // informacje o teście
    test_start(87, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 76;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 88: Sprawdzanie poprawności działania funkcji validate
//
void UTEST88(void)
{
    // informacje o teście
    test_start(88, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 77;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 89: Sprawdzanie poprawności działania funkcji validate
//
void UTEST89(void)
{
    // informacje o teście
    test_start(89, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 78;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 90: Sprawdzanie poprawności działania funkcji validate
//
void UTEST90(void)
{
    // informacje o teście
    test_start(90, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 79;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 91: Sprawdzanie poprawności działania funkcji validate
//
void UTEST91(void)
{
    // informacje o teście
    test_start(91, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 80;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 92: Sprawdzanie poprawności działania funkcji validate
//
void UTEST92(void)
{
    // informacje o teście
    test_start(92, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 81;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 93: Sprawdzanie poprawności działania funkcji validate
//
void UTEST93(void)
{
    // informacje o teście
    test_start(93, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 82;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 94: Sprawdzanie poprawności działania funkcji validate
//
void UTEST94(void)
{
    // informacje o teście
    test_start(94, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 83;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 95: Sprawdzanie poprawności działania funkcji validate
//
void UTEST95(void)
{
    // informacje o teście
    test_start(95, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 84;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 96: Sprawdzanie poprawności działania funkcji validate
//
void UTEST96(void)
{
    // informacje o teście
    test_start(96, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 85;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 97: Sprawdzanie poprawności działania funkcji validate
//
void UTEST97(void)
{
    // informacje o teście
    test_start(97, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 86;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 98: Sprawdzanie poprawności działania funkcji validate
//
void UTEST98(void)
{
    // informacje o teście
    test_start(98, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 87;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 99: Sprawdzanie poprawności działania funkcji validate
//
void UTEST99(void)
{
    // informacje o teście
    test_start(99, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 88;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 100: Sprawdzanie poprawności działania funkcji validate
//
void UTEST100(void)
{
    // informacje o teście
    test_start(100, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 89;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 101: Sprawdzanie poprawności działania funkcji validate
//
void UTEST101(void)
{
    // informacje o teście
    test_start(101, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 90;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 102: Sprawdzanie poprawności działania funkcji validate
//
void UTEST102(void)
{
    // informacje o teście
    test_start(102, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 91;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 103: Sprawdzanie poprawności działania funkcji validate
//
void UTEST103(void)
{
    // informacje o teście
    test_start(103, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 92;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 104: Sprawdzanie poprawności działania funkcji validate
//
void UTEST104(void)
{
    // informacje o teście
    test_start(104, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 93;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 105: Sprawdzanie poprawności działania funkcji validate
//
void UTEST105(void)
{
    // informacje o teście
    test_start(105, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 94;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 106: Sprawdzanie poprawności działania funkcji validate
//
void UTEST106(void)
{
    // informacje o teście
    test_start(106, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 95;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 107: Sprawdzanie poprawności działania funkcji validate
//
void UTEST107(void)
{
    // informacje o teście
    test_start(107, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 96;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 108: Sprawdzanie poprawności działania funkcji validate
//
void UTEST108(void)
{
    // informacje o teście
    test_start(108, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 97;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 109: Sprawdzanie poprawności działania funkcji validate
//
void UTEST109(void)
{
    // informacje o teście
    test_start(109, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 98;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 110: Sprawdzanie poprawności działania funkcji validate
//
void UTEST110(void)
{
    // informacje o teście
    test_start(110, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 99;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 111: Sprawdzanie poprawności działania funkcji validate
//
void UTEST111(void)
{
    // informacje o teście
    test_start(111, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 100;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 112: Sprawdzanie poprawności działania funkcji validate
//
void UTEST112(void)
{
    // informacje o teście
    test_start(112, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 101;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 113: Sprawdzanie poprawności działania funkcji validate
//
void UTEST113(void)
{
    // informacje o teście
    test_start(113, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 102;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 114: Sprawdzanie poprawności działania funkcji validate
//
void UTEST114(void)
{
    // informacje o teście
    test_start(114, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 103;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 115: Sprawdzanie poprawności działania funkcji validate
//
void UTEST115(void)
{
    // informacje o teście
    test_start(115, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 104;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 116: Sprawdzanie poprawności działania funkcji validate
//
void UTEST116(void)
{
    // informacje o teście
    test_start(116, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 105;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 117: Sprawdzanie poprawności działania funkcji validate
//
void UTEST117(void)
{
    // informacje o teście
    test_start(117, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 106;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 118: Sprawdzanie poprawności działania funkcji validate
//
void UTEST118(void)
{
    // informacje o teście
    test_start(118, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 107;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 119: Sprawdzanie poprawności działania funkcji validate
//
void UTEST119(void)
{
    // informacje o teście
    test_start(119, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 108;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 120: Sprawdzanie poprawności działania funkcji validate
//
void UTEST120(void)
{
    // informacje o teście
    test_start(120, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 109;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 121: Sprawdzanie poprawności działania funkcji validate
//
void UTEST121(void)
{
    // informacje o teście
    test_start(121, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 110;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 122: Sprawdzanie poprawności działania funkcji validate
//
void UTEST122(void)
{
    // informacje o teście
    test_start(122, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 111;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 123: Sprawdzanie poprawności działania funkcji validate
//
void UTEST123(void)
{
    // informacje o teście
    test_start(123, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 112;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 124: Sprawdzanie poprawności działania funkcji validate
//
void UTEST124(void)
{
    // informacje o teście
    test_start(124, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 113;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 125: Sprawdzanie poprawności działania funkcji validate
//
void UTEST125(void)
{
    // informacje o teście
    test_start(125, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 114;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 126: Sprawdzanie poprawności działania funkcji validate
//
void UTEST126(void)
{
    // informacje o teście
    test_start(126, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 115;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 127: Sprawdzanie poprawności działania funkcji validate
//
void UTEST127(void)
{
    // informacje o teście
    test_start(127, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 116;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 128: Sprawdzanie poprawności działania funkcji validate
//
void UTEST128(void)
{
    // informacje o teście
    test_start(128, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 117;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 129: Sprawdzanie poprawności działania funkcji validate
//
void UTEST129(void)
{
    // informacje o teście
    test_start(129, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 118;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 130: Sprawdzanie poprawności działania funkcji validate
//
void UTEST130(void)
{
    // informacje o teście
    test_start(130, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 119;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 131: Sprawdzanie poprawności działania funkcji validate
//
void UTEST131(void)
{
    // informacje o teście
    test_start(131, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 120;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 132: Sprawdzanie poprawności działania funkcji validate
//
void UTEST132(void)
{
    // informacje o teście
    test_start(132, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 121;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 133: Sprawdzanie poprawności działania funkcji validate
//
void UTEST133(void)
{
    // informacje o teście
    test_start(133, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 122;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 134: Sprawdzanie poprawności działania funkcji validate
//
void UTEST134(void)
{
    // informacje o teście
    test_start(134, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 123;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 135: Sprawdzanie poprawności działania funkcji validate
//
void UTEST135(void)
{
    // informacje o teście
    test_start(135, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 124;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 136: Sprawdzanie poprawności działania funkcji validate
//
void UTEST136(void)
{
    // informacje o teście
    test_start(136, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 125;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 137: Sprawdzanie poprawności działania funkcji validate
//
void UTEST137(void)
{
    // informacje o teście
    test_start(137, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 126;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 138: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
//
void UTEST138(void)
{
    // informacje o teście
    test_start(138, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "305";        
                printf("#####START#####");
                int err_code = add("129", "176", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 139: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
//
void UTEST139(void)
{
    // informacje o teście
    test_start(139, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-47";        
                printf("#####START#####");
                int err_code = add("129", "-176", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 140: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
//
void UTEST140(void)
{
    // informacje o teście
    test_start(140, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = add("129", "-129", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 141: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
//
void UTEST141(void)
{
    // informacje o teście
    test_start(141, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "47";        
                printf("#####START#####");
                int err_code = add("176", "-129", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 142: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
//
void UTEST142(void)
{
    // informacje o teście
    test_start(142, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-305";        
                printf("#####START#####");
                int err_code = add("-129", "-176", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 143: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
//
void UTEST143(void)
{
    // informacje o teście
    test_start(143, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "47";        
                printf("#####START#####");
                int err_code = add("-129", "176", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 144: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
//
void UTEST144(void)
{
    // informacje o teście
    test_start(144, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1606";        
                printf("#####START#####");
                int err_code = add("882", "724", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 145: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
//
void UTEST145(void)
{
    // informacje o teście
    test_start(145, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-1606";        
                printf("#####START#####");
                int err_code = add("-882", "-724", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 146: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 376 bajtów
//
void UTEST146(void)
{
    // informacje o teście
    test_start(146, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 376 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(376);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "7692216228231745072084207225941694315545196441202727920884760170773523982481954924888841925737603098569272000396167877687644744347536779979666288287397408354882209806314625235951974531417645228600227639531599035120244487876424969494495792144742802157765179642819611723046237600711939508947447936644738610256356059611889074547656792555557801243036786739293683747597246436494";        
                printf("#####START#####");
                int err_code = add("3304231208786636306173155336949930677974518283354777362963967208412306696253618735134968510390357510378164553772039047923688442408241488900441621503715039838318157718647878707797236766378800759195165358129046157546978268190999982808466030536479702567690483170497888647794693457358301668812616239774293377158755007272598145333572963673494697478652359238379191442927760610642", "4387985019445108765911051888991763637570678157847950557920792962361217286228336189753873415347245588191107446624128829763956301939295291079224666783682368516564052087666746528154737765038844469405062281402552877573266219685424986686029761608263099590074696472321723075251544143353637840134831696870445233097601052339290929214083828882063103764384427500914492304669485825852", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 147: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 377 bajtów
//
void UTEST147(void)
{
    // informacje o teście
    test_start(147, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 377 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(377);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = add("3304231208786636306173155336949930677974518283354777362963967208412306696253618735134968510390357510378164553772039047923688442408241488900441621503715039838318157718647878707797236766378800759195165358129046157546978268190999982808466030536479702567690483170497888647794693457358301668812616239774293377158755007272598145333572963673494697478652359238379191442927760610642", "-3304231208786636306173155336949930677974518283354777362963967208412306696253618735134968510390357510378164553772039047923688442408241488900441621503715039838318157718647878707797236766378800759195165358129046157546978268190999982808466030536479702567690483170497888647794693457358301668812616239774293377158755007272598145333572963673494697478652359238379191442927760610642", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 148: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 377 bajtów
//
void UTEST148(void)
{
    // informacje o teście
    test_start(148, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 377 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(377);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1083753810658472459737896552041832959596159874493173194956825753948910589974717454618904904956888077812942892852089781840267859531053802178783045279967328678245894369018867820357500998660043710209896923273506720026287951494425003877563731071783397022384213301823834427456850685995336171322215457096151855938846045066692783880510865208568406285732068262535300861741725215210";        
                printf("#####START#####");
                int err_code = add("-3304231208786636306173155336949930677974518283354777362963967208412306696253618735134968510390357510378164553772039047923688442408241488900441621503715039838318157718647878707797236766378800759195165358129046157546978268190999982808466030536479702567690483170497888647794693457358301668812616239774293377158755007272598145333572963673494697478652359238379191442927760610642", "4387985019445108765911051888991763637570678157847950557920792962361217286228336189753873415347245588191107446624128829763956301939295291079224666783682368516564052087666746528154737765038844469405062281402552877573266219685424986686029761608263099590074696472321723075251544143353637840134831696870445233097601052339290929214083828882063103764384427500914492304669485825852", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 149: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 377 bajtów
//
void UTEST149(void)
{
    // informacje o teście
    test_start(149, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 377 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(377);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-7692216228231745072084207225941694315545196441202727920884760170773523982481954924888841925737603098569272000396167877687644744347536779979666288287397408354882209806314625235951974531417645228600227639531599035120244487876424969494495792144742802157765179642819611723046237600711939508947447936644738610256356059611889074547656792555557801243036786739293683747597246436494";        
                printf("#####START#####");
                int err_code = add("-3304231208786636306173155336949930677974518283354777362963967208412306696253618735134968510390357510378164553772039047923688442408241488900441621503715039838318157718647878707797236766378800759195165358129046157546978268190999982808466030536479702567690483170497888647794693457358301668812616239774293377158755007272598145333572963673494697478652359238379191442927760610642", "-4387985019445108765911051888991763637570678157847950557920792962361217286228336189753873415347245588191107446624128829763956301939295291079224666783682368516564052087666746528154737765038844469405062281402552877573266219685424986686029761608263099590074696472321723075251544143353637840134831696870445233097601052339290929214083828882063103764384427500914492304669485825852", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 150: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 377 bajtów
//
void UTEST150(void)
{
    // informacje o teście
    test_start(150, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 377 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(377);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-1083753810658472459737896552041832959596159874493173194956825753948910589974717454618904904956888077812942892852089781840267859531053802178783045279967328678245894369018867820357500998660043710209896923273506720026287951494425003877563731071783397022384213301823834427456850685995336171322215457096151855938846045066692783880510865208568406285732068262535300861741725215210";        
                printf("#####START#####");
                int err_code = add("3304231208786636306173155336949930677974518283354777362963967208412306696253618735134968510390357510378164553772039047923688442408241488900441621503715039838318157718647878707797236766378800759195165358129046157546978268190999982808466030536479702567690483170497888647794693457358301668812616239774293377158755007272598145333572963673494697478652359238379191442927760610642", "-4387985019445108765911051888991763637570678157847950557920792962361217286228336189753873415347245588191107446624128829763956301939295291079224666783682368516564052087666746528154737765038844469405062281402552877573266219685424986686029761608263099590074696472321723075251544143353637840134831696870445233097601052339290929214083828882063103764384427500914492304669485825852", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 151: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 281 bajtów
//
void UTEST151(void)
{
    // informacje o teście
    test_start(151, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 281 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(281);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "118334991518328242715752833123406027832136242928341633519490041608861801943208325710230515971631382898074152877135730384506459575191584600791336298017079270199536195536783535580235282408224586127723644316016216747899543164319216591978527359540422120315384101332596750600923787259";        
                printf("#####START#####");
                int err_code = add("66505614460316864173865338026443190451332270726413972139699808181742034688234326745659065047793523777918445567644186036910069019277193480378443380174311961422709512451322764297271103196098688170593130022114962138859895412254762065722223911168860004752263549886716648566340841596", "51829377058011378541887495096962837380803972201927661379790233427119767254973998964571450923837859120155707309491544347596390555914391120412892917842767308776826683085460771282964179212125897957130514293901254609039647752064454526256303448371562115563120551445880102034582945663", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 152: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 282 bajtów
//
void UTEST152(void)
{
    // informacje o teście
    test_start(152, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 282 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(282);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = add("66505614460316864173865338026443190451332270726413972139699808181742034688234326745659065047793523777918445567644186036910069019277193480378443380174311961422709512451322764297271103196098688170593130022114962138859895412254762065722223911168860004752263549886716648566340841596", "-66505614460316864173865338026443190451332270726413972139699808181742034688234326745659065047793523777918445567644186036910069019277193480378443380174311961422709512451322764297271103196098688170593130022114962138859895412254762065722223911168860004752263549886716648566340841596", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 153: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 282 bajtów
//
void UTEST153(void)
{
    // informacje o teście
    test_start(153, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 282 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(282);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-14676237402305485631977842929480353070528298524486310759909574754622267433260327781087614123955664657762738258152641689313678463362802359965550462331544652645882829365861993014306923983972790213462615728213707529820247660190307539465920462797297889189142998440836546531757895933";        
                printf("#####START#####");
                int err_code = add("-66505614460316864173865338026443190451332270726413972139699808181742034688234326745659065047793523777918445567644186036910069019277193480378443380174311961422709512451322764297271103196098688170593130022114962138859895412254762065722223911168860004752263549886716648566340841596", "51829377058011378541887495096962837380803972201927661379790233427119767254973998964571450923837859120155707309491544347596390555914391120412892917842767308776826683085460771282964179212125897957130514293901254609039647752064454526256303448371562115563120551445880102034582945663", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 154: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 282 bajtów
//
void UTEST154(void)
{
    // informacje o teście
    test_start(154, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 282 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(282);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-118334991518328242715752833123406027832136242928341633519490041608861801943208325710230515971631382898074152877135730384506459575191584600791336298017079270199536195536783535580235282408224586127723644316016216747899543164319216591978527359540422120315384101332596750600923787259";        
                printf("#####START#####");
                int err_code = add("-66505614460316864173865338026443190451332270726413972139699808181742034688234326745659065047793523777918445567644186036910069019277193480378443380174311961422709512451322764297271103196098688170593130022114962138859895412254762065722223911168860004752263549886716648566340841596", "-51829377058011378541887495096962837380803972201927661379790233427119767254973998964571450923837859120155707309491544347596390555914391120412892917842767308776826683085460771282964179212125897957130514293901254609039647752064454526256303448371562115563120551445880102034582945663", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 155: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 282 bajtów
//
void UTEST155(void)
{
    // informacje o teście
    test_start(155, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 282 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(282);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "14676237402305485631977842929480353070528298524486310759909574754622267433260327781087614123955664657762738258152641689313678463362802359965550462331544652645882829365861993014306923983972790213462615728213707529820247660190307539465920462797297889189142998440836546531757895933";        
                printf("#####START#####");
                int err_code = add("66505614460316864173865338026443190451332270726413972139699808181742034688234326745659065047793523777918445567644186036910069019277193480378443380174311961422709512451322764297271103196098688170593130022114962138859895412254762065722223911168860004752263549886716648566340841596", "-51829377058011378541887495096962837380803972201927661379790233427119767254973998964571450923837859120155707309491544347596390555914391120412892917842767308776826683085460771282964179212125897957130514293901254609039647752064454526256303448371562115563120551445880102034582945663", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 156: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 21 bajtów
//
void UTEST156(void)
{
    // informacje o teście
    test_start(156, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 21 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(21);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1000000000000000000";        
                printf("#####START#####");
                int err_code = add("999999999999999999", "1", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 157: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 22 bajtów
//
void UTEST157(void)
{
    // informacje o teście
    test_start(157, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 22 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(22);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-1000000000000000000";        
                printf("#####START#####");
                int err_code = add("-999999999999999999", "-1", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 158: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 21 bajtów
//
void UTEST158(void)
{
    // informacje o teście
    test_start(158, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 21 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(21);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1000000000000000000";        
                printf("#####START#####");
                int err_code = add("1", "999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 159: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 22 bajtów
//
void UTEST159(void)
{
    // informacje o teście
    test_start(159, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 22 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(22);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-1000000000000000000";        
                printf("#####START#####");
                int err_code = add("-1", "-999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 160: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 22 bajtów
//
void UTEST160(void)
{
    // informacje o teście
    test_start(160, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 22 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(22);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-999999999999999998";        
                printf("#####START#####");
                int err_code = add("1", "-999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 161: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 17 bajtów
//
void UTEST161(void)
{
    // informacje o teście
    test_start(161, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 17 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(17);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1";        
                printf("#####START#####");
                int err_code = add("10000000000000", "-9999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 162: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 17 bajtów
//
void UTEST162(void)
{
    // informacje o teście
    test_start(162, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 17 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(17);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1";        
                printf("#####START#####");
                int err_code = add("-9999999999999", "10000000000000", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 163: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 18 bajtów
//
void UTEST163(void)
{
    // informacje o teście
    test_start(163, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 18 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(18);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-1";        
                printf("#####START#####");
                int err_code = add("9999999999999", "-10000000000000", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 164: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 18 bajtów
//
void UTEST164(void)
{
    // informacje o teście
    test_start(164, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 18 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(18);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-1";        
                printf("#####START#####");
                int err_code = add("-10000000000000", "9999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 165: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 316 bajtów
//
void UTEST165(void)
{
    // informacje o teście
    test_start(165, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 316 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(316);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-1";        
                printf("#####START#####");
                int err_code = add("747345172485659602951427053376124368509968029685326117867021235927938805207115574613288049363143003758627223972296598686556708829773376143035640964397452189048881704496008231953729956135244874740046076852325278162242705397740214528414920308179899220691625110406534638913691436599797479114531732622202755681206965", "-747345172485659602951427053376124368509968029685326117867021235927938805207115574613288049363143003758627223972296598686556708829773376143035640964397452189048881704496008231953729956135244874740046076852325278162242705397740214528414920308179899220691625110406534638913691436599797479114531732622202755681206966", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 166: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 316 bajtów
//
void UTEST166(void)
{
    // informacje o teście
    test_start(166, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 316 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(316);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1";        
                printf("#####START#####");
                int err_code = add("747345172485659602951427053376124368509968029685326117867021235927938805207115574613288049363143003758627223972296598686556708829773376143035640964397452189048881704496008231953729956135244874740046076852325278162242705397740214528414920308179899220691625110406534638913691436599797479114531732622202755681206966", "-747345172485659602951427053376124368509968029685326117867021235927938805207115574613288049363143003758627223972296598686556708829773376143035640964397452189048881704496008231953729956135244874740046076852325278162242705397740214528414920308179899220691625110406534638913691436599797479114531732622202755681206965", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 167: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 18 bajtów
//
void UTEST167(void)
{
    // informacje o teście
    test_start(167, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 18 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(18);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "4335uUqevJ1GYGSs8q";        
                printf("#####START#####");
                int err_code = add("433", "5uUqevJ1GYGSs8q", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja add() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 168: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 18 bajtów
//
void UTEST168(void)
{
    // informacje o teście
    test_start(168, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 18 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(18);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "4335uUqevJ1GYGSs8q";        
                printf("#####START#####");
                int err_code = add("5uUqevJ1GYGSs8q", "433", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja add() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 169: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
//
void UTEST169(void)
{
    // informacje o teście
    test_start(169, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "354";        
                printf("#####START#####");
                int err_code = add("354", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 170: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
//
void UTEST170(void)
{
    // informacje o teście
    test_start(170, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "354";        
                printf("#####START#####");
                int err_code = add("0", "354", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 171: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
//
void UTEST171(void)
{
    // informacje o teście
    test_start(171, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "354";        
                printf("#####START#####");
                int err_code = add("354", "", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja add() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 172: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
//
void UTEST172(void)
{
    // informacje o teście
    test_start(172, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "354";        
                printf("#####START#####");
                int err_code = add("", "354", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja add() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 173: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów
//
void UTEST173(void)
{
    // informacje o teście
    test_start(173, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = add("-", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja add() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 174: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów
//
void UTEST174(void)
{
    // informacje o teście
    test_start(174, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = add("-", "-", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja add() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 175: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
//
void UTEST175(void)
{
    // informacje o teście
    test_start(175, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "427";        
                printf("#####START#####");
                int err_code = add("445", "-18", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 176: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
//
void UTEST176(void)
{
    // informacje o teście
    test_start(176, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-427";        
                printf("#####START#####");
                int err_code = add("-445", "18", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 177: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 2 bajtów
//
void UTEST177(void)
{
    // informacje o teście
    test_start(177, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 2 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = add("239", "188", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja add() powinna zwrócić wartość 3, a zwróciła %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 178: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 2 bajtów
//
void UTEST178(void)
{
    // informacje o teście
    test_start(178, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 2 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = add("-239", "-188", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja add() powinna zwrócić wartość 3, a zwróciła %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 179: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 1 bajtów
//
void UTEST179(void)
{
    // informacje o teście
    test_start(179, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 1 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = add("241", "-12", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja add() powinna zwrócić wartość 3, a zwróciła %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 180: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 1 bajtów
//
void UTEST180(void)
{
    // informacje o teście
    test_start(180, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 1 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = add("-241", "12", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja add() powinna zwrócić wartość 3, a zwróciła %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 181: Sprawdzanie poprawności działania funkcji add
//
void UTEST181(void)
{
    // informacje o teście
    test_start(181, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        char *result;
        printf("#####START#####");
        int err_code = add(NULL, "145", &result);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja add() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 182: Sprawdzanie poprawności działania funkcji add
//
void UTEST182(void)
{
    // informacje o teście
    test_start(182, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        char *result;
        printf("#####START#####");
        int err_code = add("193", NULL, &result);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja add() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 183: Sprawdzanie poprawności działania funkcji add
//
void UTEST183(void)
{
    // informacje o teście
    test_start(183, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        printf("#####START#####");
        int err_code = add("1205", "1597", NULL);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja add() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 184: Sprawdzanie poprawności działania funkcji add
//
void UTEST184(void)
{
    // informacje o teście
    test_start(184, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        printf("#####START#####");
        int err_code = add(NULL, NULL, NULL);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja add() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 185: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
//
void UTEST185(void)
{
    // informacje o teście
    test_start(185, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-243";        
                printf("#####START#####");
                int err_code = subtract("215", "458", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 186: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST186(void)
{
    // informacje o teście
    test_start(186, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "673";        
                printf("#####START#####");
                int err_code = subtract("215", "-458", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 187: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
//
void UTEST187(void)
{
    // informacje o teście
    test_start(187, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = subtract("215", "215", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 188: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST188(void)
{
    // informacje o teście
    test_start(188, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "673";        
                printf("#####START#####");
                int err_code = subtract("458", "-215", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 189: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST189(void)
{
    // informacje o teście
    test_start(189, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "243";        
                printf("#####START#####");
                int err_code = subtract("-215", "-458", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 190: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST190(void)
{
    // informacje o teście
    test_start(190, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-673";        
                printf("#####START#####");
                int err_code = subtract("-215", "458", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 191: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
//
void UTEST191(void)
{
    // informacje o teście
    test_start(191, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "126";        
                printf("#####START#####");
                int err_code = subtract("665", "539", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 192: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST192(void)
{
    // informacje o teście
    test_start(192, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-126";        
                printf("#####START#####");
                int err_code = subtract("-665", "-539", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 193: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST193(void)
{
    // informacje o teście
    test_start(193, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-1204";        
                printf("#####START#####");
                int err_code = subtract("-665", "539", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 194: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST194(void)
{
    // informacje o teście
    test_start(194, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1204";        
                printf("#####START#####");
                int err_code = subtract("665", "-539", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 195: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 486 bajtów
//
void UTEST195(void)
{
    // informacje o teście
    test_start(195, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 486 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(486);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-498936981129119987710640557803416036386095711269724501058544952205727623168332164314683274313103457883908267107480161222040191543681060653395431281766577695699894249128078894345429765568776258077791793801558792828738586666845536213085247088536989461462010269623567573601765839236183845664008709536694355175570812620722629665406224489003698305919414731020925197746893709390428929043652041343831863762632507317140282301699385919369816173047502946115502064888436132351976969351456409039";        
                printf("#####START#####");
                int err_code = subtract("406844878689508618823532769672194856987172582631241757770538756998933943887040935789180652378539057041293260758520254986463649590777057678960840189906895041174624228080277039819305965960434767097874430211414301059048844401101846350092394676273907876737594036793720268102059419045436773851097994601939637482145669040249660313279181224340711330962816299163753941153483675935967793078789028439361237187377907733207599817528028754248232555380017685142472264300224776536763141352826749947", "905781859818628606534173327475610893373268293900966258829083709204661567055373100103863926691642514925201527866000416208503841134458118332356271471673472736874518477208355934164735731529211025175666224012973093887787431067947382563177641764810897338199604306417287841703825258281620619515106704138633992657716481660972289978685405713344409636882231030184679138900377385326396722122441069783193100950010415050347882119227414673618048728427520631257974329188660908888740110704283158986", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 196: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 486 bajtów
//
void UTEST196(void)
{
    // informacje o teście
    test_start(196, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 486 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(486);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = subtract("406844878689508618823532769672194856987172582631241757770538756998933943887040935789180652378539057041293260758520254986463649590777057678960840189906895041174624228080277039819305965960434767097874430211414301059048844401101846350092394676273907876737594036793720268102059419045436773851097994601939637482145669040249660313279181224340711330962816299163753941153483675935967793078789028439361237187377907733207599817528028754248232555380017685142472264300224776536763141352826749947", "406844878689508618823532769672194856987172582631241757770538756998933943887040935789180652378539057041293260758520254986463649590777057678960840189906895041174624228080277039819305965960434767097874430211414301059048844401101846350092394676273907876737594036793720268102059419045436773851097994601939637482145669040249660313279181224340711330962816299163753941153483675935967793078789028439361237187377907733207599817528028754248232555380017685142472264300224776536763141352826749947", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 197: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 299 bajtów
//
void UTEST197(void)
{
    // informacje o teście
    test_start(197, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 299 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(299);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "2252386188485160565750673574678766059765592409164533650204905116167696575528243179162697523436256229041052964533361729376364479170164904708603669276356673064690217098416265258841221190825617199940785317025087813786217668197521338221922670005974203366959679228814979856852233834149014511988796862";        
                printf("#####START#####");
                int err_code = subtract("61721436811694683720780686332948496680373534422169240997569351273090823599327112743255287641327698277481647489335630212278918821420985948289896672211067874201463342160306094330916798620035521069341743550813909293792614380443870564695519273092216858222935717630063783643329797904028696781764850334", "59469050623209523155030012758269730620607942013004707347364446156923127023798869564092590117891442048440594524802268482902554342250821043581293002934711201136773125061889829072075577429209903869400958233788821480006396712246349226473596603086242654855976038401248803786477564069879682269776053472", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 198: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 300 bajtów
//
void UTEST198(void)
{
    // informacje o teście
    test_start(198, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 300 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(300);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-121190487434904206875810699091218227300981476435173948344933797430013950623125982307347877759219140325922242014137898695181473163671806991871189675145779075338236467222195923402992376049245424938742701784602730773799011092690219791169115876178459513078911756031312587429807361973908379051540903806";        
                printf("#####START#####");
                int err_code = subtract("-61721436811694683720780686332948496680373534422169240997569351273090823599327112743255287641327698277481647489335630212278918821420985948289896672211067874201463342160306094330916798620035521069341743550813909293792614380443870564695519273092216858222935717630063783643329797904028696781764850334", "59469050623209523155030012758269730620607942013004707347364446156923127023798869564092590117891442048440594524802268482902554342250821043581293002934711201136773125061889829072075577429209903869400958233788821480006396712246349226473596603086242654855976038401248803786477564069879682269776053472", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 199: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 300 bajtów
//
void UTEST199(void)
{
    // informacje o teście
    test_start(199, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 300 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(300);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-2252386188485160565750673574678766059765592409164533650204905116167696575528243179162697523436256229041052964533361729376364479170164904708603669276356673064690217098416265258841221190825617199940785317025087813786217668197521338221922670005974203366959679228814979856852233834149014511988796862";        
                printf("#####START#####");
                int err_code = subtract("-61721436811694683720780686332948496680373534422169240997569351273090823599327112743255287641327698277481647489335630212278918821420985948289896672211067874201463342160306094330916798620035521069341743550813909293792614380443870564695519273092216858222935717630063783643329797904028696781764850334", "-59469050623209523155030012758269730620607942013004707347364446156923127023798869564092590117891442048440594524802268482902554342250821043581293002934711201136773125061889829072075577429209903869400958233788821480006396712246349226473596603086242654855976038401248803786477564069879682269776053472", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 200: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 300 bajtów
//
void UTEST200(void)
{
    // informacje o teście
    test_start(200, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 300 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(300);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "121190487434904206875810699091218227300981476435173948344933797430013950623125982307347877759219140325922242014137898695181473163671806991871189675145779075338236467222195923402992376049245424938742701784602730773799011092690219791169115876178459513078911756031312587429807361973908379051540903806";        
                printf("#####START#####");
                int err_code = subtract("61721436811694683720780686332948496680373534422169240997569351273090823599327112743255287641327698277481647489335630212278918821420985948289896672211067874201463342160306094330916798620035521069341743550813909293792614380443870564695519273092216858222935717630063783643329797904028696781764850334", "-59469050623209523155030012758269730620607942013004707347364446156923127023798869564092590117891442048440594524802268482902554342250821043581293002934711201136773125061889829072075577429209903869400958233788821480006396712246349226473596603086242654855976038401248803786477564069879682269776053472", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 201: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 24 bajtów
//
void UTEST201(void)
{
    // informacje o teście
    test_start(201, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 24 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(24);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "99999999999999999993";        
                printf("#####START#####");
                int err_code = subtract("100000000000000000002", "9", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 202: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 24 bajtów
//
void UTEST202(void)
{
    // informacje o teście
    test_start(202, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 24 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(24);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-99999999999999999993";        
                printf("#####START#####");
                int err_code = subtract("9", "100000000000000000002", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 203: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów
//
void UTEST203(void)
{
    // informacje o teście
    test_start(203, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(23);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-10000000000000000000";        
                printf("#####START#####");
                int err_code = subtract("-9999999999999999999", "1", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 204: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 22 bajtów
//
void UTEST204(void)
{
    // informacje o teście
    test_start(204, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 22 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(22);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "10000000000000000000";        
                printf("#####START#####");
                int err_code = subtract("9999999999999999999", "-1", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 205: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów
//
void UTEST205(void)
{
    // informacje o teście
    test_start(205, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(23);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "9999999999999999998";        
                printf("#####START#####");
                int err_code = subtract("-1", "-9999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 206: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 22 bajtów
//
void UTEST206(void)
{
    // informacje o teście
    test_start(206, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 22 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(22);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-10000000000000000000";        
                printf("#####START#####");
                int err_code = subtract("-1", "9999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 207: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów
//
void UTEST207(void)
{
    // informacje o teście
    test_start(207, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(23);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "10000000000000000000";        
                printf("#####START#####");
                int err_code = subtract("1", "-9999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 208: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów
//
void UTEST208(void)
{
    // informacje o teście
    test_start(208, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(23);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-9999999999999999999";        
                printf("#####START#####");
                int err_code = subtract("-9999999999999999999", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 209: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 22 bajtów
//
void UTEST209(void)
{
    // informacje o teście
    test_start(209, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 22 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(22);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "9999999999999999999";        
                printf("#####START#####");
                int err_code = subtract("9999999999999999999", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 210: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów
//
void UTEST210(void)
{
    // informacje o teście
    test_start(210, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(23);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "9999999999999999999";        
                printf("#####START#####");
                int err_code = subtract("0", "-9999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 211: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 22 bajtów
//
void UTEST211(void)
{
    // informacje o teście
    test_start(211, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 22 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(22);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-9999999999999999999";        
                printf("#####START#####");
                int err_code = subtract("0", "9999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 212: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów
//
void UTEST212(void)
{
    // informacje o teście
    test_start(212, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = subtract("0", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 213: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
//
void UTEST213(void)
{
    // informacje o teście
    test_start(213, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "665";        
                printf("#####START#####");
                int err_code = subtract("665", "", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja subtract() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 214: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
//
void UTEST214(void)
{
    // informacje o teście
    test_start(214, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "665";        
                printf("#####START#####");
                int err_code = subtract("", "665", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja subtract() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 215: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów
//
void UTEST215(void)
{
    // informacje o teście
    test_start(215, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = subtract("-", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja subtract() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 216: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów
//
void UTEST216(void)
{
    // informacje o teście
    test_start(216, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = subtract("-", "-", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja subtract() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 217: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
//
void UTEST217(void)
{
    // informacje o teście
    test_start(217, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "171";        
                printf("#####START#####");
                int err_code = subtract("164", "-7", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 218: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST218(void)
{
    // informacje o teście
    test_start(218, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-171";        
                printf("#####START#####");
                int err_code = subtract("-164", "7", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 219: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 3 bajtów
//
void UTEST219(void)
{
    // informacje o teście
    test_start(219, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 3 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(3);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = subtract("211", "-238", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja subtract() powinna zwrócić wartość 3, a zwróciła %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 220: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 3 bajtów
//
void UTEST220(void)
{
    // informacje o teście
    test_start(220, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 3 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(3);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = subtract("-211", "238", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja subtract() powinna zwrócić wartość 3, a zwróciła %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 221: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 2 bajtów
//
void UTEST221(void)
{
    // informacje o teście
    test_start(221, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 2 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = subtract("171", "78", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja subtract() powinna zwrócić wartość 3, a zwróciła %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 222: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 1 bajtów
//
void UTEST222(void)
{
    // informacje o teście
    test_start(222, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 1 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = subtract("-171", "-78", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja subtract() powinna zwrócić wartość 3, a zwróciła %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 223: Sprawdzanie poprawności działania funkcji subtract
//
void UTEST223(void)
{
    // informacje o teście
    test_start(223, "Sprawdzanie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        char *result;
        printf("#####START#####");
        int err_code = subtract(NULL, "1932", &result);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja subtract() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 224: Sprawdzanie poprawności działania funkcji subtract
//
void UTEST224(void)
{
    // informacje o teście
    test_start(224, "Sprawdzanie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        char *result;
        printf("#####START#####");
        int err_code = subtract("117", NULL, &result);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja subtract() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 225: Sprawdzanie poprawności działania funkcji subtract
//
void UTEST225(void)
{
    // informacje o teście
    test_start(225, "Sprawdzanie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        printf("#####START#####");
        int err_code = subtract("760", "1535", NULL);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja subtract() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 226: Sprawdzanie poprawności działania funkcji subtract
//
void UTEST226(void)
{
    // informacje o teście
    test_start(226, "Sprawdzanie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        printf("#####START#####");
        int err_code = subtract(NULL, NULL, NULL);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja subtract() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 227: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST227(void)
{
    // informacje o teście
    test_start(227, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "60168";        
                printf("#####START#####");
                int err_code = multiply("276", "218", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 228: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST228(void)
{
    // informacje o teście
    test_start(228, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-60168";        
                printf("#####START#####");
                int err_code = multiply("276", "-218", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 229: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST229(void)
{
    // informacje o teście
    test_start(229, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "76176";        
                printf("#####START#####");
                int err_code = multiply("276", "276", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 230: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST230(void)
{
    // informacje o teście
    test_start(230, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-60168";        
                printf("#####START#####");
                int err_code = multiply("218", "-276", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 231: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST231(void)
{
    // informacje o teście
    test_start(231, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "60168";        
                printf("#####START#####");
                int err_code = multiply("-276", "-218", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 232: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST232(void)
{
    // informacje o teście
    test_start(232, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-60168";        
                printf("#####START#####");
                int err_code = multiply("-276", "218", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 233: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST233(void)
{
    // informacje o teście
    test_start(233, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "434696";        
                printf("#####START#####");
                int err_code = multiply("811", "536", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 234: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST234(void)
{
    // informacje o teście
    test_start(234, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "434696";        
                printf("#####START#####");
                int err_code = multiply("-811", "-536", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 235: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST235(void)
{
    // informacje o teście
    test_start(235, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-434696";        
                printf("#####START#####");
                int err_code = multiply("-811", "536", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 236: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST236(void)
{
    // informacje o teście
    test_start(236, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-434696";        
                printf("#####START#####");
                int err_code = multiply("811", "-536", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 237: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST237(void)
{
    // informacje o teście
    test_start(237, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "32606312890040453487205108304508500431153539210136124952031300187839798932129157734873994353377749850664733331372334077260104296125904324104063362986714812611731808013649473337395598994744799710416151728345744706081693864707178324646811874852224875746678416146421732281689914736198564363149062994560488277527009301516366990012457383727654330321036482977410436737677984175072275402337783601946679393376969054484381391290557171944238878762458288453606933526873479867520209718379985620925947936073425319973263279117240380";        
                printf("#####START#####");
                int err_code = multiply("4813309049135508339333063238209070064407603551905254841987073515740307655500280757311378764565109252024678832324317039430441236650530576016970727113030577337879953529291134558415363418257074546620157965295367331432243227036542723425650880633731754545848597126", "6774198904991710837322930048285311171940542088051368900187143458438094899379600435886721790726359898928407544076682654687008572096286875542304879949166479604805060880981128351879893285336838812476591698408300895494350940737657096498315907801460826098867989130", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 238: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST238(void)
{
    // informacje o teście
    test_start(238, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "23167944002489771432871954328750723603270537960551515145037895200168015119012515551526415297267738656137552712617396569274337110150511796783593563540682937812622278292161198859563920874302203514170976745036285567148602713715561980778040000522212118680271053720249497161016593515694322267426080598860240011361748943373604027093709449541678826449682507076173519578314634283707085443169448076152754427787540360230086089400594342305641371757165924121546872234502613528535671947561787812876342654435808149368992422255459876";        
                printf("#####START#####");
                int err_code = multiply("4813309049135508339333063238209070064407603551905254841987073515740307655500280757311378764565109252024678832324317039430441236650530576016970727113030577337879953529291134558415363418257074546620157965295367331432243227036542723425650880633731754545848597126", "4813309049135508339333063238209070064407603551905254841987073515740307655500280757311378764565109252024678832324317039430441236650530576016970727113030577337879953529291134558415363418257074546620157965295367331432243227036542723425650880633731754545848597126", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 239: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST239(void)
{
    // informacje o teście
    test_start(239, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "6346982004411014721238201311348091257434761483354630944654477753407178944669886527819128436826336971927132655959664052782522579632265889636507621514902535298060222817135144455736699359754910063278290666275520900592268022353491945151977336062811221656203476950969074402598840479007202434818758791951330312978188654378493245762410324542285206738250036866828227902308778662045896173146936427952904879032792253666690687900662007198125677014522379646827201203349986861054002307084321065168811628375468576325391815224991";        
                printf("#####START#####");
                int err_code = multiply("73873811028439101207348868684749307649345213094097634009312569814888800838685356445809008255428686872599081095198561061699769605756920791084137590725611017483752284438883229457075295100860860528367053211587046799663146828123321882047983570611966294799627859", "85916536808526442957648461243527941925624210143402214881645376926525802129946699700590608602748323093984194749032348162797801526465914250311605550275560734951368759109749165402593656457016780865395845910468645252736388579232685334906350538400964630517286149", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 240: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST240(void)
{
    // informacje o teście
    test_start(240, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-6346982004411014721238201311348091257434761483354630944654477753407178944669886527819128436826336971927132655959664052782522579632265889636507621514902535298060222817135144455736699359754910063278290666275520900592268022353491945151977336062811221656203476950969074402598840479007202434818758791951330312978188654378493245762410324542285206738250036866828227902308778662045896173146936427952904879032792253666690687900662007198125677014522379646827201203349986861054002307084321065168811628375468576325391815224991";        
                printf("#####START#####");
                int err_code = multiply("-73873811028439101207348868684749307649345213094097634009312569814888800838685356445809008255428686872599081095198561061699769605756920791084137590725611017483752284438883229457075295100860860528367053211587046799663146828123321882047983570611966294799627859", "85916536808526442957648461243527941925624210143402214881645376926525802129946699700590608602748323093984194749032348162797801526465914250311605550275560734951368759109749165402593656457016780865395845910468645252736388579232685334906350538400964630517286149", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 241: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST241(void)
{
    // informacje o teście
    test_start(241, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "6346982004411014721238201311348091257434761483354630944654477753407178944669886527819128436826336971927132655959664052782522579632265889636507621514902535298060222817135144455736699359754910063278290666275520900592268022353491945151977336062811221656203476950969074402598840479007202434818758791951330312978188654378493245762410324542285206738250036866828227902308778662045896173146936427952904879032792253666690687900662007198125677014522379646827201203349986861054002307084321065168811628375468576325391815224991";        
                printf("#####START#####");
                int err_code = multiply("-73873811028439101207348868684749307649345213094097634009312569814888800838685356445809008255428686872599081095198561061699769605756920791084137590725611017483752284438883229457075295100860860528367053211587046799663146828123321882047983570611966294799627859", "-85916536808526442957648461243527941925624210143402214881645376926525802129946699700590608602748323093984194749032348162797801526465914250311605550275560734951368759109749165402593656457016780865395845910468645252736388579232685334906350538400964630517286149", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 242: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST242(void)
{
    // informacje o teście
    test_start(242, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-6346982004411014721238201311348091257434761483354630944654477753407178944669886527819128436826336971927132655959664052782522579632265889636507621514902535298060222817135144455736699359754910063278290666275520900592268022353491945151977336062811221656203476950969074402598840479007202434818758791951330312978188654378493245762410324542285206738250036866828227902308778662045896173146936427952904879032792253666690687900662007198125677014522379646827201203349986861054002307084321065168811628375468576325391815224991";        
                printf("#####START#####");
                int err_code = multiply("73873811028439101207348868684749307649345213094097634009312569814888800838685356445809008255428686872599081095198561061699769605756920791084137590725611017483752284438883229457075295100860860528367053211587046799663146828123321882047983570611966294799627859", "-85916536808526442957648461243527941925624210143402214881645376926525802129946699700590608602748323093984194749032348162797801526465914250311605550275560734951368759109749165402593656457016780865395845910468645252736388579232685334906350538400964630517286149", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 243: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST243(void)
{
    // informacje o teście
    test_start(243, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "900000000072";        
                printf("#####START#####");
                int err_code = multiply("100000000008", "9", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 244: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST244(void)
{
    // informacje o teście
    test_start(244, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "900000000072";        
                printf("#####START#####");
                int err_code = multiply("9", "100000000008", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 245: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST245(void)
{
    // informacje o teście
    test_start(245, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "9999999999999998990000000000000001";        
                printf("#####START#####");
                int err_code = multiply("999999999999999999", "9999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 246: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST246(void)
{
    // informacje o teście
    test_start(246, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "9999999999999998990000000000000001";        
                printf("#####START#####");
                int err_code = multiply("9999999999999999", "999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 247: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST247(void)
{
    // informacje o teście
    test_start(247, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1878552060569100992833282367400000000000000000000000000000";        
                printf("#####START#####");
                int err_code = multiply("100000000000000000000000000000", "18785520605691009928332823674", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 248: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST248(void)
{
    // informacje o teście
    test_start(248, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1878552060569100992833282367400000000000000000000000000000";        
                printf("#####START#####");
                int err_code = multiply("18785520605691009928332823674", "100000000000000000000000000000", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 249: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST249(void)
{
    // informacje o teście
    test_start(249, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-999999999999999999";        
                printf("#####START#####");
                int err_code = multiply("-999999999999999999", "1", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 250: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST250(void)
{
    // informacje o teście
    test_start(250, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-999999999999999999";        
                printf("#####START#####");
                int err_code = multiply("999999999999999999", "-1", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 251: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST251(void)
{
    // informacje o teście
    test_start(251, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "999999999999999999";        
                printf("#####START#####");
                int err_code = multiply("-1", "-999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 252: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST252(void)
{
    // informacje o teście
    test_start(252, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-999999999999999999";        
                printf("#####START#####");
                int err_code = multiply("-1", "999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 253: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST253(void)
{
    // informacje o teście
    test_start(253, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-999999999999999999";        
                printf("#####START#####");
                int err_code = multiply("1", "-999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 254: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST254(void)
{
    // informacje o teście
    test_start(254, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("-999999999999999999", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 255: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST255(void)
{
    // informacje o teście
    test_start(255, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("999999999999999999", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 256: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST256(void)
{
    // informacje o teście
    test_start(256, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("0", "-999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 257: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST257(void)
{
    // informacje o teście
    test_start(257, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("0", "999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 258: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST258(void)
{
    // informacje o teście
    test_start(258, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("0", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 259: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST259(void)
{
    // informacje o teście
    test_start(259, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "811";        
                printf("#####START#####");
                int err_code = multiply("811", "", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja multiply() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 260: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST260(void)
{
    // informacje o teście
    test_start(260, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "811";        
                printf("#####START#####");
                int err_code = multiply("", "811", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja multiply() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 261: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST261(void)
{
    // informacje o teście
    test_start(261, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("-", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja multiply() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 262: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST262(void)
{
    // informacje o teście
    test_start(262, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("-", "-", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja multiply() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 263: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST263(void)
{
    // informacje o teście
    test_start(263, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *result;
            printf("#####START#####");
            int err_code = multiply("811", NULL, &result);
            printf("#####END#####\\n");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić wartość 1, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 264: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST264(void)
{
    // informacje o teście
    test_start(264, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *result;
            printf("#####START#####");
            int err_code = multiply(NULL, NULL, &result);
            printf("#####END#####\\n");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić wartość 1, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 265: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST265(void)
{
    // informacje o teście
    test_start(265, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *result;
            printf("#####START#####");
            int err_code = multiply(NULL, "811", &result);
            printf("#####END#####\\n");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić wartość 1, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 266: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST266(void)
{
    // informacje o teście
    test_start(266, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = multiply("811", "811", NULL);
            printf("#####END#####\\n");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić wartość 1, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 267: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST267(void)
{
    // informacje o teście
    test_start(267, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = multiply(NULL, "811", NULL);
            printf("#####END#####\\n");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić wartość 1, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 268: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST268(void)
{
    // informacje o teście
    test_start(268, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = multiply("811", NULL, NULL);
            printf("#####END#####\\n");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić wartość 1, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 269: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST269(void)
{
    // informacje o teście
    test_start(269, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = multiply(NULL, NULL, NULL);
            printf("#####END#####\\n");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić wartość 1, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 270: Sprawdzanie poprawności działania funkcji multiply - limit sterty ustawiony na 0 bajtów
//
void UTEST270(void)
{
    // informacje o teście
    test_start(270, "Sprawdzanie poprawności działania funkcji multiply - limit sterty ustawiony na 0 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("811", "811", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja multiply() powinna zwrócić wartość 3, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 271: Sprawdzanie poprawności działania funkcji multiply - limit sterty ustawiony na 6 bajtów
//
void UTEST271(void)
{
    // informacje o teście
    test_start(271, "Sprawdzanie poprawności działania funkcji multiply - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("811", "811", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja multiply() powinna zwrócić wartość 3, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 272: Sprawdzanie poprawności działania funkcji compare
//
void UTEST272(void)
{
    // informacje o teście
    test_start(272, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("38");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 273: Sprawdzanie poprawności działania funkcji compare
//
void UTEST273(void)
{
    // informacje o teście
    test_start(273, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("0");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 274: Sprawdzanie poprawności działania funkcji compare
//
void UTEST274(void)
{
    // informacje o teście
    test_start(274, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("763+507");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 275: Sprawdzanie poprawności działania funkcji compare
//
void UTEST275(void)
{
    // informacje o teście
    test_start(275, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-763+507");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 276: Sprawdzanie poprawności działania funkcji compare
//
void UTEST276(void)
{
    // informacje o teście
    test_start(276, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-763+-507");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 277: Sprawdzanie poprawności działania funkcji compare
//
void UTEST277(void)
{
    // informacje o teście
    test_start(277, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("381-872");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 278: Sprawdzanie poprawności działania funkcji compare
//
void UTEST278(void)
{
    // informacje o teście
    test_start(278, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-381-872");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 279: Sprawdzanie poprawności działania funkcji compare
//
void UTEST279(void)
{
    // informacje o teście
    test_start(279, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-381--872");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 280: Sprawdzanie poprawności działania funkcji compare
//
void UTEST280(void)
{
    // informacje o teście
    test_start(280, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("745*231");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 281: Sprawdzanie poprawności działania funkcji compare
//
void UTEST281(void)
{
    // informacje o teście
    test_start(281, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-745*231");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 282: Sprawdzanie poprawności działania funkcji compare
//
void UTEST282(void)
{
    // informacje o teście
    test_start(282, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-745*-231");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 283: Sprawdzanie poprawności działania funkcji compare
//
void UTEST283(void)
{
    // informacje o teście
    test_start(283, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("75*8688--1985*3974");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 284: Sprawdzanie poprawności działania funkcji compare
//
void UTEST284(void)
{
    // informacje o teście
    test_start(284, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-28--9899--5857*-3766*3059*9762+3127--503*6496-813-5643+80+-5731*8183*-7577*766*-3441--8183+2332+1906--3654*-9141*5743-8546");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 285: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST285(void)
{
    // informacje o teście
    test_start(285, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-350/563");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 286: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST286(void)
{
    // informacje o teście
    test_start(286, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("816+166*22+742-+826");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 287: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST287(void)
{
    // informacje o teście
    test_start(287, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("816+166*22+742-+826+997*540*676*323-797-708-123*472*462*478/n");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 288: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST288(void)
{
    // informacje o teście
    test_start(288, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-726+305*206*87+745+*581");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 289: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST289(void)
{
    // informacje o teście
    test_start(289, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-269/611+743+265*546*764");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 290: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST290(void)
{
    // informacje o teście
    test_start(290, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("87*543+793-470*150-301*214-128*650-55-485-610*877-578-117+740-920*351-716*705+184*83*858+266*234+116-957*325+451-844*");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 291: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST291(void)
{
    // informacje o teście
    test_start(291, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("+761*378+299+78+793+831+912-488-505+808*486-518*353-246-843+724*35*726*41-177+913+647*275-430-866-895*156-789*234-905-778*540+82");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 292: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST292(void)
{
    // informacje o teście
    test_start(292, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("*563+493*111+491-863*316+232-449-677*734*852+680*812+491-693-649-978+761-949+644*104+623+973-275+782*261+559*513+310*304+155+705*842-913-739-414-190+186*260-183+356");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 293: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST293(void)
{
    // informacje o teście
    test_start(293, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("694-884+748+300-566-498*326+4-542*188*790+683(617+374*244");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 294: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST294(void)
{
    // informacje o teście
    test_start(294, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("12*412+847+869-256-392*700+733*466-302+461*109*747+711.304+888+806+507+796");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 295: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST295(void)
{
    // informacje o teście
    test_start(295, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("475-872*928-398-991*993-95+416A393-490-459*80-6");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 296: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST296(void)
{
    // informacje o teście
    test_start(296, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("284+945-739*775+142\n*211+22+336+430-799-363-404+417+749-664-208+705");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 297: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST297(void)
{
    // informacje o teście
    test_start(297, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 298: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST298(void)
{
    // informacje o teście
    test_start(298, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("822", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "822";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 299: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST299(void)
{
    // informacje o teście
    test_start(299, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("0", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "0";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 300: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST300(void)
{
    // informacje o teście
    test_start(300, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("826+620", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "1446";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 301: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST301(void)
{
    // informacje o teście
    test_start(301, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-826+620", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-206";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 302: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST302(void)
{
    // informacje o teście
    test_start(302, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-826+-620", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-1446";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 303: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST303(void)
{
    // informacje o teście
    test_start(303, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("195-637", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-442";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 304: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST304(void)
{
    // informacje o teście
    test_start(304, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-195-637", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-832";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 305: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST305(void)
{
    // informacje o teście
    test_start(305, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-195--637", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "442";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 306: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST306(void)
{
    // informacje o teście
    test_start(306, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("729*181", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "131949";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 307: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST307(void)
{
    // informacje o teście
    test_start(307, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-729*181", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-131949";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 308: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST308(void)
{
    // informacje o teście
    test_start(308, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-729*-181", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "131949";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 309: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST309(void)
{
    // informacje o teście
    test_start(309, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("65+-7002*2369+1481", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-16432272";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 310: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST310(void)
{
    // informacje o teście
    test_start(310, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("93*-4558+-5015-52+-1514+-6468-6669--6079-195+8381--8108*-7668+8503+-1187+5541--116*3649*-2600--2816+-6757-5857*3779--8513+3500+-323*4347-1528-2025*551--5286*-581*5022+-3282*8785+2986*-5344--8504", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-37996082321758494872602616514450794057480";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 311: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST311(void)
{
    // informacje o teście
    test_start(311, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-12--3162339546581900228553221779826278631579645741082970102176556479540700379978630217240134496543625586--7728693768095583897112728811252205201484202777097283043904889882000209910522326296050087214714930615--3450567781387363192171008191392328395957497108852413040669450020677639039294031581634457998788858677*5484429549916757744159266238122182907119517776203767211563977504178467555494750857117631376040333303--8346355750999013444222456335524097454133381764011126483056290133935494458631804684796777594384048647*65713114556317706665903897357312967921879268069784525983480839552323035727269830519348368640997335*8559567025301797972084875179674293381635647564608337150396297623222685997410400048303719771126614425*2889405836772925718890971568881512203950505014867431220900162266806221147170961711367610908376519845*-1024946400854079423154062580555772995536375926691856524499979412898957413385620221358505350519091616*-8766780074733096828648031066504360236335669495986040436460622568864449065494756382921544547457276725+-6989467786708690469186301737613395208078220563802012001140085823400652569911883503536603558759007546--6288152151966995646670217323323139011840326833586753181593267477139036049146687387562021390168183052--4940589719021619571435353004025323743199776112260122025084895838552968673631010320653867866047520059+-8870945599166993584181873902443386818225836962598555839453042182770520302020942012017761810028523161*2818071732287952634016652217980782363922650892587432211696807936898184680186256297827614997541214237+6658234123799237436709693287169401895017435873419185283150289479840101863032511259166939765957525280+8042671427737935792765888358181080706207906253576013777782059744244483369531023822551421706197952684*117336738370967567043139186304004446807678305952668041796606869083508267029204983602532488171380134+6313541793029495879008141916354699293883139753252555622252871940319486688608106857315371339707574389+5739769811045009630592016675574529382606162970503575754190301615273426162309170422851521375498770076+7889518062105480547922192204297709718182698613627640433370671375501271251425994884770807805507440203-8535741963085014868799355820780923732839843727284827181262282637517432134945283424399607230769358168--5829612408330504233406436764561231646477079545701787204409471886842972611667677751939034999618150946+92136036184817321526870599963178795583989548472037573576102892713484527460952601233000888278679612+-2150905963538610491955706788006255309048703106054622761211481935420228500684065513454173348207131223--9797613702603286721900248229152551113458311634166540942952972762796921613526427133266407265564740686*7055153398104779965992023944770592462904012098815193318216435572092892981351743327809147284475305665--8202921189253744658022573443964056494345121927036841412487450180463725131508610707148097669288963173*-7893022309014863554059529624095868335798870356556619916865984549459951780853093088041482670634466970", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-21150401134820309100330523944232420189604689479434131505208302999427938327472027528343077984709233858148392399398680909994436579913432826908683504651904939744784514437047897282314269119115578788774724058262686224316826971950056588024030193658167486135366319312370880386058197515224566888890784810630349685346474095350791003225978096325500620669347416372330598593539020390831234536339867876450330337322170975185581555440178448405032010535124069467016985300912264967729093893830858847224284591967484307286582271176821706477704812277539699620764143893950265535398960394327335864150984063247640220640854217495232861214768266827212023527173704235489005545114550538587684058571516306076538808260753986906625668764294809822848543517195114961685410233241408362999937634332670463616142623051292956085459111315452834557087448054642148710695798643874423373378361000570759862984796659139763220731107737035052328015283404833886032347998453577372686276088989286499490063526260738522513689285628455162435074158413543465470318995537553216640392276190216325304409690973188132054415376299480341115637258450757260";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 312: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST312(void)
{
    // informacje o teście
    test_start(312, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-948/736", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 313: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST313(void)
{
    // informacje o teście
    test_start(313, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("875+647+233+643**244+906", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 314: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST314(void)
{
    // informacje o teście
    test_start(314, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("875+647+233+643**244+906+130+843+387*554+175*277/n", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 315: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST315(void)
{
    // informacje o teście
    test_start(315, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-424*75+493*747*318+830-+340*782+889*770", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 316: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST316(void)
{
    // informacje o teście
    test_start(316, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-932*835+241*723+248*391+955+933*278/558", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 317: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST317(void)
{
    // informacje o teście
    test_start(317, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("201-673-377*962+742-171-836-459-143-468-817*510+916*409-389+211-465+369+957-864+71+20+246-924*135-438+581*769*436*203+509*624-331-31-", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 318: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST318(void)
{
    // informacje o teście
    test_start(318, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("+234*834*110-284*592+934*300+547+529+138+481-720-936-881+404*241+479-647*663*730-619-95-695-442-214*763-656-974*890*799*567*214*67-24-308*448*745", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 319: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST319(void)
{
    // informacje o teście
    test_start(319, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("*719*226+4-909+285-166-94+292+136*613*794*422+961-943-935-115-409+714+514+117-421*303*82-121-719+266+613+875-1000+2-25*217-570-300", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 320: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST320(void)
{
    // informacje o teście
    test_start(320, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("230=736*620*367+168-34-284+753+21-661-760-383*987-137*935-940-17*90-67+516", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 321: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST321(void)
{
    // informacje o teście
    test_start(321, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("175-406+7*621+307-407+69+937.971+739*276*772", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 322: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST322(void)
{
    // informacje o teście
    test_start(322, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("694*207-737-813+652*938D738+102-410*646+144+197*785-345-767-723", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 323: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST323(void)
{
    // informacje o teście
    test_start(323, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("702+389*867+498-732\n*765-449*352+633-638-814+433+199", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 324: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST324(void)
{
    // informacje o teście
    test_start(324, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 325: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST325(void)
{
    // informacje o teście
    test_start(325, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate(" ", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 326: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST326(void)
{
    // informacje o teście
    test_start(326, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("4*204*666*381*393*145*422*747*288*549*547" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 327: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST327(void)
{
    // informacje o teście
    test_start(327, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("4*204*666*381*393*145*422*747*288*549*547" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 328: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST328(void)
{
    // informacje o teście
    test_start(328, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("4*204*666*381*393*145*422*747*288*549*547" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 329: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST329(void)
{
    // informacje o teście
    test_start(329, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("4*204*666*381*393*145*422*747*288*549*547" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 330: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST330(void)
{
    // informacje o teście
    test_start(330, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("4*204*666*381*393*145*422*747*288*549*547" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 331: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST331(void)
{
    // informacje o teście
    test_start(331, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("4*204*666*381*393*145*422*747*288*549*547" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 332: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST332(void)
{
    // informacje o teście
    test_start(332, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("4*204*666*381*393*145*422*747*288*549*547" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 333: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST333(void)
{
    // informacje o teście
    test_start(333, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("4*204*666*381*393*145*422*747*288*549*547" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 334: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST334(void)
{
    // informacje o teście
    test_start(334, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("4*204*666*381*393*145*422*747*288*549*547" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 335: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST335(void)
{
    // informacje o teście
    test_start(335, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("4*204*666*381*393*145*422*747*288*549*547" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 336: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST336(void)
{
    // informacje o teście
    test_start(336, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("4*204*666*381*393*145*422*747*288*549*547" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 337: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST337(void)
{
    // informacje o teście
    test_start(337, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("4*204*666*381*393*145*422*747*288*549*547" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 338: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST338(void)
{
    // informacje o teście
    test_start(338, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("4*204*666*381*393*145*422*747*288*549*547" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 339: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST339(void)
{
    // informacje o teście
    test_start(339, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("4*204*666*381*393*145*422*747*288*549*547" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 340: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST340(void)
{
    // informacje o teście
    test_start(340, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *result;
            int err_code = calculate(NULL, &result);
            test_error(err_code == 1, "Funkcja calculate() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 341: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST341(void)
{
    // informacje o teście
    test_start(341, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = calculate(NULL, NULL);
            test_error(err_code == 1, "Funkcja calculate() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 342: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST342(void)
{
    // informacje o teście
    test_start(342, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = calculate("-7893022309014863554059529624095868335798870356556619916865984549459951780853093088041482670634466970+-33470--67270", NULL);
            test_error(err_code == 1, "Funkcja calculate() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 343: Sprawdzanie poprawności działania funkcji calculate - limit sterty ustawiony na 0 bajtów
//
void UTEST343(void)
{
    // informacje o teście
    test_start(343, "Sprawdzanie poprawności działania funkcji calculate - limit sterty ustawiony na 0 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
        
                char *result;
                int err_code = calculate("-67270-829+-6681", &result);
                test_error(err_code == 3, "Funkcja calculate() powinna zwrócić 3 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 344: Sprawdzanie poprawności działania funkcji calculate - limit sterty ustawiony na 5 bajtów
//
void UTEST344(void)
{
    // informacje o teście
    test_start(344, "Sprawdzanie poprawności działania funkcji calculate - limit sterty ustawiony na 5 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(5);
    
    //
    // -----------
    //
    
        
                char *result;
                int err_code = calculate("-67270-829+-6681", &result);
                test_error(err_code == 3, "Funkcja calculate() powinna zwrócić 3 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak pamięci - limit pamięci ustawiony na 0 bajtów
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci - limit pamięci ustawiony na 0 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code); 
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Reakcja na brak pamięci - limit pamięci ustawiony na 510 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit pamięci ustawiony na 510 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(510);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code); 
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}


enum run_mode_t { rm_normal_with_rld = 0, rm_unit_test = 1, rm_main_test = 2 };

int __wrap_main(volatile int _argc, char** _argv, char** _envp)
{
    int volatile vargc = _argc;
    char ** volatile vargv = _argv, ** volatile venvp = _envp;
	volatile enum run_mode_t run_mode = rm_unit_test; // -1
	volatile int selected_test = -1;

    if (vargc > 1)
	{
	    char* smode = strtok(vargv[1], ",");
	    char* stest = strtok(NULL, "");
		char *errptr = NULL;
		run_mode = (enum run_mode_t)strtol(smode, &errptr, 10);
		if (*errptr == '\x0')
		{
			memmove(vargv + 1, vargv + 2, sizeof(char*) * (vargc - 1));
			vargc--;

			if (stest != NULL)
			{
			    int val = (int)strtol(stest, &errptr, 10);
			    if (*errptr == '\x0')
			        selected_test = val;
			}
		}
	}

    // printf("runmode=%d; selected_test=%d\n", run_mode, selected_test);

    // inicjuj testy jednostkowe
    unit_test_init(run_mode, "unit_test_v2.c");
    test_limit_init();
    rldebug_set_reported_severity_level(MSL_FAILURE);

    if (run_mode == rm_normal_with_rld)
    {
        // konfiguracja ograniczników
        rldebug_reset_limits();
        

        // uruchom funkcję main Studenta a potem wyświetl podsumowanie sterty i zasobów
        volatile int ret_code = rdebug_call_main(tested_main, vargc, vargv, venvp);

        rldebug_reset_limits();
        

        int leaks_detected = rldebug_show_leaked_resources(0);
        if (leaks_detected)
            raise(SIGHEAP);

        return ret_code;
    }

    
    if (run_mode == rm_unit_test)
    {
        test_title("Testy jednostkowe");

        void (*pfcn[])(void) =
        { 
            UTEST1, // Sprawdzanie poprawności działania funkcji validate
            UTEST2, // Sprawdzanie poprawności działania funkcji validate
            UTEST3, // Sprawdzanie poprawności działania funkcji validate
            UTEST4, // Sprawdzanie poprawności działania funkcji validate
            UTEST5, // Sprawdzanie poprawności działania funkcji validate
            UTEST6, // Sprawdzanie poprawności działania funkcji validate
            UTEST7, // Sprawdzanie poprawności działania funkcji validate
            UTEST8, // Sprawdzanie poprawności działania funkcji validate
            UTEST9, // Sprawdzanie poprawności działania funkcji validate
            UTEST10, // Sprawdzanie poprawności działania funkcji validate
            UTEST11, // Sprawdzanie poprawności działania funkcji validate
            UTEST12, // Sprawdzanie poprawności działania funkcji validate
            UTEST13, // Sprawdzanie poprawności działania funkcji validate
            UTEST14, // Sprawdzanie poprawności działania funkcji validate
            UTEST15, // Sprawdzanie poprawności działania funkcji validate
            UTEST16, // Sprawdzanie poprawności działania funkcji validate
            UTEST17, // Sprawdzanie poprawności działania funkcji validate
            UTEST18, // Sprawdzanie poprawności działania funkcji validate
            UTEST19, // Sprawdzanie poprawności działania funkcji validate
            UTEST20, // Sprawdzanie poprawności działania funkcji validate
            UTEST21, // Sprawdzanie poprawności działania funkcji validate
            UTEST22, // Sprawdzanie poprawności działania funkcji validate
            UTEST23, // Sprawdzanie poprawności działania funkcji validate
            UTEST24, // Sprawdzanie poprawności działania funkcji validate
            UTEST25, // Sprawdzanie poprawności działania funkcji validate
            UTEST26, // Sprawdzanie poprawności działania funkcji validate
            UTEST27, // Sprawdzanie poprawności działania funkcji validate
            UTEST28, // Sprawdzanie poprawności działania funkcji validate
            UTEST29, // Sprawdzanie poprawności działania funkcji validate
            UTEST30, // Sprawdzanie poprawności działania funkcji validate
            UTEST31, // Sprawdzanie poprawności działania funkcji validate
            UTEST32, // Sprawdzanie poprawności działania funkcji validate
            UTEST33, // Sprawdzanie poprawności działania funkcji validate
            UTEST34, // Sprawdzanie poprawności działania funkcji validate
            UTEST35, // Sprawdzanie poprawności działania funkcji validate
            UTEST36, // Sprawdzanie poprawności działania funkcji validate
            UTEST37, // Sprawdzanie poprawności działania funkcji validate
            UTEST38, // Sprawdzanie poprawności działania funkcji validate
            UTEST39, // Sprawdzanie poprawności działania funkcji validate
            UTEST40, // Sprawdzanie poprawności działania funkcji validate
            UTEST41, // Sprawdzanie poprawności działania funkcji validate
            UTEST42, // Sprawdzanie poprawności działania funkcji validate
            UTEST43, // Sprawdzanie poprawności działania funkcji validate
            UTEST44, // Sprawdzanie poprawności działania funkcji validate
            UTEST45, // Sprawdzanie poprawności działania funkcji validate
            UTEST46, // Sprawdzanie poprawności działania funkcji validate
            UTEST47, // Sprawdzanie poprawności działania funkcji validate
            UTEST48, // Sprawdzanie poprawności działania funkcji validate
            UTEST49, // Sprawdzanie poprawności działania funkcji validate
            UTEST50, // Sprawdzanie poprawności działania funkcji validate
            UTEST51, // Sprawdzanie poprawności działania funkcji validate
            UTEST52, // Sprawdzanie poprawności działania funkcji validate
            UTEST53, // Sprawdzanie poprawności działania funkcji validate
            UTEST54, // Sprawdzanie poprawności działania funkcji validate
            UTEST55, // Sprawdzanie poprawności działania funkcji validate
            UTEST56, // Sprawdzanie poprawności działania funkcji validate
            UTEST57, // Sprawdzanie poprawności działania funkcji validate
            UTEST58, // Sprawdzanie poprawności działania funkcji validate
            UTEST59, // Sprawdzanie poprawności działania funkcji validate
            UTEST60, // Sprawdzanie poprawności działania funkcji validate
            UTEST61, // Sprawdzanie poprawności działania funkcji validate
            UTEST62, // Sprawdzanie poprawności działania funkcji validate
            UTEST63, // Sprawdzanie poprawności działania funkcji validate
            UTEST64, // Sprawdzanie poprawności działania funkcji validate
            UTEST65, // Sprawdzanie poprawności działania funkcji validate
            UTEST66, // Sprawdzanie poprawności działania funkcji validate
            UTEST67, // Sprawdzanie poprawności działania funkcji validate
            UTEST68, // Sprawdzanie poprawności działania funkcji validate
            UTEST69, // Sprawdzanie poprawności działania funkcji validate
            UTEST70, // Sprawdzanie poprawności działania funkcji validate
            UTEST71, // Sprawdzanie poprawności działania funkcji validate
            UTEST72, // Sprawdzanie poprawności działania funkcji validate
            UTEST73, // Sprawdzanie poprawności działania funkcji validate
            UTEST74, // Sprawdzanie poprawności działania funkcji validate
            UTEST75, // Sprawdzanie poprawności działania funkcji validate
            UTEST76, // Sprawdzanie poprawności działania funkcji validate
            UTEST77, // Sprawdzanie poprawności działania funkcji validate
            UTEST78, // Sprawdzanie poprawności działania funkcji validate
            UTEST79, // Sprawdzanie poprawności działania funkcji validate
            UTEST80, // Sprawdzanie poprawności działania funkcji validate
            UTEST81, // Sprawdzanie poprawności działania funkcji validate
            UTEST82, // Sprawdzanie poprawności działania funkcji validate
            UTEST83, // Sprawdzanie poprawności działania funkcji validate
            UTEST84, // Sprawdzanie poprawności działania funkcji validate
            UTEST85, // Sprawdzanie poprawności działania funkcji validate
            UTEST86, // Sprawdzanie poprawności działania funkcji validate
            UTEST87, // Sprawdzanie poprawności działania funkcji validate
            UTEST88, // Sprawdzanie poprawności działania funkcji validate
            UTEST89, // Sprawdzanie poprawności działania funkcji validate
            UTEST90, // Sprawdzanie poprawności działania funkcji validate
            UTEST91, // Sprawdzanie poprawności działania funkcji validate
            UTEST92, // Sprawdzanie poprawności działania funkcji validate
            UTEST93, // Sprawdzanie poprawności działania funkcji validate
            UTEST94, // Sprawdzanie poprawności działania funkcji validate
            UTEST95, // Sprawdzanie poprawności działania funkcji validate
            UTEST96, // Sprawdzanie poprawności działania funkcji validate
            UTEST97, // Sprawdzanie poprawności działania funkcji validate
            UTEST98, // Sprawdzanie poprawności działania funkcji validate
            UTEST99, // Sprawdzanie poprawności działania funkcji validate
            UTEST100, // Sprawdzanie poprawności działania funkcji validate
            UTEST101, // Sprawdzanie poprawności działania funkcji validate
            UTEST102, // Sprawdzanie poprawności działania funkcji validate
            UTEST103, // Sprawdzanie poprawności działania funkcji validate
            UTEST104, // Sprawdzanie poprawności działania funkcji validate
            UTEST105, // Sprawdzanie poprawności działania funkcji validate
            UTEST106, // Sprawdzanie poprawności działania funkcji validate
            UTEST107, // Sprawdzanie poprawności działania funkcji validate
            UTEST108, // Sprawdzanie poprawności działania funkcji validate
            UTEST109, // Sprawdzanie poprawności działania funkcji validate
            UTEST110, // Sprawdzanie poprawności działania funkcji validate
            UTEST111, // Sprawdzanie poprawności działania funkcji validate
            UTEST112, // Sprawdzanie poprawności działania funkcji validate
            UTEST113, // Sprawdzanie poprawności działania funkcji validate
            UTEST114, // Sprawdzanie poprawności działania funkcji validate
            UTEST115, // Sprawdzanie poprawności działania funkcji validate
            UTEST116, // Sprawdzanie poprawności działania funkcji validate
            UTEST117, // Sprawdzanie poprawności działania funkcji validate
            UTEST118, // Sprawdzanie poprawności działania funkcji validate
            UTEST119, // Sprawdzanie poprawności działania funkcji validate
            UTEST120, // Sprawdzanie poprawności działania funkcji validate
            UTEST121, // Sprawdzanie poprawności działania funkcji validate
            UTEST122, // Sprawdzanie poprawności działania funkcji validate
            UTEST123, // Sprawdzanie poprawności działania funkcji validate
            UTEST124, // Sprawdzanie poprawności działania funkcji validate
            UTEST125, // Sprawdzanie poprawności działania funkcji validate
            UTEST126, // Sprawdzanie poprawności działania funkcji validate
            UTEST127, // Sprawdzanie poprawności działania funkcji validate
            UTEST128, // Sprawdzanie poprawności działania funkcji validate
            UTEST129, // Sprawdzanie poprawności działania funkcji validate
            UTEST130, // Sprawdzanie poprawności działania funkcji validate
            UTEST131, // Sprawdzanie poprawności działania funkcji validate
            UTEST132, // Sprawdzanie poprawności działania funkcji validate
            UTEST133, // Sprawdzanie poprawności działania funkcji validate
            UTEST134, // Sprawdzanie poprawności działania funkcji validate
            UTEST135, // Sprawdzanie poprawności działania funkcji validate
            UTEST136, // Sprawdzanie poprawności działania funkcji validate
            UTEST137, // Sprawdzanie poprawności działania funkcji validate
            UTEST138, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
            UTEST139, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
            UTEST140, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
            UTEST141, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
            UTEST142, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
            UTEST143, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
            UTEST144, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
            UTEST145, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
            UTEST146, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 376 bajtów
            UTEST147, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 377 bajtów
            UTEST148, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 377 bajtów
            UTEST149, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 377 bajtów
            UTEST150, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 377 bajtów
            UTEST151, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 281 bajtów
            UTEST152, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 282 bajtów
            UTEST153, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 282 bajtów
            UTEST154, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 282 bajtów
            UTEST155, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 282 bajtów
            UTEST156, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 21 bajtów
            UTEST157, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 22 bajtów
            UTEST158, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 21 bajtów
            UTEST159, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 22 bajtów
            UTEST160, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 22 bajtów
            UTEST161, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 17 bajtów
            UTEST162, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 17 bajtów
            UTEST163, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 18 bajtów
            UTEST164, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 18 bajtów
            UTEST165, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 316 bajtów
            UTEST166, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 316 bajtów
            UTEST167, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 18 bajtów
            UTEST168, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 18 bajtów
            UTEST169, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
            UTEST170, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
            UTEST171, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
            UTEST172, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
            UTEST173, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów
            UTEST174, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów
            UTEST175, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
            UTEST176, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
            UTEST177, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 2 bajtów
            UTEST178, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 2 bajtów
            UTEST179, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 1 bajtów
            UTEST180, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 1 bajtów
            UTEST181, // Sprawdzanie poprawności działania funkcji add
            UTEST182, // Sprawdzanie poprawności działania funkcji add
            UTEST183, // Sprawdzanie poprawności działania funkcji add
            UTEST184, // Sprawdzanie poprawności działania funkcji add
            UTEST185, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
            UTEST186, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST187, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
            UTEST188, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST189, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST190, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST191, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
            UTEST192, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST193, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST194, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST195, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 486 bajtów
            UTEST196, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 486 bajtów
            UTEST197, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 299 bajtów
            UTEST198, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 300 bajtów
            UTEST199, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 300 bajtów
            UTEST200, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 300 bajtów
            UTEST201, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 24 bajtów
            UTEST202, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 24 bajtów
            UTEST203, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów
            UTEST204, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 22 bajtów
            UTEST205, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów
            UTEST206, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 22 bajtów
            UTEST207, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów
            UTEST208, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów
            UTEST209, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 22 bajtów
            UTEST210, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 23 bajtów
            UTEST211, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 22 bajtów
            UTEST212, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów
            UTEST213, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
            UTEST214, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
            UTEST215, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów
            UTEST216, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów
            UTEST217, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
            UTEST218, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST219, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 3 bajtów
            UTEST220, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 3 bajtów
            UTEST221, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 2 bajtów
            UTEST222, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 1 bajtów
            UTEST223, // Sprawdzanie poprawności działania funkcji subtract
            UTEST224, // Sprawdzanie poprawności działania funkcji subtract
            UTEST225, // Sprawdzanie poprawności działania funkcji subtract
            UTEST226, // Sprawdzanie poprawności działania funkcji subtract
            UTEST227, // Sprawdzanie poprawności działania funkcji multiply
            UTEST228, // Sprawdzanie poprawności działania funkcji multiply
            UTEST229, // Sprawdzanie poprawności działania funkcji multiply
            UTEST230, // Sprawdzanie poprawności działania funkcji multiply
            UTEST231, // Sprawdzanie poprawności działania funkcji multiply
            UTEST232, // Sprawdzanie poprawności działania funkcji multiply
            UTEST233, // Sprawdzanie poprawności działania funkcji multiply
            UTEST234, // Sprawdzanie poprawności działania funkcji multiply
            UTEST235, // Sprawdzanie poprawności działania funkcji multiply
            UTEST236, // Sprawdzanie poprawności działania funkcji multiply
            UTEST237, // Sprawdzanie poprawności działania funkcji multiply
            UTEST238, // Sprawdzanie poprawności działania funkcji multiply
            UTEST239, // Sprawdzanie poprawności działania funkcji multiply
            UTEST240, // Sprawdzanie poprawności działania funkcji multiply
            UTEST241, // Sprawdzanie poprawności działania funkcji multiply
            UTEST242, // Sprawdzanie poprawności działania funkcji multiply
            UTEST243, // Sprawdzanie poprawności działania funkcji multiply
            UTEST244, // Sprawdzanie poprawności działania funkcji multiply
            UTEST245, // Sprawdzanie poprawności działania funkcji multiply
            UTEST246, // Sprawdzanie poprawności działania funkcji multiply
            UTEST247, // Sprawdzanie poprawności działania funkcji multiply
            UTEST248, // Sprawdzanie poprawności działania funkcji multiply
            UTEST249, // Sprawdzanie poprawności działania funkcji multiply
            UTEST250, // Sprawdzanie poprawności działania funkcji multiply
            UTEST251, // Sprawdzanie poprawności działania funkcji multiply
            UTEST252, // Sprawdzanie poprawności działania funkcji multiply
            UTEST253, // Sprawdzanie poprawności działania funkcji multiply
            UTEST254, // Sprawdzanie poprawności działania funkcji multiply
            UTEST255, // Sprawdzanie poprawności działania funkcji multiply
            UTEST256, // Sprawdzanie poprawności działania funkcji multiply
            UTEST257, // Sprawdzanie poprawności działania funkcji multiply
            UTEST258, // Sprawdzanie poprawności działania funkcji multiply
            UTEST259, // Sprawdzanie poprawności działania funkcji multiply
            UTEST260, // Sprawdzanie poprawności działania funkcji multiply
            UTEST261, // Sprawdzanie poprawności działania funkcji multiply
            UTEST262, // Sprawdzanie poprawności działania funkcji multiply
            UTEST263, // Sprawdzanie poprawności działania funkcji multiply
            UTEST264, // Sprawdzanie poprawności działania funkcji multiply
            UTEST265, // Sprawdzanie poprawności działania funkcji multiply
            UTEST266, // Sprawdzanie poprawności działania funkcji multiply
            UTEST267, // Sprawdzanie poprawności działania funkcji multiply
            UTEST268, // Sprawdzanie poprawności działania funkcji multiply
            UTEST269, // Sprawdzanie poprawności działania funkcji multiply
            UTEST270, // Sprawdzanie poprawności działania funkcji multiply - limit sterty ustawiony na 0 bajtów
            UTEST271, // Sprawdzanie poprawności działania funkcji multiply - limit sterty ustawiony na 6 bajtów
            UTEST272, // Sprawdzanie poprawności działania funkcji compare
            UTEST273, // Sprawdzanie poprawności działania funkcji compare
            UTEST274, // Sprawdzanie poprawności działania funkcji compare
            UTEST275, // Sprawdzanie poprawności działania funkcji compare
            UTEST276, // Sprawdzanie poprawności działania funkcji compare
            UTEST277, // Sprawdzanie poprawności działania funkcji compare
            UTEST278, // Sprawdzanie poprawności działania funkcji compare
            UTEST279, // Sprawdzanie poprawności działania funkcji compare
            UTEST280, // Sprawdzanie poprawności działania funkcji compare
            UTEST281, // Sprawdzanie poprawności działania funkcji compare
            UTEST282, // Sprawdzanie poprawności działania funkcji compare
            UTEST283, // Sprawdzanie poprawności działania funkcji compare
            UTEST284, // Sprawdzanie poprawności działania funkcji compare
            UTEST285, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST286, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST287, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST288, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST289, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST290, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST291, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST292, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST293, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST294, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST295, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST296, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST297, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST298, // Sprawdzanie poprawności działania funkcji calculate
            UTEST299, // Sprawdzanie poprawności działania funkcji calculate
            UTEST300, // Sprawdzanie poprawności działania funkcji calculate
            UTEST301, // Sprawdzanie poprawności działania funkcji calculate
            UTEST302, // Sprawdzanie poprawności działania funkcji calculate
            UTEST303, // Sprawdzanie poprawności działania funkcji calculate
            UTEST304, // Sprawdzanie poprawności działania funkcji calculate
            UTEST305, // Sprawdzanie poprawności działania funkcji calculate
            UTEST306, // Sprawdzanie poprawności działania funkcji calculate
            UTEST307, // Sprawdzanie poprawności działania funkcji calculate
            UTEST308, // Sprawdzanie poprawności działania funkcji calculate
            UTEST309, // Sprawdzanie poprawności działania funkcji calculate
            UTEST310, // Sprawdzanie poprawności działania funkcji calculate
            UTEST311, // Sprawdzanie poprawności działania funkcji calculate
            UTEST312, // Sprawdzanie poprawności działania funkcji calculate
            UTEST313, // Sprawdzanie poprawności działania funkcji calculate
            UTEST314, // Sprawdzanie poprawności działania funkcji calculate
            UTEST315, // Sprawdzanie poprawności działania funkcji calculate
            UTEST316, // Sprawdzanie poprawności działania funkcji calculate
            UTEST317, // Sprawdzanie poprawności działania funkcji calculate
            UTEST318, // Sprawdzanie poprawności działania funkcji calculate
            UTEST319, // Sprawdzanie poprawności działania funkcji calculate
            UTEST320, // Sprawdzanie poprawności działania funkcji calculate
            UTEST321, // Sprawdzanie poprawności działania funkcji calculate
            UTEST322, // Sprawdzanie poprawności działania funkcji calculate
            UTEST323, // Sprawdzanie poprawności działania funkcji calculate
            UTEST324, // Sprawdzanie poprawności działania funkcji calculate
            UTEST325, // Sprawdzanie poprawności działania funkcji calculate
            UTEST326, // Sprawdzanie poprawności działania funkcji calculate
            UTEST327, // Sprawdzanie poprawności działania funkcji calculate
            UTEST328, // Sprawdzanie poprawności działania funkcji calculate
            UTEST329, // Sprawdzanie poprawności działania funkcji calculate
            UTEST330, // Sprawdzanie poprawności działania funkcji calculate
            UTEST331, // Sprawdzanie poprawności działania funkcji calculate
            UTEST332, // Sprawdzanie poprawności działania funkcji calculate
            UTEST333, // Sprawdzanie poprawności działania funkcji calculate
            UTEST334, // Sprawdzanie poprawności działania funkcji calculate
            UTEST335, // Sprawdzanie poprawności działania funkcji calculate
            UTEST336, // Sprawdzanie poprawności działania funkcji calculate
            UTEST337, // Sprawdzanie poprawności działania funkcji calculate
            UTEST338, // Sprawdzanie poprawności działania funkcji calculate
            UTEST339, // Sprawdzanie poprawności działania funkcji calculate
            UTEST340, // Sprawdzanie poprawności działania funkcji calculate
            UTEST341, // Sprawdzanie poprawności działania funkcji calculate
            UTEST342, // Sprawdzanie poprawności działania funkcji calculate
            UTEST343, // Sprawdzanie poprawności działania funkcji calculate - limit sterty ustawiony na 0 bajtów
            UTEST344, // Sprawdzanie poprawności działania funkcji calculate - limit sterty ustawiony na 5 bajtów
            NULL
        };

        for (int idx = 0; pfcn[idx] != NULL && !test_get_session_termination_flag(); idx++)
        {
            if (selected_test == -1 || selected_test == idx + 1)
                pfcn[idx]();

            // limit niezaliczonych testów, po jakim testy jednostkowe zostaną przerwane
            if (test_session_get_fail_count() >= 1000)
                test_terminate_session();
        }


        test_title("RLDebug :: Analiza wycieku zasobów");
        // sprawdź wycieki pamięci
        int leaks_detected = rldebug_show_leaked_resources(1);
        test_set_session_leaks(leaks_detected);

        // poinformuj serwer Mrówka o wyniku testu - podsumowanie
        test_title("Podsumowanie");
        if (selected_test == -1)
            test_summary(344); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci - limit pamięci ustawiony na 0 bajtów
            MTEST2, // Reakcja na brak pamięci - limit pamięci ustawiony na 510 bajtów
            NULL
        };

        for (volatile int idx = 0; pfcn[idx] != NULL && !test_get_session_termination_flag(); idx++)
        {
            if (selected_test == -1 || selected_test == idx + 1)
                pfcn[idx](vargc, vargv, venvp);

            // limit niezaliczonych testów, po jakim testy jednostkowe zostaną przerwane
            if (test_session_get_fail_count() >= 1000)
                test_terminate_session();
        }


        test_title("RLDebug :: Analiza wycieku zasobów");
        // sprawdź wycieki pamięci
        int leaks_detected = rldebug_show_leaked_resources(1);
        test_set_session_leaks(leaks_detected);

        // poinformuj serwer Mrówka o wyniku testu - podsumowanie
        test_title("Podsumowanie");
        if (selected_test == -1)
            test_summary(2); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}