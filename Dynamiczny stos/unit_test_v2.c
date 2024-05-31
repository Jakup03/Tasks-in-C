/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Dynamiczny stos - wszystko na opak
 * Autor testowanej odpowiedzi: Jakub Sońta
 * Test wygenerowano automatycznie o 2022-05-31 15:15:30.134854
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
//  Test 1: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = {"it", "blow", "moment", "except", "person", "scale", "even", "girl", "water"};

            struct stack_t* stack = NULL;

            char *alloc_tab[9];
            
            for (int i = 0; i < 9; ++i)
            {
                alloc_tab[i] = (char *)malloc(strlen(tab[i]) + 1);
                test_error(alloc_tab[i] != NULL, "Błąd alokacji pamięci"); 
            }  
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = stack_push(&stack, *alloc_tab);
            test_error(stack != NULL, "Funkcja stack_push() powinna przypisać adres przydzielonej pamięci, a przypisała NULL");        
            test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack->prev == NULL, "Funkcja stack_push() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(stack->sentence == *alloc_tab, "Wartość zapisana na stosie jest nieprawidłowa, powinno być %s, a jest %s", *alloc_tab, stack->sentence);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 1; i < 9; ++i)
            {
            
                struct stack_t *node = stack;
                err_code = stack_push(&stack, *(alloc_tab + i));
                test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(stack->prev == node, "Funkcja stack_push() powinna ustawić wartość pola prev na element dodany poprzednio");
            }

            struct stack_t *node = stack;

            for (int i = 8; i >= 0 ; --i)
            {
                test_error(node->sentence == alloc_tab[i], "Wartość zapisana pod indeksem %d w stosie jest nieprawidłowa, powinno być %p, a jest %p", i, *(alloc_tab + i), node->sentence);
                node = node->prev;
            }

            err_code = stack_push(NULL, *(tab));
            test_error(err_code == 1, "Funkcja stack_push() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            stack_destroy(&stack);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 0 bajtów)
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

            char *tab[] = {"it", "blow", "moment", "except", "person", "scale", "even", "girl", "water"};

            struct stack_t* stack = NULL;

            int err_code = stack_push(&stack, *tab);
            test_error(err_code == 2, "Funkcja stack_push() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
            test_error(stack == NULL, "Funkcja stack_push() powinna przypisać NULL do przekazanej zmiennej");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            stack_destroy(&stack);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 195 bajtów)
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 195 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(195);
    
    //
    // -----------
    //
    

            char *tab[] = {"it", "blow", "moment", "except", "person", "scale", "even", "girl", "water"};

            struct stack_t* stack = NULL;

            char *alloc_tab[9];
            
            for (int i = 0; i < 9; ++i)
            {
                alloc_tab[i] = (char *)malloc(strlen(tab[i]) + 1);
                test_error(alloc_tab[i] != NULL, "Błąd alokacji pamięci"); 
                strcpy(alloc_tab[i], tab[i]);
            }  
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = stack_push(&stack, *alloc_tab);
            test_error(stack != NULL, "Funkcja stack_push() powinna przypisać adres przydzielonej pamięci, a przypisała NULL");        
            test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack->prev == NULL, "Funkcja stack_push() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(stack->sentence == *alloc_tab, "Wartość zapisana na stosie jest nieprawidłowa, powinno być %s, a jest %s", *alloc_tab, stack->sentence);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 1; i < 9; ++i)
            {
            
                struct stack_t *node = stack;
                err_code = stack_push(&stack, *(alloc_tab + i));
                test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(stack->prev == node, "Funkcja stack_push() powinna ustawić wartość pola prev na element dodany poprzednio");
            }

            struct stack_t *node = stack;

            for (int i = 8; i >= 0 ; --i)
            {
                test_error(node->sentence == alloc_tab[i], "Wartość zapisana pod indeksem %d w stosie jest nieprawidłowa, powinno być %p, a jest %p", i, *(alloc_tab + i), node->sentence);
                node = node->prev;
            }

            err_code = stack_push(&stack, *(tab));
            test_error(err_code == 2, "Funkcja stack_push() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            node = stack;

            for (int i = 8; i >= 0 ; --i)
            {
                test_error(node->sentence == alloc_tab[i], "Wartość zapisana pod indeksem %d w stosie jest nieprawidłowa, powinno być %p, a jest %p", i, *(alloc_tab + i), node->sentence);
                node = node->prev;
            }

            stack_destroy(&stack);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            char *alloc_tab[] = {"follow", "stand", "please", "path", "my", "land"};

            struct stack_t* stack = NULL;

            int err_code = stack_push(&stack, *alloc_tab);
            test_error(stack != NULL, "Funkcja stack_push() powinna przypisać adres przydzielonej pamięci, a przypisała NULL");        
            test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack->prev == NULL, "Funkcja stack_push() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(stack->sentence == *alloc_tab, "Wartość zapisana na stosie jest nieprawidłowa, powinno być %s, a jest %s", *alloc_tab, stack->sentence);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 1; i < 6; ++i)
            {
            
                struct stack_t *node = stack;
                err_code = stack_push(&stack, *(alloc_tab + i));
                test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(stack->prev == node, "Funkcja stack_push() powinna ustawić wartość pola prev na element dodany poprzednio");
            }

            struct stack_t *node = stack;

            for (int i = 5; i >= 0 ; --i)
            {
                test_error(node->sentence == alloc_tab[i], "Wartość zapisana pod indeksem %d w stosie jest nieprawidłowa, powinno być %p, a jest %p", i, *(alloc_tab + i), node->sentence);
                node = node->prev;
            }
            

            for (int i = 5; i >= 0 ; --i)
            {
                int err_code = 2;
            
                char *temp = stack_pop(&stack, &err_code);

                test_error(err_code == 0, "Funkcja stack_pop() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                
                test_error(temp == alloc_tab[i], "Wartość zapisana pod indeksem %d w stosie jest nieprawidłowa, powinno być %p, a jest %p", i, *(alloc_tab + i), temp);
                
            }
            
            stack_pop(&stack, &err_code);
            test_error(err_code == 1, "Funkcja stack_pop() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);
            
            stack_destroy(&stack);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            stack_pop(NULL, &err_code);
            test_error(err_code == 1, "Funkcja stack_pop() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);


            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            char *alloc_tab[] = {"follow", "stand", "please", "path", "my", "land"};

            struct stack_t* stack = NULL;

            int err_code = stack_push(&stack, *alloc_tab);
            test_error(stack != NULL, "Funkcja stack_push() powinna przypisać adres przydzielonej pamięci, a przypisała NULL");        
            test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack->prev == NULL, "Funkcja stack_push() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(stack->sentence == *alloc_tab, "Wartość zapisana na stosie jest nieprawidłowa, powinno być %s, a jest %s", *alloc_tab, stack->sentence);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 1; i < 6; ++i)
            {

                struct stack_t *node = stack;
                err_code = stack_push(&stack, *(alloc_tab + i));
                test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(stack->prev == node, "Funkcja stack_push() powinna ustawić wartość pola prev na element dodany poprzednio");
            }

            struct stack_t *node = stack;

            for (int i = 5; i >= 0 ; --i)
            {
                test_error(node->sentence == alloc_tab[i], "Wartość zapisana pod indeksem %d w stosie jest nieprawidłowa, powinno być %p, a jest %p", i, *(alloc_tab + i), node->sentence);
                node = node->prev;
            }


            for (int i = 5; i >= 0 ; --i)
            {

                char *temp = stack_pop(&stack, NULL);
                test_error(temp == alloc_tab[i], "Wartość zapisana pod indeksem %d w stosie jest nieprawidłowa, powinno być %p, a jest %p", i, *(alloc_tab + i), temp);

            }

            stack_pop(&stack, NULL);

            stack_destroy(&stack);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            stack_pop(NULL, NULL);


            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 1133
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 1133", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                char *tab[] = {"Developments in information technology and globalised media mean that the most powerful military in the history of the world can lose a war, not on the battlefield of dust and blood, but on the battlefield of world opinion.", " - Timothy Garton AshThe new information technology.", ".", ".", " Internet and e-mail.", ".", ".", " have practically eliminated the physical costs of communications.", " - Peter DruckerThe sad thing about artificial intelligence is that it lacks artifice and therefore intelligence.", " - Jean BaudrillardTechnology is the campfire around which we tell our stories.", "-Laurie AndersonIt is practically impossible to teach good programming to students that have had a prior exposure to BASIC: as potential programmers they are mentally mutilated beyond hope of regeneration.", " - Edsger DijkstraWalking on water and developing software from a specification are easy if both are frozen.", " - Edward Berard\"Imagine your life is perfect in every respect; what would it look like?\"- Brian Tracy\"I have always wished for my computer to be as easy to use as my telephone; my wish has come true because I can no longer figure out how to use my telephone."};
        
                struct stack_t* stack = NULL;
            
                int err_code = stack_load(&stack, "shop");
                test_error(err_code == 0, "Wartość zwrócona przez funkcję stack_load jest nieprawidłowa, powinno być 0, a jest %d", err_code);
        
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                if (!0)
                {    
                    struct stack_t *node = stack;
            
                    for (int i = 12; i >= 0 ; --i)
                    {
                        test_error(node != NULL, "Niespodziewany koniec stosu");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                        test_error(strcmp(node->sentence, tab[i]) == 0, "Wartość zapisana pod indeksem %d w stosie jest nieprawidłowa, powinno być '%s', a jest '%s'", i, *(tab + i), node->sentence);
                        node = node->prev;
                    }
            
                    stack_destroy(&stack);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 1728
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 1728", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                char *tab[] = {"\"A room without books is like a body without a soul.", "\" - Marcus Tullius Cicero\"What you lack in talent can be made up with desire, hustle and giving 110% all the time.", "\"- Don ZimmerWe have seven pillars of development.", " India has a cutting edge information technology industry.", " We are setting up a technology park.", " We would like to see technology penetration iin education.", " Besides, we would like to see cooperation in industries like fashion, filmmaking, ship-building, education, health and energy.", " - Kamla Persad-BissessarBooks may look like nothing more than words on a page, but they are actually an infinitely complex imaginotransference technology that translates odd, inky squiggles into pictures inside your head.", "-Jasper FfordeFor instance, on the planet Earth, man had always assumed that he was more intelligent than dolphins because he had achieved so much - the wheel, New York, wars and so on - whilst all the dolphins had ever done was muck about in the water having a good time.", " But conversely, the dolphins had always believed that they were far more intelligent than man-for precisely the same reasons.", " - Douglas Adams, The Hitchhiker\'s Guide to the GalaxyThe unexamined life is not worth living.", " - SocratesIt does not do to dwell on dreams and forget to live.", " - J.", "K.", " RowlingThere was a time in the 1930s when magazine writers could actually make a good living.", " \'The Saturday Evening Post\' and \'Collier\'s\' both had three stories in each issue.", " These were usually entertaining, and people really went for them.", " But then television came along, and now of course, information technology.", ".", ".", " the new way of killing time.", " - Tom WolfeTechnology is a useful servant but a dangerous master.", "-Christian Lous Lange."};
        
                struct stack_t* stack = NULL;
            
                int err_code = stack_load(&stack, "if");
                test_error(err_code == 0, "Wartość zwrócona przez funkcję stack_load jest nieprawidłowa, powinno być 0, a jest %d", err_code);
        
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                if (!0)
                {    
                    struct stack_t *node = stack;
            
                    for (int i = 22; i >= 0 ; --i)
                    {
                        test_error(node != NULL, "Niespodziewany koniec stosu");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                        test_error(strcmp(node->sentence, tab[i]) == 0, "Wartość zapisana pod indeksem %d w stosie jest nieprawidłowa, powinno być '%s', a jest '%s'", i, *(tab + i), node->sentence);
                        node = node->prev;
                    }
            
                    stack_destroy(&stack);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 0
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 0", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                char *tab[] = {"0"};
        
                struct stack_t* stack = NULL;
            
                int err_code = stack_load(&stack, "see");
                test_error(err_code == 0, "Wartość zwrócona przez funkcję stack_load jest nieprawidłowa, powinno być 0, a jest %d", err_code);
        
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                if (!0)
                {    
                    struct stack_t *node = stack;
            
                    for (int i = -1; i >= 0 ; --i)
                    {
                        test_error(node != NULL, "Niespodziewany koniec stosu");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                        test_error(strcmp(node->sentence, tab[i]) == 0, "Wartość zapisana pod indeksem %d w stosie jest nieprawidłowa, powinno być '%s', a jest '%s'", i, *(tab + i), node->sentence);
                        node = node->prev;
                    }
            
                    stack_destroy(&stack);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 0
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 0", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                char *tab[] = {"0"};
        
                struct stack_t* stack = NULL;
            
                int err_code = stack_load(&stack, "body");
                test_error(err_code == 0, "Wartość zwrócona przez funkcję stack_load jest nieprawidłowa, powinno być 0, a jest %d", err_code);
        
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                if (!0)
                {    
                    struct stack_t *node = stack;
            
                    for (int i = -1; i >= 0 ; --i)
                    {
                        test_error(node != NULL, "Niespodziewany koniec stosu");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                        test_error(strcmp(node->sentence, tab[i]) == 0, "Wartość zapisana pod indeksem %d w stosie jest nieprawidłowa, powinno być '%s', a jest '%s'", i, *(tab + i), node->sentence);
                        node = node->prev;
                    }
            
                    stack_destroy(&stack);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 0
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 0", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
                char *tab[] = {"0"};
        
                struct stack_t* stack = NULL;
            
                int err_code = stack_load(&stack, "did");
                test_error(err_code == 2, "Wartość zwrócona przez funkcję stack_load jest nieprawidłowa, powinno być 2, a jest %d", err_code);
        
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                if (!2)
                {    
                    struct stack_t *node = stack;
            
                    for (int i = -1; i >= 0 ; --i)
                    {
                        test_error(node != NULL, "Niespodziewany koniec stosu");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                        test_error(strcmp(node->sentence, tab[i]) == 0, "Wartość zapisana pod indeksem %d w stosie jest nieprawidłowa, powinno być '%s', a jest '%s'", i, *(tab + i), node->sentence);
                        node = node->prev;
                    }
            
                    stack_destroy(&stack);
                }
                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 0
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 0", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
        
                    struct stack_t* stack = NULL;
            
                    int err_code = stack_load(&stack, "high");
                    test_error(err_code == 3, "Wartość zwrócona przez funkcję stack_load jest nieprawidłowa, powinno być 3, a jest %d", err_code);
        
                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 16
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 16", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    
        
                    struct stack_t* stack = NULL;
            
                    int err_code = stack_load(&stack, "high");
                    test_error(err_code == 3, "Wartość zwrócona przez funkcję stack_load jest nieprawidłowa, powinno być 3, a jest %d", err_code);
        
                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 78
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 78", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(78);
    
    //
    // -----------
    //
    
        
                    struct stack_t* stack = NULL;
            
                    int err_code = stack_load(&stack, "high");
                    test_error(err_code == 3, "Wartość zwrócona przez funkcję stack_load jest nieprawidłowa, powinno być 3, a jest %d", err_code);
        
                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 434
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 434", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(434);
    
    //
    // -----------
    //
    
        
                    struct stack_t* stack = NULL;
            
                    int err_code = stack_load(&stack, "high");
                    test_error(err_code == 3, "Wartość zwrócona przez funkcję stack_load jest nieprawidłowa, powinno być 3, a jest %d", err_code);
        
                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji stack_load
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji stack_load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = stack_load(NULL, "high");
                test_error(err_code == 1, "Wartość zwrócona przez funkcję stack_load jest nieprawidłowa, powinno być 1, a jest %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji stack_load
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji stack_load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct stack_t* stack = NULL;

                int err_code = stack_load(&stack, NULL);
                test_error(err_code == 1, "Wartość zwrócona przez funkcję stack_load jest nieprawidłowa, powinno być 1, a jest %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji stack_load
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji stack_load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct stack_t stack_prev;

                struct stack_t *stack = &stack_prev;

                int err_code = stack_load(&stack, "high");
                test_error(err_code == 1, "Wartość zwrócona przez funkcję stack_load jest nieprawidłowa, powinno być 1, a jest %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji stack_load
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji stack_load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = stack_load(NULL, NULL);
                test_error(err_code == 1, "Wartość zwrócona przez funkcję stack_load jest nieprawidłowa, powinno być 1, a jest %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji stack_save
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji stack_save", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *alloc_tab[] = {"inch", "wife", "moon", "beauty", "east"};

            struct stack_t* stack = NULL;

            int err_code = stack_push(&stack, *alloc_tab);
            test_error(stack != NULL, "Funkcja stack_push() powinna przypisać adres przydzielonej pamięci, a przypisała NULL");        
            test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack->prev == NULL, "Funkcja stack_push() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(stack->sentence == *alloc_tab, "Wartość zapisana na stosie jest nieprawidłowa, powinno być %s, a jest %s", *alloc_tab, stack->sentence);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 1; i < 5; ++i)
            {

                struct stack_t *node = stack;
                err_code = stack_push(&stack, *(alloc_tab + i));
                test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(stack->prev == node, "Funkcja stack_push() powinna ustawić wartość pola prev na element dodany poprzednio");
            }

            struct stack_t *node = stack;

            for (int i = 4; i >= 0 ; --i)
            {
                test_error(node->sentence == alloc_tab[i], "Wartość zapisana pod indeksem %d w stosie jest nieprawidłowa, powinno być %p, a jest %p", i, *(alloc_tab + i), node->sentence);
                node = node->prev;
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            err_code = stack_save(stack, "such");
            
            test_error(err_code == 0, "Funkcja stack_save() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            for (int i = 4; i >= 0 ; --i)
                stack_pop(&stack, NULL);
            
            stack_destroy(&stack);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji stack_save - brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji stack_save - brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    

            char *alloc_tab[] = {"inch", "wife", "moon", "beauty", "east"};

            struct stack_t* stack = NULL;

            int err_code = stack_push(&stack, *alloc_tab);
            test_error(stack != NULL, "Funkcja stack_push() powinna przypisać adres przydzielonej pamięci, a przypisała NULL");        
            test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack->prev == NULL, "Funkcja stack_push() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(stack->sentence == *alloc_tab, "Wartość zapisana na stosie jest nieprawidłowa, powinno być %s, a jest %s", *alloc_tab, stack->sentence);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 1; i < 5; ++i)
            {

                struct stack_t *node = stack;
                err_code = stack_push(&stack, *(alloc_tab + i));
                test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(stack->prev == node, "Funkcja stack_push() powinna ustawić wartość pola prev na element dodany poprzednio");
            }

            struct stack_t *node = stack;

            for (int i = 4; i >= 0 ; --i)
            {
                test_error(node->sentence == alloc_tab[i], "Wartość zapisana pod indeksem %d w stosie jest nieprawidłowa, powinno być %p, a jest %p", i, *(alloc_tab + i), node->sentence);
                node = node->prev;
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            err_code = stack_save(stack, "such");

            test_error(err_code == 2, "Funkcja stack_save() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);

            for (int i = 4; i >= 0 ; --i)
                stack_pop(&stack, NULL);

            stack_destroy(&stack);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji stack_save
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji stack_save", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = stack_save(NULL, "such");
                test_error(err_code == 1, "Wartość zwrócona przez funkcję stack_save jest nieprawidłowa, powinno być 1, a jest %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji stack_save
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji stack_save", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct stack_t s;

                struct stack_t* stack = &s;

                int err_code = stack_save(stack, NULL);
                test_error(err_code == 1, "Wartość zwrócona przez funkcję stack_save jest nieprawidłowa, powinno być 1, a jest %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji stack_save
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji stack_save", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct stack_t *stack = NULL;

                int err_code = stack_save(stack, "such");
                test_error(err_code == 1, "Wartość zwrócona przez funkcję stack_save jest nieprawidłowa, powinno być 1, a jest %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji stack_save
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji stack_save", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = stack_save(NULL, NULL);
                test_error(err_code == 1, "Wartość zwrócona przez funkcję stack_save jest nieprawidłowa, powinno być 1, a jest %d", err_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji stack_destroy
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji stack_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            stack_destroy(NULL);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak pamięci (limit sterty ustawiono na 0 bajtów)
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

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

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Reakcja na brak pamięci (limit sterty ustawiono na 16 bajtów)
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Reakcja na brak pamięci (limit sterty ustawiono na 1070 bajtów)
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci (limit sterty ustawiono na 1070 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1070);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Reakcja na brak pamięci (limit sterty ustawiono na 1178 bajtów)
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci (limit sterty ustawiono na 1178 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1178);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Reakcja na brak możliwości utworzenia pliku - funkcja fopen zwróci NULL przy 6 wywołaniu)
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak możliwości utworzenia pliku - funkcja fopen zwróci NULL przy 6 wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 5);
    
    //
    // -----------
    //
    
            printf("***START***\n");
            int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
            printf("\n***END***\n");
            test_error(ret_code == 5, "Funkcja main zakończyła się kodem %d a powinna 5", ret_code);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
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
            UTEST1, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST2, // Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 0 bajtów)
            UTEST3, // Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 195 bajtów)
            UTEST4, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST5, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST6, // Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 1133
            UTEST7, // Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 1728
            UTEST8, // Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 0
            UTEST9, // Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 0
            UTEST10, // Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 0
            UTEST11, // Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 0
            UTEST12, // Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 16
            UTEST13, // Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 78
            UTEST14, // Sprawdzanie poprawności działania funkcji stack_load - limit pamięci ustawiony na 434
            UTEST15, // Sprawdzanie poprawności działania funkcji stack_load
            UTEST16, // Sprawdzanie poprawności działania funkcji stack_load
            UTEST17, // Sprawdzanie poprawności działania funkcji stack_load
            UTEST18, // Sprawdzanie poprawności działania funkcji stack_load
            UTEST19, // Sprawdzanie poprawności działania funkcji stack_save
            UTEST20, // Sprawdzanie poprawności działania funkcji stack_save - brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
            UTEST21, // Sprawdzanie poprawności działania funkcji stack_save
            UTEST22, // Sprawdzanie poprawności działania funkcji stack_save
            UTEST23, // Sprawdzanie poprawności działania funkcji stack_save
            UTEST24, // Sprawdzanie poprawności działania funkcji stack_save
            UTEST25, // Sprawdzanie poprawności działania funkcji stack_destroy
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
            test_summary(25); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci (limit sterty ustawiono na 0 bajtów)
            MTEST2, // Reakcja na brak pamięci (limit sterty ustawiono na 16 bajtów)
            MTEST3, // Reakcja na brak pamięci (limit sterty ustawiono na 1070 bajtów)
            MTEST4, // Reakcja na brak pamięci (limit sterty ustawiono na 1178 bajtów)
            MTEST5, // Reakcja na brak możliwości utworzenia pliku - funkcja fopen zwróci NULL przy 6 wywołaniu)
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
            test_summary(5); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}