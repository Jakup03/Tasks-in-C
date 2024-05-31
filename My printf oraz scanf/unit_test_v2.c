/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Wejście / wyjście
 * Autor testowanej odpowiedzi: Jakub Sońta
 * Test wygenerowano automatycznie o 2022-05-18 19:42:16.016470
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


    
            struct point_t
            {
            
                int x, y;
            };
    


//
//  Test 1: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 3;
                    
                    printf("----START----");
                    int res = my_printf("%d", 955);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 3, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 4;
                    
                    printf("----START----");
                    int res = my_printf("%d", -825);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 4, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 1;
                    
                    printf("----START----");
                    int res = my_printf("%d", 0);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 1, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 10;
                    
                    printf("----START----");
                    int res = my_printf("%d", -624880593);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 10, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 9;
                    
                    printf("----START----");
                    int res = my_printf("%p", (struct point_t){ 740, 699 });
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 9, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 11;
                    
                    printf("----START----");
                    int res = my_printf("%p", (struct point_t){ -730, -543 });
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 11, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 8;
                    
                    printf("----START----");
                    int res = my_printf("%p", (struct point_t){ 0, -517 });
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 8, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 7;
                    
                    printf("----START----");
                    int res = my_printf("%p", (struct point_t){ -82, 0 });
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 7, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 23;
                    
                    printf("----START----");
                    int res = my_printf("%p", (struct point_t){ 1333926140, -244084613 });
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 23, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 9;
                    
                    printf("----START----");
                    int res = my_printf("%f", 424.0125679660891);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 9, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 10;
                    
                    printf("----START----");
                    int res = my_printf("%f", -218.56465427962556);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 10, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 7;
                    
                    printf("----START----");
                    int res = my_printf("%f", 0);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 7, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 16;
                    
                    printf("----START----");
                    int res = my_printf("%f", -360854211.5474613);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 16, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 8;
                    
                    printf("----START----");
                    int res = my_printf("%f", 34.00043);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 8, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 61;
                    
                    printf("----START----");
                    int res = my_printf("%s", "Without music, life would be a mistake. - Friedrich Nietzsche");
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 61, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 832;
                    
                    printf("----START----");
                    int res = my_printf("%s", "Humanity is acquiring all the right technology for all the wrong reasons.-R. Buckminster Fuller\nYou know youre in love when you cant fall asleep because reality is finally better than your dreams. - Dr. Seuss\nEducation is the passport to the future, for tomorrow belongs to those who prepare for it today. - Malcolm X\nA day without laughter is a day wasted. - Nicolas Chamfort\nObject-oriented programming is an exceptionally bad idea which could only have originated in California. - Edsger Dijkstra\nI love you without knowing how, or when, or from where. I love you simply, without problems or pride: I love you in this way because I do not know any other way of loving but this, in which there is no I or you, so intimate that your hand upon my chest is my hand, so intimate that when I fall asleep your eyes close. - Pablo Neruda");
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 832, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 312;
                    
                    printf("----START----");
                    int res = my_printf("%s %d %s", "The factory of the future will have only two employees, a man, and a dog.  The man will be there to feed the dog.  The dog will be there to keep the man from touching the equipment.  - Warren G. Bennis", -253, "Sometimes you wake up. Sometimes the fall kills you. And sometimes, when you fall, you fly. - Neil Gaiman");
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 312, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 257;
                    
                    printf("----START----");
                    int res = my_printf("%s %d %p %d %s %p %p %p %p %p ", "Ill make him an offer he cant refuse. - Mario Puzo, The Godfather", 99, (struct point_t){ 6, -39 }, -2, "Computers make it easier to do a lot of things, but most of the things they make it easier to do dont need to be done.  - Andy Rooney", (struct point_t){ -2, 95 }, (struct point_t){ 58, -100 }, (struct point_t){ 50, -55 }, (struct point_t){ 57, 39 }, (struct point_t){ 39, 88 });
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 257, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 4976;
                    
                    printf("----START----");
                    int res = my_printf("%p %s %p %p %s %s %p %d %s %s %s %d %d %d %s %s %d %s %d %s %p %p %s %s %s %p %p %p %s %s %s %s %p %d %d %d %p %p %d %d %s %p %d %s %d %p %s %p %d %d %d %p %d %s %p %p %p %s %p %p %p %s %s %s %s %d %s %p %p %s %p %d %s %p %s %d %d %s %d %s %d %s %p %d %s %s %d %d %d %p %d %p %d %s %s %s %s %d %p %p ", (struct point_t){ 22, 13 }, "I invented the term Object-Oriented, and I can tell you I did not have C++ in mind. - Alan Kay", (struct point_t){ -38, 92 }, (struct point_t){ -85, -14 }, "The most beautiful experience we can have is the mysterious. It is the fundamental emotion that stands at the cradle of true art and true science. - Albert Einstein", "For every reason its not possible, there are hundreds of people who have faced the same circumstances and succeeded. - Jack Canfield", (struct point_t){ 11, -13 }, 35, "We are looking at a society increasingly dependent on machines, yet decreasingly capable of making or even using them effectively. - Douglas Rushkoff", "Above all, dont lie to yourself. The man who lies to himself and listens to his own lie comes to a point that he cannot distinguish the truth within him, or around him, and so loses all respect for himself and for others. And having no respect he ceases to love. - Fyodor Dostoyevsky", "A room without books is like a body without a soul. - Marcus Tullius Cicero", -90, 87, 33, "Pain is temporary. Quitting lasts forever. - Lance Armstrong", "The truth. Dumbledore sighed. It is a beautiful and terrible thing, and should therefore be treated with great caution. - J.K. Rowling", -59, "Technology made large populations possible; large populations now make technology indispensable.-Joseph Wood Krutch", 1, "The use of COBOL cripples the mind; its teaching should therefore be regarded as a criminal offense. - E.W. Dijkstra", (struct point_t){ 71, -86 }, (struct point_t){ 72, 10 }, "First learn computer science and all the theory. Next develop a programming style. Then forget all that and just hack. - George Carrette", "Technology is anything that wasnt around when you were born.-Alan Kay", "Hardware: The parts of a computer system that can be kicked. - Jeff Pesis", (struct point_t){ 14, 59 }, (struct point_t){ 97, -49 }, (struct point_t){ -52, -37 }, "Technology made large populations possible; large populations now make technology indispensable.-Joseph Wood Krutch", "Computer science education cannot make anybody an expert programmer any more than studying brushes and pigment can make somebody an expert painter. - Eric S. Raymond", "The problem with troubleshooting is that trouble shoots back.  - Author Unknown", "To iterate is human, to recurse divine. - L. Peter Deutsch", (struct point_t){ 100, -54 }, -58, -58, 97, (struct point_t){ 88, -79 }, (struct point_t){ -1, -71 }, 23, -23, "I just invent. Then I wait until man comes around to needing what Ive invented. - Richard Buckminster Fuller", (struct point_t){ -74, 34 }, -72, "Information technology is at the core of how you do your business and how your business model itself evolves. - Satya Nadella", -70, (struct point_t){ -81, -85 }, "Be the change that you wish to see in the world. - Mahatma Gandhi", (struct point_t){ 80, -72 }, -77, 23, -15, (struct point_t){ -90, 52 }, -25, "The real danger is not that computers will begin to think like men, but that men will begin to think like computers.-Sydney J. Harris", (struct point_t){ 75, 57 }, (struct point_t){ 20, -52 }, (struct point_t){ -64, 48 }, "The flower that blooms in adversity is the rarest and most beautiful of all. - Walt Disney Company", (struct point_t){ 25, 43 }, (struct point_t){ -55, -33 }, (struct point_t){ -15, -86 }, "PHP is a minor evil perpetrated and created by incompetent amateurs, whereas Perl is a great and insidious evil, perpetrated by skilled but perverted professionals. - Jon Ribbens", "If computers get too powerful, we can organize them into committees.  Thatll do them in.  - Author Unknown", "I am not pretty. I am not beautiful. I am as radiant as the sun. - Suzanne Collins", "People who are crazy enough to think they can change the world, are the ones who do.- Rob Siltanen", -13, "Technology just means information technology. - Peter Thiel", (struct point_t){ 70, 60 }, (struct point_t){ 18, 68 }, "Do you want to know who you are? Dont ask. Act! Action will delineate and define you. - Thomas Jefferson", (struct point_t){ -8, -43 }, 55, "I like the dreams of the future better than the history of the past. - Thomas Jefferson", (struct point_t){ 52, -4 }, "We may encounter many defeats but we must not be defeated.- Maya Angelou", 26, -57, "May you live every day of your life. - Jonathan Swift", -50, "Ninety percent of games lose money; 10 percent make a lot of money. And theres a consistency around the competitive advantages you create, so if you can actually learn how to do the art, the design, and the programming, you would be consistently very profitable. - Gabe Newell", -89, "The most important property of a program is whether it accomplishes the intention of its user. - C.A.R. Hoare", (struct point_t){ 63, 69 }, 41, "Creativity is intelligence having fun.- Albert Einstein", "Yesterdays the past, tomorrows the future, but today is a gift. Thats why its called the present. - Bil Keane", -68, -50, -5, (struct point_t){ 98, -84 }, -77, (struct point_t){ -72, 47 }, -48, "Imagine your life is perfect in every respect; what would it look like?- Brian Tracy", "People think that computer science is the art of geniuses but the actual reality is the opposite, just many people doing things that build on each other, like a wall of mini stones. - Donald Knuth", "Technology frightens me to death. Its designed by engineers to impress other engineers. And they always come with instruction booklets that are written by engineers for other engineers - which is why almost no technology ever works.-John Cleese", "It has become appallingly obvious that our technology has exceeded our humanity.-Albert Einstein", -62, (struct point_t){ 3, 96 }, (struct point_t){ -35, -79 });
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 4976, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    int a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%d", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a == 37, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 37, a jest %d", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    int a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%d", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a == -72, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -72, a jest %d", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    int a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%d", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a == 0, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %d", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    int a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%d", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a == -887469881, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -887469881, a jest %d", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 2;
                    struct point_t a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 2, a jest %d", res);
                    
                test_error(a.x == 24, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 24, a jest %d", a.x);
                test_error(a.y == 10, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 10, a jest %d", a.y);            
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 2;
                    struct point_t a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 2, a jest %d", res);
                    
                test_error(a.x == -64, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -64, a jest %d", a.x);
                test_error(a.y == -77, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -77, a jest %d", a.y);            
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 2;
                    struct point_t a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 2, a jest %d", res);
                    
                test_error(a.x == 0, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %d", a.x);
                test_error(a.y == -36, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -36, a jest %d", a.y);            
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 2;
                    struct point_t a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 2, a jest %d", res);
                    
                test_error(a.x == -54, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -54, a jest %d", a.x);
                test_error(a.y == 0, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %d", a.y);            
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 2;
                    struct point_t a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 2, a jest %d", res);
                    
                test_error(a.x == 1744505811, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 1744505811, a jest %d", a.x);
                test_error(a.y == 2088515148, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 2088515148, a jest %d", a.y);            
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    double a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%f", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a > 62.721087944227804 && a < 62.72128794422781, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 62.72118794422781, a jest %lf", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    double a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%f", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a > -20.730971969617695 && a < -20.730771969617695, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -20.730871969617695, a jest %lf", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    double a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%f", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a > -0.0001 && a < 0.0001, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %lf", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 68;
                    struct point_t a;
    struct point_t b;
    double c;
    double d;
    double e;
    double f;
    double g;
    int h;
    struct point_t i;
    struct point_t j;
    double k;
    struct point_t l;
    double m;
    double n;
    int o;
    struct point_t p;
    int q;
    double r;
    struct point_t s;
    struct point_t t;
    double u;
    int v;
    struct point_t w;
    double x;
    struct point_t y;
    double z;
    int A;
    double B;
    double C;
    double D;
    struct point_t E;
    int F;
    struct point_t G;
    double H;
    struct point_t I;
    struct point_t J;
    int K;
    double L;
    int M;
    double N;
    int O;
    double P;
    int Q;
    struct point_t R;
    double S;
    struct point_t T;
    double U;
    double V;
    double W;
    int X;
    int Y;
    double Z;

                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p %p %f %f %f %f %f %d %p %p %f %p %f %f %d %p %d %f %p %p %f %d %p %f %p %f %d %f %f %f %p %d %p %f %p %p %d %f %d %f %d %f %d %p %f %p %f %f %f %d %d %f ", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p, &q, &r, &s, &t, &u, &v, &w, &x, &y, &z, &A, &B, &C, &D, &E, &F, &G, &H, &I, &J, &K, &L, &M, &N, &O, &P, &Q, &R, &S, &T, &U, &V, &W, &X, &Y, &Z);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 68, a jest %d", res);
                    
                            test_error(a.x == 29, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 29, a jest %d", a.x);
                            test_error(a.y == -26, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -26, a jest %d", a.y);            
                    
                            test_error(b.x == -79, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -79, a jest %d", b.x);
                            test_error(b.y == -91, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -91, a jest %d", b.y);            
                    
                        test_error(c > -405.05690191796805 && c < -405.0567019179681, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -405.0568019179681, a jest %lf", c);
                
                        test_error(d > -685.4365001824929 && d < -685.4363001824929, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -685.4364001824929, a jest %lf", d);
                
                        test_error(e > -781.1429905330957 && e < -781.1427905330958, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -781.1428905330957, a jest %lf", e);
                
                        test_error(f > -85.39477636968482 && f < -85.39457636968481, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -85.39467636968482, a jest %lf", f);
                
                        test_error(g > -291.31024779594077 && g < -291.3100477959408, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -291.3101477959408, a jest %lf", g);
                
                        test_error(h == 3, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 3, a jest %d", h);
                
                            test_error(i.x == -32, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -32, a jest %d", i.x);
                            test_error(i.y == -63, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -63, a jest %d", i.y);            
                    
                            test_error(j.x == -30, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -30, a jest %d", j.x);
                            test_error(j.y == -72, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -72, a jest %d", j.y);            
                    
                        test_error(k > -146.12886762740018 && k < -146.12866762740018, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -146.12876762740018, a jest %lf", k);
                
                            test_error(l.x == -46, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -46, a jest %d", l.x);
                            test_error(l.y == -66, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -66, a jest %d", l.y);            
                    
                        test_error(m > -604.3490335981005 && m < -604.3488335981006, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -604.3489335981005, a jest %lf", m);
                
                        test_error(n > -974.2189698809647 && n < -974.2187698809647, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -974.2188698809647, a jest %lf", n);
                
                        test_error(o == 16, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 16, a jest %d", o);
                
                            test_error(p.x == 75, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 75, a jest %d", p.x);
                            test_error(p.y == 40, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 40, a jest %d", p.y);            
                    
                        test_error(q == 16, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 16, a jest %d", q);
                
                        test_error(r > -179.78553082805107 && r < -179.78533082805106, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -179.78543082805106, a jest %lf", r);
                
                            test_error(s.x == 49, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 49, a jest %d", s.x);
                            test_error(s.y == -24, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -24, a jest %d", s.y);            
                    
                            test_error(t.x == 14, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 14, a jest %d", t.x);
                            test_error(t.y == -79, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -79, a jest %d", t.y);            
                    
                        test_error(u > -977.9838049350813 && u < -977.9836049350813, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -977.9837049350813, a jest %lf", u);
                
                        test_error(v == -84, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -84, a jest %d", v);
                
                            test_error(w.x == 5, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 5, a jest %d", w.x);
                            test_error(w.y == -47, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -47, a jest %d", w.y);            
                    
                        test_error(x > -466.14051890831126 && x < -466.1403189083113, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -466.1404189083113, a jest %lf", x);
                
                            test_error(y.x == -59, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -59, a jest %d", y.x);
                            test_error(y.y == -45, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -45, a jest %d", y.y);            
                    
                        test_error(z > -207.20698045978784 && z < -207.20678045978784, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -207.20688045978784, a jest %lf", z);
                
                        test_error(A == 32, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 32, a jest %d", A);
                
                        test_error(B > -883.9842511282632 && B < -883.9840511282632, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -883.9841511282632, a jest %lf", B);
                
                        test_error(C > -69.84230169604317 && C < -69.84210169604316, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -69.84220169604316, a jest %lf", C);
                
                        test_error(D > -676.9159751415843 && D < -676.9157751415844, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -676.9158751415844, a jest %lf", D);
                
                            test_error(E.x == 58, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 58, a jest %d", E.x);
                            test_error(E.y == 68, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 68, a jest %d", E.y);            
                    
                        test_error(F == 94, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 94, a jest %d", F);
                
                            test_error(G.x == 83, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 83, a jest %d", G.x);
                            test_error(G.y == 90, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 90, a jest %d", G.y);            
                    
                        test_error(H > -565.2938042643303 && H < -565.2936042643304, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -565.2937042643304, a jest %lf", H);
                
                            test_error(I.x == 62, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 62, a jest %d", I.x);
                            test_error(I.y == 95, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 95, a jest %d", I.y);            
                    
                            test_error(J.x == -57, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -57, a jest %d", J.x);
                            test_error(J.y == -8, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -8, a jest %d", J.y);            
                    
                        test_error(K == 57, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 57, a jest %d", K);
                
                        test_error(L > -319.9772588883949 && L < -319.97705888839494, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -319.9771588883949, a jest %lf", L);
                
                        test_error(M == -14, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -14, a jest %d", M);
                
                        test_error(N > -119.0786499230966 && N < -119.0784499230966, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -119.0785499230966, a jest %lf", N);
                
                        test_error(O == 80, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 80, a jest %d", O);
                
                        test_error(P > -509.4689338083516 && P < -509.46873380835166, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -509.46883380835163, a jest %lf", P);
                
                        test_error(Q == 59, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 59, a jest %d", Q);
                
                            test_error(R.x == -69, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -69, a jest %d", R.x);
                            test_error(R.y == 29, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 29, a jest %d", R.y);            
                    
                        test_error(S > -795.2353843950706 && S < -795.2351843950706, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -795.2352843950706, a jest %lf", S);
                
                            test_error(T.x == 39, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 39, a jest %d", T.x);
                            test_error(T.y == -16, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -16, a jest %d", T.y);            
                    
                        test_error(U > -847.6002854233299 && U < -847.6000854233299, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -847.6001854233299, a jest %lf", U);
                
                        test_error(V > -331.50776152181413 && V < -331.5075615218142, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -331.50766152181416, a jest %lf", V);
                
                        test_error(W > -959.4501305843505 && W < -959.4499305843506, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -959.4500305843505, a jest %lf", W);
                
                        test_error(X == 68, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 68, a jest %d", X);
                
                        test_error(Y == -3, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -3, a jest %d", Y);
                
                        test_error(Z > -896.2593402846319 && Z < -896.2591402846319, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -896.2592402846319, a jest %lf", Z);
                
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    int a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%d", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a == -31, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -31, a jest %d", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 0;
                    int a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%d", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %d", res);
                    
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    double a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%f", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a > 99.9999 && a < 100.0001, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 100, a jest %lf", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 0;
                    double a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%f", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %d", res);
                    
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    double a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%f", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a > 8.987864607494007 && a < 8.988064607494007, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 8.987964607494007, a jest %lf", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 0;
                    double a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%f", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %d", res);
                    
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 2;
                    struct point_t a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 2, a jest %d", res);
                    
                test_error(a.x == 25, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 25, a jest %d", a.x);
                test_error(a.y == 54, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 54, a jest %d", a.y);            
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 0;
                    struct point_t a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %d", res);
                    
          
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
            UTEST1, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST2, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST3, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST4, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST5, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST6, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST7, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST8, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST9, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST10, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST11, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST12, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST13, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST14, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST15, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST16, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST17, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST18, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST19, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST20, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST21, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST22, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST23, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST24, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST25, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST26, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST27, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST28, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST29, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST30, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST31, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST32, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST33, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST34, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST35, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST36, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST37, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST38, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST39, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST40, // Sprawdzanie poprawności działania funkcji my_scanf
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
            test_summary(40); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
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
            test_summary(0); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}