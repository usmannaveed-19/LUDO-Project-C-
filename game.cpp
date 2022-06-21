//============================================================================
// Name        : .cpp
// Author      : Muhammad Usman Naveed
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Centipede...
//============================================================================

//==================================================================================
           
                 ////          ////        ////    ///////         ////
                 ////          ////        ////    ////   //     ///  ///
	             ////          ////        ////    ////    //   ///    ///
	             ////          ////        ////    ////    //   ///    ///
	             ////          ////        ////    ////    //   ///    ///
	             ////           ///       ///      ////   //     ///   ///
	             ////////////     ////////         ///////         ////

//===================================================================================

#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
//#include "Board.h"
#include "util.h"
#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<ctime>
#include<time.h>
#include<cstdlib>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;


/*
int gen[72][2];
int red1[58][2] , red2[58][2], red3[58][2], red4[58][2];
int blue1[58][2], blue2[58][2], blue3[58][2], blue4[58][2];
int green1[58][2], green2[58][2], green3[58][2], green4[58][2];
int orange1[58][2], orange2[58][2], orange3[58][2], orange4[58][2];
*/
string name[4], colour[4];
int x=0, z=0, number, res_num=0, temp=0;
bool check=false;
/* Declaring used integers globally in key press*/
int new_num1=0, new_num2=0, new_num3=0, new_num4=0, new_num5=0, new_num6=0, new_num7=0, new_num8=0;
int new_num9=0, new_num10=0, new_num11=0, new_num12=0, new_num13=0, new_num14=0, new_num15=0, new_num16=0;
int turn1=0, turn2=0, turn3=0, turn4=0, turn5=0, turn6=0, turn7=0, turn8=0; 
int turn9=0, turn10=0, turn11=0, turn12=0, turn13=0, turn14=0, turn15=0, turn16=0; 
int end1=0, end2=0, end3=0, end4=0, end5=0, end6=0, end7=0, end8=0;
int end9=0, end10=0, end11=0, end12=0, end13=0, end14=0, end15=0, end16=0;
int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0, m=0, n=0, o=0, p=0;
int select1=0, select2=0, select3=0, select4=0, select5=0, select6=0, select7=0, select8=0;
int select9=0, select10=0, select11=0, select12=0, select13=0, select14=0, select15=0, select16=0;
/***********


//    **************************************************************************************************************
//         STORING LOCATIONS FOR ALL GOTTIIS

//	gen[72][72]={ /*Red*///{396,30},{396,91},{396,152},{396,213},{396,274},{396,335},
//                {427,30},{456,91},{456,152},{456,213},{456,274},{456,335},
//                {516,30},{516,91},{516,152},{516,213},{516,274},{516,335},
//                /*Blue*/{30,396},{91,396},{152,396},{213,396},{274,396},{335,396},
//                {30,456},{91,456},{152,456},{213,456},{274,456},{335,456},
//                {30,516},{91,516},{152,516},{213,516},{274,516},{335,516},
//			    /*Green*/{396,579},{396,639},{396,699},{396,759},{396,819},{396,879},
//                {456,579},{456,639},{456,699},{456,759},{456,819},{456,879},
//			    {516,579},{516,639},{516,699},{516,759},{516,819},{516,879},
//			    /*Orange*/{579,396},{579,456},{579,516},
//                        {639,396},{639,456},{639,516},
//				          {699,396},{699,456},{699,516},
//				          {759,396},{759,456},{759,516},
//				          {819,396},{819,456},{819,516},
//				          {879,396},{879,456},{879,516} }
//                    RED    *********************************************


int red1[][2]={/*START*/{396,91},{396,152},{396,213},{396,274},{396,335},
                {335,396},{274,396},{213,396},{152,396},{91,396},{30,396},{30,456},
                {30,516},{91,516},{152,516},{213,516},{274,516},{335,516},
                {396,579},{396,639},{396,699},{396,759},{396,819},{396,879},{456,879},
                {516,879},{516,819},{516,759},{516,699},{516,639},{516,579},
                {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},{879,456},
                {879,396},{819,396},{759,396},{699,396},{639,396},{579,396},
                {516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
				{456,91},{456,152},{456,213},{456,274},{456,335},{456,394}};

int red2[][2]={/*START*/{396,91},{396,152},{396,213},{396,274},{396,335},
                {335,396},{274,396},{213,396},{152,396},{91,396},{30,396},{30,456},
                {30,516},{91,516},{152,516},{213,516},{274,516},{335,516},
                {396,579},{396,639},{396,699},{396,759},{396,819},{396,879},{456,879},
                {516,879},{516,819},{516,759},{516,699},{516,639},{516,579},
                {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},{879,456},
                {879,396},{819,396},{759,396},{699,396},{639,396},{579,396},
                {516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
				{456,91},{456,152},{456,213},{456,274},{456,335},{456,394}};

int red3[][2]={/*START*/{396,91},{396,152},{396,213},{396,274},{396,335},
                {335,396},{274,396},{213,396},{152,396},{91,396},{30,396},{30,456},
                {30,516},{91,516},{152,516},{213,516},{274,516},{335,516},
                {396,579},{396,639},{396,699},{396,759},{396,819},{396,879},{456,879},
                {516,879},{516,819},{516,759},{516,699},{516,639},{516,579},
                {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},{879,456},
                {879,396},{819,396},{759,396},{699,396},{639,396},{579,396},
                {516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
				{456,91},{456,152},{456,213},{456,274},{456,335},{456,394}};

int red4[][2]={/*START*/{396,91},{396,152},{396,213},{396,274},{396,335},
                {335,396},{274,396},{213,396},{152,396},{91,396},{30,396},{30,456},
                {30,516},{91,516},{152,516},{213,516},{274,516},{335,516},
                {396,579},{396,639},{396,699},{396,759},{396,819},{396,879},{456,879},
                {516,879},{516,819},{516,759},{516,699},{516,639},{516,579},
                {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},{879,456},
                {879,396},{819,396},{759,396},{699,396},{639,396},{579,396},
                {516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
				{456,91},{456,152},{456,213},{456,274},{456,335},{456,394}};

//                        BLUE   ******************************************************
int blue1[][2] = {/*START*/{91,516},{152,516},{213,516},{274,516},{335,516},
                   {396,579},{396,639},{396,699},{396,759},{396,819},{396,879},{456,879},
			       {516,879},{516,819},{516,759},{516,699},{516,639},{516,579},
                   {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},{879,456},
                   {879,396},{819,396},{759,396},{699,396},{639,396},{579,396},
				   {516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
                   {396,30},{396,91},{396,152},{396,213},{396,274},{396,335},
                   {335,396},{274,396},{213,396},{152,396},{91,396},{30,396},
				   {30,456},{91,456},{152,456},{213,456},{274,456},{335,456},{395,456}};

int blue2[][2] = {/*START*/{91,516},{152,516},{213,516},{274,516},{335,516},
                   {396,579},{396,639},{396,699},{396,759},{396,819},{396,879},{456,879},
			       {516,879},{516,819},{516,759},{516,699},{516,639},{516,579},
                   {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},{879,456},
                   {879,396},{819,396},{759,396},{699,396},{639,396},{579,396},
				   {516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
                   {396,30},{396,91},{396,152},{396,213},{396,274},{396,335},
                   {335,396},{274,396},{213,396},{152,396},{91,396},{30,396},
				   {30,456},{91,456},{152,456},{213,456},{274,456},{335,456},{395,456}};

int blue3[][2] = {/*START*/{91,516},{152,516},{213,516},{274,516},{335,516},
                   {396,579},{396,639},{396,699},{396,759},{396,819},{396,879},{456,879},
			       {516,879},{516,819},{516,759},{516,699},{516,639},{516,579},
                   {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},{879,456},
                   {879,396},{819,396},{759,396},{699,396},{639,396},{579,396},
				   {516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
                   {396,30},{396,91},{396,152},{396,213},{396,274},{396,335},
                   {335,396},{274,396},{213,396},{152,396},{91,396},{30,396},
				   {30,456},{91,456},{152,456},{213,456},{274,456},{335,456},{395,456}};

int blue4[][2] = {/*START*/{91,516},{152,516},{213,516},{274,516},{335,516},
                   {396,579},{396,639},{396,699},{396,759},{396,819},{396,879},{456,879},
			       {516,879},{516,819},{516,759},{516,699},{516,639},{516,579},
                   {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},{879,456},
                   {879,396},{819,396},{759,396},{699,396},{639,396},{579,396},
				   {516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
                   {396,30},{396,91},{396,152},{396,213},{396,274},{396,335},
                   {335,396},{274,396},{213,396},{152,396},{91,396},{30,396},
				   {30,456},{91,456},{152,456},{213,456},{274,456},{335,456},{395,456}};
 
//                      GREEN         ***************************************************
int green1[][2] = {/*START*/{516,819},{516,759},{516,699},{516,639},{516,579},
                    {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},{879,456},
                    {879,396},{819,396},{759,396},{699,396},{639,396},{579,396},
					{516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
                    {396,30},{396,91},{396,152},{396,213},{396,274},{396,335},
					{335,396},{274,396},{213,396},{152,396},{91,396},{30,396},{30,456},
                    {30,516},{91,516},{152,516},{213,516},{274,516},{335,516},
					{396,579},{396,639},{396,699},{396,759},{396,819},{396,879},
                    {456,879},{456,819},{456,759},{456,699},{456,639},{456,579},{456,519}};

int green2[][2] = {/*START*/{516,819},{516,759},{516,699},{516,639},{516,579},
                    {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},{879,456},
                    {879,396},{819,396},{759,396},{699,396},{639,396},{579,396},
					{516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
                    {396,30},{396,91},{396,152},{396,213},{396,274},{396,335},
					{335,396},{274,396},{213,396},{152,396},{91,396},{30,396},{30,456},
                    {30,516},{91,516},{152,516},{213,516},{274,516},{335,516},
					{396,579},{396,639},{396,699},{396,759},{396,819},{396,879},
                    {456,879},{456,819},{456,759},{456,699},{456,639},{456,579},{456,519}};

int green3[][2] = {/*START*/{516,819},{516,759},{516,699},{516,639},{516,579},
                    {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},{879,456},
                    {879,396},{819,396},{759,396},{699,396},{639,396},{579,396},
					{516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
                    {396,30},{396,91},{396,152},{396,213},{396,274},{396,335},
					{335,396},{274,396},{213,396},{152,396},{91,396},{30,396},{30,456},
                    {30,516},{91,516},{152,516},{213,516},{274,516},{335,516},
					{396,579},{396,639},{396,699},{396,759},{396,819},{396,879},
                    {456,879},{456,819},{456,759},{456,699},{456,639},{456,579},{456,519}};

int green4[][2] = {/*START*/{516,819},{516,759},{516,699},{516,639},{516,579},
                    {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},{879,456},
                    {879,396},{819,396},{759,396},{699,396},{639,396},{579,396},
					{516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
                    {396,30},{396,91},{396,152},{396,213},{396,274},{396,335},
					{335,396},{274,396},{213,396},{152,396},{91,396},{30,396},{30,456},
                    {30,516},{91,516},{152,516},{213,516},{274,516},{335,516},
					{396,579},{396,639},{396,699},{396,759},{396,819},{396,879},
                    {456,879},{456,819},{456,759},{456,699},{456,639},{456,579},{456,519}};


//                 ORANGE   *****************************************************
int orange1[][2] = {/*START*/{819,396},{759,396},{699,396},{639,396},{579,396},
                     {516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
                     {396,30},{396,91},{396,152},{396,213},{396,274},{396,335},
                     {335,396},{274,396},{213,396},{152,396},{91,396},{30,396},{30,456},
                     {30,516},{91,516},{152,516},{213,516},{274,516},{335,516},
                     {396,579},{396,639},{396,699},{396,759},{396,819},{396,879},{456,879},
                     {516,879},{516,819},{516,759},{516,699},{516,639},{516,579},
                     {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},
					 {879,456},{819,456},{759,456},{699,456},{639,456},{579,456},{519,456}};

int orange2[][2] = {/*START*/{819,396},{759,396},{699,396},{639,396},{579,396},
                     {516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
                     {396,30},{396,91},{396,152},{396,213},{396,274},{396,335},
                     {335,396},{274,396},{213,396},{152,396},{91,396},{30,396},{30,456},
                     {30,516},{91,516},{152,516},{213,516},{274,516},{335,516},
                     {396,579},{396,639},{396,699},{396,759},{396,819},{396,879},{456,879},
                     {516,879},{516,819},{516,759},{516,699},{516,639},{516,579},
                     {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},
					 {879,456},{819,456},{759,456},{699,456},{639,456},{579,456},{519,456}};

int orange3[][2] = {/*START*/{819,396},{759,396},{699,396},{639,396},{579,396},
                     {516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
                     {396,30},{396,91},{396,152},{396,213},{396,274},{396,335},
                     {335,396},{274,396},{213,396},{152,396},{91,396},{30,396},{30,456},
                     {30,516},{91,516},{152,516},{213,516},{274,516},{335,516},
                     {396,579},{396,639},{396,699},{396,759},{396,819},{396,879},{456,879},
                     {516,879},{516,819},{516,759},{516,699},{516,639},{516,579},
                     {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},
					 {879,456},{819,456},{759,456},{699,456},{639,456},{579,456},{519,456}};

int orange4[][2] = {/*START*/{819,396},{759,396},{699,396},{639,396},{579,396},
                     {516,335},{516,274},{516,213},{516,152},{516,91},{516,30},{454,30},
                     {396,30},{396,91},{396,152},{396,213},{396,274},{396,335},
                     {335,396},{274,396},{213,396},{152,396},{91,396},{30,396},{30,456},
                     {30,516},{91,516},{152,516},{213,516},{274,516},{335,516},
                     {396,579},{396,639},{396,699},{396,759},{396,819},{396,879},{456,879},
                     {516,879},{516,819},{516,759},{516,699},{516,639},{516,579},
                     {579,516},{639,516},{699,516},{759,516},{819,516},{879,516},
					 {879,456},{819,456},{759,456},{699,456},{639,456},{579,456},{519,456}};
		      
//    *******************************************************************************************************************

   

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) 
{
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}


/*
 * Main Canvas drawing function.
 * */
//Board *b;
void GameDisplay()/**/
{
	
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	//glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
		//	0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//Fire Gun
	
	//Mushroom
	//// 4 main squares
	// main squares
	DrawSquare( 0 , 0 ,364,colors[RED]); 
	DrawSquare( 0 , 549 ,364,colors[BLUE]); 
	DrawSquare( 549, 549 ,364,colors[FOREST_GREEN]);
	DrawSquare( 549 , 0 ,364,colors[ORANGE]);

    //// small squares Red PLayer
	DrawSquare( 366 , 0 ,59,colors[WHITE]); 
	DrawSquare( 427 , 0 ,59,colors[WHITE]); 
	DrawSquare( 488 , 0 ,59,colors[WHITE]); 

	DrawSquare( 366 , 61 ,59,colors[RED]);
	DrawSquare( 427 , 61 ,59,colors[RED]);
	DrawSquare( 488 , 61 ,59,colors[WHITE]);

	DrawSquare( 366 , 122 ,59,colors[WHITE]);
	DrawSquare( 427 , 122 ,59,colors[RED]);
	DrawSquare( 488 , 122 ,59,colors[RED]);

	DrawSquare( 366 , 183 ,59,colors[WHITE]);
	DrawSquare( 427 , 183 ,59,colors[RED]);
	DrawSquare( 488 , 183 ,59,colors[WHITE]);

	DrawSquare( 366 , 244 ,59,colors[WHITE]);
	DrawSquare( 427 , 244 ,59,colors[RED]);
	DrawSquare( 488 , 244 ,59,colors[WHITE]);

	DrawSquare( 366 , 305 ,59,colors[WHITE]);
	DrawSquare( 427 , 305 ,59,colors[RED]);
	DrawSquare( 488 , 305 ,59,colors[WHITE]);
    
	//// small squares Blue Player
	DrawSquare( 0 , 366 ,59,colors[WHITE]);
	DrawSquare( 0 , 427 ,59,colors[WHITE]);
	DrawSquare( 0 , 488 ,59,colors[WHITE]);

	DrawSquare( 61 , 366 ,59,colors[WHITE]);
	DrawSquare( 61 , 427 ,59,colors[BLUE]);
	DrawSquare( 61 , 488 ,59,colors[BLUE]);

	DrawSquare( 122 , 366 ,59,colors[BLUE]);
	DrawSquare( 122 , 427 ,59,colors[BLUE]);
	DrawSquare( 122 , 488 ,59,colors[WHITE]);

	DrawSquare( 183 , 366 ,59,colors[WHITE]);
	DrawSquare( 183 , 427 ,59,colors[BLUE]);
	DrawSquare( 183 , 488 ,59,colors[WHITE]);

	DrawSquare( 244 , 366 ,59,colors[WHITE]);
	DrawSquare( 244 , 427 ,59,colors[BLUE]);
	DrawSquare( 244 , 488 ,59,colors[WHITE]);

	DrawSquare( 305 , 366 ,59,colors[WHITE]);
	DrawSquare( 305 , 427 ,59,colors[BLUE]);
	DrawSquare( 305 , 488 ,59,colors[WHITE]);

	//// small squares for Green Player
	DrawSquare( 366 , 549 ,59,colors[WHITE]);
	DrawSquare( 427 , 549 ,59,colors[FOREST_GREEN]);
	DrawSquare( 488 , 549 ,59,colors[WHITE]);

	DrawSquare( 366 , 610 ,59,colors[WHITE]);
	DrawSquare( 427 , 610 ,59,colors[FOREST_GREEN]);
	DrawSquare( 488 , 610 ,59,colors[WHITE]);

	DrawSquare( 366 , 671 ,59,colors[WHITE]);
	DrawSquare( 427 , 671 ,59,colors[FOREST_GREEN]);
	DrawSquare( 488 , 671 ,59,colors[WHITE]);

	DrawSquare( 366 , 732 ,59,colors[FOREST_GREEN]);
	DrawSquare( 427 , 732 ,59,colors[FOREST_GREEN]);
	DrawSquare( 488 , 732 ,59,colors[WHITE]);

	DrawSquare( 366 , 793 ,59,colors[WHITE]);
	DrawSquare( 427 , 793 ,59,colors[FOREST_GREEN]);
	DrawSquare( 488 , 793 ,59,colors[FOREST_GREEN]);

	DrawSquare( 366 , 854 ,59,colors[WHITE]);
	DrawSquare( 427 , 854 ,59,colors[WHITE]);
	DrawSquare( 488 , 854 ,59,colors[WHITE]);

	//// small squares for Orange Player
	/*1*/DrawSquare( 549 , 366 ,59,colors[WHITE]);
	/*2*/DrawSquare( 549 , 427 ,59,colors[ORANGE]);
	/*3*/DrawSquare( 549 , 488 ,59,colors[WHITE]);

	/*4*/DrawSquare( 610 , 366 ,59,colors[WHITE]);
	/*5*/DrawSquare( 610 , 427 ,59,colors[ORANGE]);
	/*6*/DrawSquare( 610 , 488 ,59,colors[WHITE]);

	/*7*/DrawSquare( 671 , 366 ,59,colors[WHITE]);
	/*8*/DrawSquare( 671 , 427 ,59,colors[ORANGE]);
	/*9*/DrawSquare( 671 , 488 ,59,colors[WHITE]);

	/*10*/DrawSquare( 732 , 366 ,59,colors[WHITE]);
	/*11*/DrawSquare( 732 , 427 ,59,colors[ORANGE]);
	/*12*/DrawSquare( 732 , 488 ,59,colors[ORANGE]);
    
	/*13*/DrawSquare( 793 , 366 ,59,colors[ORANGE]);
	/*14*/DrawSquare( 793 , 427 ,59,colors[ORANGE]);
	/*15*/DrawSquare( 793 , 488 ,59,colors[WHITE]);

	/*16*/DrawSquare( 854 , 366 ,59,colors[WHITE]);
	/*17*/DrawSquare( 854 , 427 ,59,colors[WHITE]);
	/*18*/DrawSquare( 854 , 488 ,59,colors[WHITE]);

    // drawing triangles
    DrawTriangle( 365, 365 , 548 , 365 , 454 , 454, colors[RED]);
	DrawTriangle( 365, 548 , 365 , 365 , 454 , 454, colors[BLUE]);
	DrawTriangle( 365, 548 , 548 , 548 , 454 , 454, colors[FOREST_GREEN]);
	DrawTriangle( 548, 548 , 548 , 365 , 454 , 454, colors[ORANGE]);
    
	// checking winning coordinates 
	/*
    DrawCircle(456,394,20,colors[BLACK]);
	DrawCircle(395,456,20,colors[BLACK]);
	DrawCircle(456,519,20,colors[BLACK]);
	DrawCircle(519,456,20,colors[BLACK]);
	*/

	// small internal squares
	DrawSquare( 50 , 50 ,250,colors[WHITE]);
	DrawSquare( 50 , 599 ,250,colors[WHITE]);
	DrawSquare( 599 , 599 ,250,colors[WHITE]);
	DrawSquare( 599 , 50 ,250,colors[WHITE]);
    
    // drawing circles
	if (a==0)
	{
        DrawCircle(100, 100, 25,colors[RED]);
		DrawString(100, 100, "A",colors[BLACK]);
	}
	if (b==0)
	{
	    DrawCircle(250, 100, 25,colors[RED]);
		DrawString(250, 100, "B",colors[BLACK]);
	}
	if (c==0)
	{
	    DrawCircle(100, 250, 25,colors[RED]);
		DrawString(100, 250, "C",colors[BLACK]);
	}
	if (d==0)
	{
	    DrawCircle(250, 250, 25,colors[RED]);
		DrawString(250, 250, "D",colors[BLACK]);
	}
    
	if (e==0)
	{
	DrawCircle(100, 649, 25,colors[BLUE]);
	DrawString(100, 649, "E",colors[BLACK]);
	}
	if (f==0)
	{
	DrawCircle(250, 649, 25,colors[BLUE]);
	DrawString(250, 649, "F",colors[BLACK]);
	}
	if (g==0)
	{
	DrawCircle(100, 799, 25,colors[BLUE]);
	DrawString(100, 799, "G",colors[BLACK]);
	}
	if (h==0)
	{
	DrawCircle(250, 799, 25,colors[BLUE]);
	DrawString(250, 799, "H",colors[BLACK]);
	}

    if (i==0)
	{
	DrawCircle(649, 649, 25,colors[FOREST_GREEN]);
	DrawString(649, 649, "I",colors[BLACK]);
	}
	if (j==0)
	{
	DrawCircle(799, 649, 25,colors[FOREST_GREEN]);
	DrawString(799, 649, "J",colors[BLACK]);
	}
	if (k==0)
	{
	DrawCircle(649, 799, 25,colors[FOREST_GREEN]);
	DrawString(649, 799, "K",colors[BLACK]);
	}
	if (l==0)
	{
	DrawCircle(799, 799, 25,colors[FOREST_GREEN]);
	DrawString(799, 799, "L",colors[BLACK]);
	}

    if (m==0)
	{
    DrawCircle(649, 100, 25,colors[ORANGE]);
	DrawString(649, 100, "M",colors[BLACK]);
	}
	if (n==0)
	{
	DrawCircle(799, 100, 25,colors[ORANGE]);
	DrawString(799, 100, "N",colors[BLACK]);
	}
	if (o==0)
	{
	DrawCircle(649, 250, 25,colors[ORANGE]);
	DrawString(649, 250, "O",colors[BLACK]);
	}
	if (p==0)
	{
	DrawCircle(799, 250, 25,colors[ORANGE]);
	DrawString(799, 250, "P",colors[BLACK]);
	}

    /// GIVING INSTRUCTIONS
	DrawString(930,280,"Instructions:",colors[ANTIQUE_WHITE]);
	DrawString(930,220,"1. Press the letter written",colors[ANTIQUE_WHITE]);
	DrawString(930,180,"   for moving the desired",colors[ANTIQUE_WHITE]);
	DrawString(930,140,"   gotti",colors[ANTIQUE_WHITE]);
	DrawString(930,100,"2. Press Space Bar to roll",colors[ANTIQUE_WHITE]);
	DrawString(930,60,"   the dice.",colors[ANTIQUE_WHITE]);
	DrawString(930,20,"3. Press ESC Key to EXIT",colors[ANTIQUE_WHITE]);
    
    DrawString( 456, 920, " *** LUDO GAME *** ", colors[FLORAL_WHITE]);
	DrawString( 50, 1000, "Muhammad Usman Naveed   [20i-0826] AI-J",colors[GHOST_WHITE]);

    /*drawing sqs*/
    /*
	for (i=0 ; i<58 ; i++)
    {
		DrawCircle(orange1[i][0],orange1[i][1],20,colors[BLACK]);
	}
    */
    /* for GOTTIS*/
    /*
	DrawCircle(396, 30, 20,colors[FOREST_GREEN]);
	DrawCircle(396, 91, 20,colors[FOREST_GREEN]);
	DrawCircle(396, 152, 20,colors[FOREST_GREEN]);
	DrawCircle(396, 213, 20,colors[FOREST_GREEN]);
	DrawCircle(396, 274, 20,colors[FOREST_GREEN]);
	DrawCircle(396, 335, 20,colors[FOREST_GREEN]);
	DrawCircle(456, 30, 20,colors[FOREST_GREEN]);
	DrawCircle(456, 91, 20,colors[FOREST_GREEN]);
	DrawCircle(456, 152, 20,colors[FOREST_GREEN]);
	DrawCircle(456, 213, 20,colors[FOREST_GREEN]);
	DrawCircle(456, 274, 20,colors[FOREST_GREEN]);
	DrawCircle(456, 335, 20,colors[FOREST_GREEN]);
	DrawCircle(516, 30, 20,colors[FOREST_GREEN]);
	DrawCircle(516, 91, 20,colors[FOREST_GREEN]);
	DrawCircle(516, 152, 20,colors[FOREST_GREEN]);
	DrawCircle(516, 213, 20,colors[FOREST_GREEN]);
	DrawCircle(516, 274, 20,colors[FOREST_GREEN]);
	DrawCircle(516, 335, 20,colors[FOREST_GREEN]);
	DrawCircle(30, 396, 20,colors[FOREST_GREEN]);
	DrawCircle(91, 396, 20,colors[FOREST_GREEN]);
	DrawCircle(152, 396, 20,colors[FOREST_GREEN]);
	DrawCircle(213, 396, 20,colors[FOREST_GREEN]);
	DrawCircle(274, 396, 20,colors[FOREST_GREEN]);
	DrawCircle(335, 396, 20,colors[FOREST_GREEN]);
	DrawCircle(30, 456, 20,colors[FOREST_GREEN]);
	DrawCircle(91, 456, 20,colors[FOREST_GREEN]);
	DrawCircle(152, 456, 20,colors[FOREST_GREEN]);
	DrawCircle(213, 456, 20,colors[FOREST_GREEN]);
	DrawCircle(274, 456, 20,colors[FOREST_GREEN]);
	DrawCircle(335, 456, 20,colors[FOREST_GREEN]);
	DrawCircle(30, 516, 20,colors[FOREST_GREEN]);
	DrawCircle(91, 516, 20,colors[FOREST_GREEN]);
	DrawCircle(152, 516, 20,colors[FOREST_GREEN]);
	DrawCircle(213, 516, 20,colors[FOREST_GREEN]);
	DrawCircle(274, 516, 20,colors[FOREST_GREEN]);
	DrawCircle(335, 516, 20,colors[FOREST_GREEN]);
	DrawCircle(396,579,20,colors[BLACK]);
	DrawCircle(396,639,20,colors[BLACK]);
	DrawCircle(396,699,20,colors[BLACK]);
	DrawCircle(396,759,20,colors[BLACK]);
	DrawCircle(396,819,20,colors[BLACK]);
	DrawCircle(396,879,20,colors[BLACK]);
	DrawCircle(456,579,20,colors[BLACK]);
	DrawCircle(456,639,20,colors[BLACK]);
	DrawCircle(456,699,20,colors[BLACK]);
	DrawCircle(456,759,20,colors[BLACK]);
	DrawCircle(456,879,20,colors[BLACK]);
	DrawCircle(456,819,20,colors[BLACK]);
	DrawCircle(516,879,20,colors[BLACK]);
	DrawCircle(516,579,20,colors[BLACK]);
	DrawCircle(516,639,20,colors[BLACK]);
	DrawCircle(516,699,20,colors[BLACK]);
	DrawCircle(516,759,20,colors[BLACK]);
	DrawCircle(516,819,20,colors[BLACK]);
	DrawCircle(516,879,20,colors[BLACK]);
	DrawCircle(579,396,20,colors[BLACK]);
    DrawCircle(579,456,20,colors[BLACK]);
	DrawCircle(579,516,20,colors[BLACK]);
	DrawCircle(639,396,20,colors[BLACK]);
    DrawCircle(639,456,20,colors[BLACK]);
	DrawCircle(639,516,20,colors[BLACK]);
	DrawCircle(699,396,20,colors[BLACK]);
    DrawCircle(699,456,20,colors[BLACK]);
	DrawCircle(699,516,20,colors[BLACK]);
    DrawCircle(759,396,20,colors[BLACK]);
    DrawCircle(759,456,20,colors[BLACK]);
	DrawCircle(759,516,20,colors[BLACK]);
    DrawCircle(819,396,20,colors[BLACK]);
    DrawCircle(819,456,20,colors[BLACK]);
	DrawCircle(819,516,20,colors[BLACK]);
    DrawCircle(879,396,20,colors[BLACK]);
    DrawCircle(879,456,20,colors[BLACK]);
	DrawCircle(879,516,20,colors[BLACK]);
*/
    
	/* Main square and dice*/
	DrawCircle(456,456,35,colors[SILVER]);
    DrawSquare(432,432,50,colors[RED]);
	DrawSquare(428,428,55,colors[BLACK]);
	DrawString(450,445,to_string(number),colors[RED]);
    //                ***************
    

	//   REDDDDDD     **************
  if (a!=0 && end1==0 && select1==1)
  {
	if (number==6 && turn1==0 && end1==0)
	{
		res_num = 0;
		turn1++;
		DrawCircle(100, 100, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(red1[res_num][0],red1[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(red1[res_num][0],red1[res_num][1],"A",colors[BLACK]);
	}else if (turn1>0 && end1==0)
	{
		DrawCircle(100, 100, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num1 = new_num1 + number;
        if (new_num2==56)
		{
			DrawCircle(red1[new_num1][0],red1[new_num1][1],20,colors[BLACK]);
			end1=1;
			DrawCircle(100, 100, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num1>55)
		{
			new_num1 = new_num1 - number;
		} 
		if (new_num1==47)
		{
			DrawCircle(red1[new_num1][0],red1[new_num1][1],20,colors[ORANGE_RED]);
		} else if (new_num1>50)
		{
            DrawCircle(red1[new_num1][0],red1[new_num1][1],20,colors[ORANGE_RED]);
		}
	    else 
		DrawCircle(100, 100, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select1=0;
  }
  DrawCircle(red1[new_num1][0],red1[new_num1][1],20,colors[RED]);
  DrawString(red1[new_num1][0],red1[new_num1][1],"A",colors[BLACK]);
  //**********

  if (b!=0 && end2==0 && select2==1)
  {
	if (number==6 && turn2==0 && end2==0)
	{
		res_num = 0;
		turn2++;
		DrawCircle(250, 100, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(red2[res_num][0],red2[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(red2[res_num][0],red2[res_num][1],"B",colors[BLACK]);
	}else if (turn2>0 && end2==0)
	{
		DrawCircle(250, 100, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num2 = new_num2 + number;
        if (new_num2==56)
		{
			DrawCircle(red2[new_num2][0],red2[new_num2][1],20,colors[BLACK]);
			end2=1;
			DrawCircle(250, 100, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num2>55)
		{
			new_num2 = new_num2 - number;
		} 
		if (new_num2==47)
		{
			DrawCircle(red2[new_num2][0],red2[new_num2][1],20,colors[ORANGE_RED]);
		} else if (new_num2>50)
		{
            DrawCircle(red2[new_num2][0],red2[new_num2][1],20,colors[ORANGE_RED]);
		}
	    else DrawCircle(red2[new_num2][0],red2[new_num2][1],20,colors[RED]);
		DrawCircle(250, 100, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select2=0;
  }
  DrawCircle(red2[new_num2][0],red2[new_num2][1],20,colors[RED]);
  DrawString(red2[new_num2][0],red2[new_num2][1],"B",colors[BLACK]);
  //***********

  if (c!=0 && end3==0 && select3==1)
  {
	if (number==6 && turn3==0 && end3==0)
	{
		res_num = 0;
		turn3++;
		DrawCircle(100, 250, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(red3[res_num][0],red3[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(red3[res_num][0],red3[res_num][1],"C",colors[BLACK]);
	}else if (turn3>0 && end3==0)
	{
		DrawCircle(100, 250, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num3 = new_num3 + number;
        if (new_num3==56)
		{
			DrawCircle(red3[new_num3][0],red3[new_num3][1],20,colors[BLACK]);
			end3=1;
			DrawCircle(100, 250, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num3>55)
		{
			new_num3 = new_num3 - number;
		} 
		if (new_num3==47)
		{
			DrawCircle(red3[new_num3][0],red3[new_num3][1],20,colors[ORANGE_RED]);
		} else if (new_num3>50)
		{
            DrawCircle(red3[new_num3][0],red3[new_num3][1],20,colors[ORANGE_RED]);
		}
	    else DrawCircle(red3[new_num3][0],red3[new_num3][1],20,colors[RED]);
		DrawCircle(100, 250, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select3=0;
  }
  DrawCircle(red3[new_num3][0],red3[new_num3][1],20,colors[RED]);
  DrawString(red3[new_num3][0],red3[new_num3][1],"C",colors[BLACK]);
  //***********

  if (d!=0 && end4==0 && select4==1)
  {
	if (number==6 && turn4==0 && end4==0)
	{
		res_num = 0;
		turn4++;
		DrawCircle(250, 250, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(red4[res_num][0],red4[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(red4[res_num][0],red4[res_num][1],"D",colors[BLACK]);
	}else if (turn4>0 && end4==0)
	{
		DrawCircle(250, 250, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num4 = new_num4 + number;
        if (new_num4==56)
		{
			DrawCircle(red4[new_num4][0],red4[new_num4][1],20,colors[BLACK]);
			end4=1;
			DrawCircle(250, 250, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num4>55)
		{
			new_num4 = new_num4 - number;
		} 
		if (new_num4==47)
		{
			DrawCircle(red4[new_num4][0],red4[new_num4][1],20,colors[ORANGE_RED]);
		} else if (new_num4>50)
		{
            DrawCircle(red4[new_num4][0],red4[new_num4][1],20,colors[ORANGE_RED]);
		}
	    else DrawCircle(red4[new_num4][0],red4[new_num4][1],20,colors[RED]);
		DrawCircle(250, 250, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select4=0;
  }
  DrawCircle(red4[new_num4][0],red4[new_num4][1],20,colors[RED]);
  DrawString(red4[new_num4][0],red4[new_num4][1],"D",colors[BLACK]);
  //************

  //        BLUEEEEE ****************************
  if (e!=0 && end5==0 && select5==1)
  {
	if (number==6 && turn5==0 && end5==0)
	{
		res_num = 0;
		turn5++;
		DrawCircle(100, 649, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(blue1[res_num][0],blue1[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(blue1[res_num][0],blue1[res_num][1],"A",colors[BLACK]);
	}else if (turn5>0 && end5==0)
	{
		DrawCircle(100, 649, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num5 = new_num5 + number;
        if (new_num5==56)
		{
			DrawCircle(blue1[new_num5][0],blue1[new_num5][1],20,colors[BLACK]);
			end5=1;
			DrawCircle(100, 649, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num5>55)
		{
			new_num5 = new_num5 - number;
		} 
		if (new_num5==47)
		{
			DrawCircle(blue1[new_num5][0],blue1[new_num5][1],20,colors[FLORAL_WHITE]);
		} else if (new_num1>50)
		{
            DrawCircle(blue1[new_num5][0],blue1[new_num5][1],20,colors[FLORAL_WHITE]);
		}
	    else 
		DrawCircle(100, 649, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select5=0;
  }
  DrawCircle(blue1[new_num5][0],blue1[new_num5][1],20,colors[BLUE]);
  DrawString(blue1[new_num5][0],blue1[new_num5][1],"E",colors[BLACK]);
  
  if (f!=0 && end6==0 && select6==1)
  {
	if (number==6 && turn6==0 && end6==0)
	{
		res_num = 0;
		turn5++;
		DrawCircle(250, 649, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(blue2[res_num][0],blue2[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(blue2[res_num][0],blue2[res_num][1],"F",colors[BLACK]);
	}else if (turn6>0 && end6==0)
	{
		DrawCircle(250, 649, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num6 = new_num6 + number;
        if (new_num6==56)
		{
			DrawCircle(blue2[new_num2][0],blue1[new_num6][1],20,colors[BLACK]);
			end6=1;
			DrawCircle(250, 649, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num6>55)
		{
			new_num6 = new_num6 - number;
		} 
		if (new_num6==47)
		{
			DrawCircle(blue2[new_num6][0],blue2[new_num6][1],20,colors[FLORAL_WHITE]);
		} else if (new_num1>50)
		{
            DrawCircle(blue2[new_num6][0],blue2[new_num6][1],20,colors[FLORAL_WHITE]);
		}
	    else 
		DrawCircle(250, 649, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select6=0;
  }
  DrawCircle(blue2[new_num6][0],blue2[new_num6][1],20,colors[BLUE]);
  DrawString(blue2[new_num6][0],blue2[new_num6][1],"F",colors[BLACK]);

  if (g!=0 && end7==0 && select7==1)
  {
	if (number==6 && turn7==0 && end7==0)
	{
		res_num = 0;
		turn7++;
		DrawCircle(100, 799, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(blue3[res_num][0],blue3[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(blue3[res_num][0],blue3[res_num][1],"G",colors[BLACK]);
	}else if (turn7>0 && end7==0)
	{
		DrawCircle(100, 799, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num7 = new_num7 + number;
        if (new_num7==56)
		{
			DrawCircle(blue3[new_num7][0],blue3[new_num7][1],20,colors[BLACK]);
			end7=1;
			DrawCircle(100, 799, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num7>55)
		{
			new_num7 = new_num7 - number;
		} 
		if (new_num7==47)
		{
			DrawCircle(blue3[new_num7][0],blue3[new_num7][1],20,colors[FLORAL_WHITE]);
		} else if (new_num1>50)
		{
            DrawCircle(blue3[new_num7][0],blue3[new_num7][1],20,colors[FLORAL_WHITE]);
		}
	    else 
		DrawCircle(100, 799, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select7=0;
  }
  DrawCircle(blue3[new_num7][0],blue3[new_num7][1],20,colors[BLUE]);
  DrawString(blue3[new_num7][0],blue3[new_num7][1],"G",colors[BLACK]);

  if (h!=0 && end8==0 && select8==1)
  {
	if (number==6 && turn8==0 && end8==0)
	{
		res_num = 0;
		turn8++;
		DrawCircle(250, 799, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(blue4[res_num][0],blue4[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(blue4[res_num][0],blue4[res_num][1],"H",colors[BLACK]);
	}else if (turn8>0 && end8==0)
	{
		DrawCircle(100, 100, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num8 = new_num8 + number;
        if (new_num8==56)
		{
			DrawCircle(blue4[new_num8][0],blue4[new_num8][1],20,colors[BLACK]);
			end8=1;
			DrawCircle(250, 799, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num8>55)
		{
			new_num8 = new_num8 - number;
		} 
		if (new_num8==47)
		{
			DrawCircle(blue4[new_num8][0],blue4[new_num8][1],20,colors[FLORAL_WHITE]);
		} else if (new_num8>50)
		{
            DrawCircle(blue4[new_num8][0],blue4[new_num8][1],20,colors[FLORAL_WHITE]);
		}
	    else 
		DrawCircle(250, 799, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select7=0;
  }
  DrawCircle(blue4[new_num8][0],blue4[new_num8][1],20,colors[BLUE]);
  DrawString(blue4[new_num8][0],blue4[new_num8][1],"H",colors[BLACK]);

    //       GREEEEEEN *************************
  if (i!=0 && end9==0 && select9==1)
  {
	if (number==6 && turn9==0 && end9==0)
	{
		res_num = 0;
		turn8++;
		DrawCircle(649, 649, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(green1[res_num][0],green1[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(green1[res_num][0],green1[res_num][1],"I",colors[BLACK]);
	}else if (turn9>0 && end9==0)
	{
		DrawCircle(100, 100, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num9 = new_num9 + number;
        if (new_num9==56)
		{
			DrawCircle(green1[new_num9][0],green1[new_num9][1],20,colors[BLACK]);
			end9=1;
			DrawCircle(649, 649, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num9>55)
		{
			new_num9 = new_num9 - number;
		} 
		if (new_num9==47)
		{
			DrawCircle(green1[new_num9][0],green1[new_num9][1],20,colors[FLORAL_WHITE]);
		} else if (new_num9>50)
		{
            DrawCircle(green1[new_num9][0],green1[new_num9][1],20,colors[FLORAL_WHITE]);
		}
	    else 
		DrawCircle(649, 649, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select9=0;
  }
  DrawCircle(green1[new_num9][0],green1[new_num9][1],20,colors[FOREST_GREEN]);
  DrawString(green1[new_num9][0],green1[new_num9][1],"I",colors[BLACK]);

  if (j!=0 && end10==0 && select10==1)
  {
	if (number==6 && turn10==0 && end10==0)
	{
		res_num = 0;
		turn10++;
		DrawCircle(799, 649, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(green2[res_num][0],green2[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(green2[res_num][0],green2[res_num][1],"J",colors[BLACK]);
	}else if (turn10>0 && end10==0)
	{
		DrawCircle(100, 100, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num10 = new_num10 + number;
        if (new_num10==56)
		{
			DrawCircle(green2[new_num10][0],green2[new_num10][1],20,colors[BLACK]);
			end10=1;
			DrawCircle(799, 649, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num10>55)
		{
			new_num10 = new_num10 - number;
		} 
		if (new_num10==47)
		{
			DrawCircle(green2[new_num10][0],green2[new_num10][1],20,colors[FLORAL_WHITE]);
		} else if (new_num10>50)
		{
            DrawCircle(green2[new_num10][0],green2[new_num10][1],20,colors[FLORAL_WHITE]);
		}
	    else 
		DrawCircle(799, 649, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select10=0;
  }
  DrawCircle(green2[new_num10][0],green2[new_num10][1],20,colors[FOREST_GREEN]);
  DrawString(green2[new_num10][0],green2[new_num10][1],"J",colors[BLACK]);

  if (k!=0 && end11==0 && select11==1)
  {
	if (number==6 && turn11==0 && end11==0)
	{
		res_num = 0;
		turn11++;
		DrawCircle(250, 799, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(green3[res_num][0],green3[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(green3[res_num][0],green3[res_num][1],"K",colors[BLACK]);
	}else if (turn11>0 && end11==0)
	{
		DrawCircle(649, 799, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num11 = new_num11 + number;
        if (new_num11==56)
		{
			DrawCircle(green3[new_num11][0],green3[new_num11][1],20,colors[BLACK]);
			end11=1;
			DrawCircle(649, 799, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num11>55)
		{
			new_num11 = new_num11 - number;
		} 
		if (new_num11==47)
		{
			DrawCircle(green3[new_num11][0],green3[new_num11][1],20,colors[FLORAL_WHITE]);
		} else if (new_num11>50)
		{
            DrawCircle(green3[new_num11][0],green3[new_num11][1],20,colors[FLORAL_WHITE]);
		}
	    else 
		DrawCircle(649, 799, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select11=0;
  }
  DrawCircle(green3[new_num11][0],green3[new_num11][1],20,colors[FOREST_GREEN]);
  DrawString(green3[new_num11][0],green3[new_num11][1],"K",colors[BLACK]);

  if (l!=0 && end12==0 && select12==1)
  {
	if (number==6 && turn12==0 && end12==0)
	{
		res_num = 0;
		turn12++;
		DrawCircle(799, 799, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(green4[res_num][0],green4[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(green4[res_num][0],green4[res_num][1],"L",colors[BLACK]);
	}else if (turn12>0 && end12==0)
	{
		DrawCircle(799, 799, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num12 = new_num12 + number;
        if (new_num12==56)
		{
			DrawCircle(green4[new_num12][0],green4[new_num12][1],20,colors[BLACK]);
			end12=1;
			DrawCircle(250, 799, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num12>55)
		{
			new_num12 = new_num12 - number;
		} 
		if (new_num12==47)
		{
			DrawCircle(green4[new_num12][0],green4[new_num12][1],20,colors[FLORAL_WHITE]);
		} else if (new_num12>50)
		{
            DrawCircle(green4[new_num12][0],green4[new_num12][1],20,colors[FLORAL_WHITE]);
		}
	    else 
		DrawCircle(799, 799, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select12=0;
  }
  DrawCircle(green4[new_num12][0],green4[new_num12][1],20,colors[FOREST_GREEN]);
  DrawString(green4[new_num12][0],green4[new_num12][1],"L",colors[BLACK]);

  //       YELLLOOOWWW *********************
  if (m!=0 && end13==0 && select13==1)
  {
	if (number==6 && turn13==0 && end13==0)
	{
		res_num = 0;
		turn13++;
		DrawCircle(649, 100, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(orange1[res_num][0],orange1[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(orange1[res_num][0],orange1[res_num][1],"M",colors[BLACK]);
	}else if (turn13>0 && end13==0)
	{
		DrawCircle(100, 100, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num13 = new_num13 + number;
        if (new_num13==56)
		{
			DrawCircle(orange1[new_num13][0],orange1[new_num13][1],20,colors[BLACK]);
			end13=1;
			DrawCircle(649, 100, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num13>55)
		{
			new_num13 = new_num13 - number;
		} 
		if (new_num13==47)
		{
			DrawCircle(orange1[new_num13][0],orange1[new_num13][1],20,colors[FLORAL_WHITE]);
		} else if (new_num13>50)
		{
            DrawCircle(orange1[new_num13][0],orange1[new_num13][1],20,colors[FLORAL_WHITE]);
		}
	    else 
		DrawCircle(649, 100, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select13=0;
  }
  DrawCircle(orange1[new_num13][0],orange1[new_num13][1],20,colors[ORANGE]);
  DrawString(orange1[new_num13][0],orange1[new_num13][1],"M",colors[BLACK]);

  if (n!=0 && end14==0 && select14==1)
  {
	if (number==6 && turn14==0 && end14==0)
	{
		res_num = 0;
		turn14++;
		DrawCircle(799, 100, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(orange2[res_num][0],orange2[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(orange2[res_num][0],orange2[res_num][1],"N",colors[BLACK]);
	}else if (turn14>0 && end14==0)
	{
		DrawCircle(799, 100, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num14 = new_num14 + number;
        if (new_num14==56)
		{
			DrawCircle(orange2[new_num14][0],orange2[new_num14][1],20,colors[BLACK]);
			end14=1;
			DrawCircle(799, 100, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num14>55)
		{
			new_num14 = new_num14 - number;
		} 
		if (new_num14==47)
		{
			DrawCircle(orange2[new_num14][0],orange2[new_num14][1],20,colors[FLORAL_WHITE]);
		} else if (new_num14>50)
		{
            DrawCircle(orange2[new_num14][0],orange2[new_num14][1],20,colors[FLORAL_WHITE]);
		}
	    else 
		DrawCircle(799, 100, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select14=0;
  }
  DrawCircle(orange2[new_num14][0],orange2[new_num14][1],20,colors[ORANGE]);
  DrawString(orange2[new_num14][0],orange2[new_num14][1],"N",colors[BLACK]);

  if (o!=0 && end15==0 && select15==1)
  {
	if (number==6 && turn15==0 && end15==0)
	{
		res_num = 0;
		turn15++;
		DrawCircle(649, 250, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(orange3[res_num][0],orange3[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(orange3[res_num][0],orange3[res_num][1],"O",colors[BLACK]);
	}else if (turn15>0 && end15==0)
	{
		DrawCircle(649, 250, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num15 = new_num15 + number;
        if (new_num15==56)
		{
			DrawCircle(orange3[new_num15][0],orange3[new_num15][1],20,colors[BLACK]);
			end15=1;
			DrawCircle(649, 250, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num15>55)
		{
			new_num15 = new_num15 - number;
		} 
		if (new_num15==47)
		{
			DrawCircle(orange3[new_num15][0],orange3[new_num15][1],20,colors[FLORAL_WHITE]);
		} else if (new_num15>50)
		{
            DrawCircle(orange3[new_num15][0],orange3[new_num15][1],20,colors[FLORAL_WHITE]);
		}
	    else 
		DrawCircle(649, 250, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select15=0;
  }
  DrawCircle(orange3[new_num15][0],orange3[new_num15][1],20,colors[ORANGE]);
  DrawString(orange3[new_num15][0],orange3[new_num15][1],"O",colors[BLACK]);

  if (p!=0 && end16==0 && select16==1)
  {
	if (number==6 && turn16==0 && end16==0)
	{
		res_num = 0;
		turn16++;
		DrawCircle(799, 250, 25,colors[WHITE]); // Replacing the gotti from home
		DrawCircle(orange4[res_num][0],orange4[res_num][1],23,colors[FLORAL_WHITE]);
		DrawString(orange4[res_num][0],orange4[res_num][1],"P",colors[BLACK]);
	}else if (turn16>0 && end16==0)
	{
		DrawCircle(799, 250, 25,colors[WHITE]); // Replacing the gotti fron home
		new_num16 = new_num16 + number;
        if (new_num16==56)
		{
			DrawCircle(orange4[new_num16][0],orange4[new_num16][1],20,colors[BLACK]);
			end16=1;
			DrawCircle(799, 250, 25,colors[WHITE]); // Replacing the gotti from home
		} else if (new_num16>55)
		{
			new_num16 = new_num16 - number;
		} 
		if (new_num16==47)
		{
			DrawCircle(orange4[new_num16][0],orange4[new_num16][1],20,colors[FLORAL_WHITE]);
		} else if (new_num15>50)
		{
            DrawCircle(orange4[new_num16][0],orange4[new_num16][1],20,colors[FLORAL_WHITE]);
		}
	    else 
		DrawCircle(799, 250, 25,colors[WHITE]); // Replacing the gotti fron home
	}
	select16=0;
  }
  DrawCircle(orange4[new_num16][0],orange4[new_num16][1],20,colors[ORANGE]);
  DrawString(orange4[new_num16][0],orange4[new_num16][1],"P",colors[BLACK]);

    //Draw
    //Display Score
	//DrawString( 50, 915, "Score=0", colors[MISTY_ROSE]);
	//Spider

	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)


	////DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	////DrawLine( 550 , 50 ,  550 , 480 , 10 , colors[MISTY_ROSE] );	
	
	///DrawCircle(50,670,10,colors[RED]);
	//DrawCircle(70,670,10,colors[RED]);
	//DrawCircle(90,670,10,colors[RED]);

	glutSwapBuffers(); // do not modify this line..

}


/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */
void NonPrintableKeys(int key, int x, int y) 
{
	if (key == GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) 
	{
		// what to do when left key is pressed...

	} else if (key == GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) 
	{

	} else if (key == GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) 
	{

	} else if (key == GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) 
	{

	}
	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/
	glutPostRedisplay();
}




/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) 
{
	if (key == 27/* Escape key ASCII*/) 
	{
		exit(1); // exit the program when escape key is pressed.
	}
     
    if (key == 32 /* ASCII for Space Bar*/)
	{
        // seed the random numbers generator by current time (see the documentation of srand for further help)...
        /// srand will generate a different value every time the program executes
        srand((unsigned) time(0));
        number = 1+(rand() % 6);
        GameDisplay();
		if (number==6)
		check=true;
	}


	if (check=true) 
	{
	    if (key==97 || key==65)
	    {
			a++;
			select1=1;
	    }
        if (key==98 || key==66)
	    {
            b++;
			select2=1;
	    }    
        if (key==99 || key==67)
	    {
	        c++;
			select3=1;
		}
		if (key==100 || key==68)
		{
			d++;
			select4=1;
		}

	    if (key==69 || key==101)
	    {
			e++;
			select5=1;
	    }
        if (key==70 || key==102)
	    {
            f++;
			select6=1;
	    }    
        if (key==71 || key==103)
	    {
	        g++;
			select7=1;
		}
		if (key==72 || key==104)
		{
			h++;
			select8=1;
		}

		if (key==73 || key==105)
	    {
			i++;
			select9=1;
	    }
        if (key==74 || key==106)
	    {
            j++;
			select9=1;
	    }    
        if (key==75 || key==107)
	    {
	        k++;
			select10=1;
		}
		if (key==76 || key==108)
		{
			l++;
			select11=1;
		}

		if (key==77 || key==109)
	    {
			m++;
			select12=1;
	    }
        if (key==78 || key==110)
	    {
            n++;
			select13=1;
	    }    
        if (key==79 || key==111)
	    {
	        o++;
			select14=1;
		}
		if (key==80 || key==112)
		{
			p++;
			select15=1;
		}
	}

    /*
	if (key == 'b' || key == 'B') //Key for placing the bomb		
	{
		//do something if b is pressed
		cout << "b pressed" << endl;
	}*/

	GameDisplay();
	//glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) 
{
	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1000.0, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) 
{
	cout << x << " " << y << endl;
	glutPostRedisplay();
}

void MouseMoved(int x, int y) 
{
	glutPostRedisplay();
}


/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) 
{

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
	{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
	{
    
	}
	glutPostRedisplay();
}

/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) 
{
    


/*
	//// Storing the names and colours of the players
   do
  {
	cout<<endl;
	cout<<endl;
    cout<<" Welcome! Please enter the number of Players: [Maximim Number of Players should not be more than 4]"<<endl;
	cin>>num;
  }
  while (num>4);

    // Storing Player Names 
    cout<<endl;
    cout<<" Please Enter the Name and Colour of the PLAYERS"<<endl;
    cout<<endl;

    while(i<=num)
    {
	    cout<<endl;
	    cout<<" Hey! PLAYER "<<i+1<<" Please Enter your Name:"<<endl;
	    cin>>name[i];
	    // Storing Colors of choice
        cout<<endl;
        while(1)
        {
            cout<<" COLOURS: RED - BLUE - FOREST GREEN - ORANGE "<<endl;
            cout<<" Hey! "<<name[i]<<" Please Select and Enter the colour of your side:"<<endl;
	        cin>>colour[i];
	        for (j=0 ; j<=num ; j++)
		    {
			    if (colour[j]==colour[j-1])
			    break;
		    }
        }
	}
    return 0;
}
*/

	//b = new Board(60, 60); // create a new board object to use in the Display Function ...
	int width = 1200, height = 1050; // i have set my window size to be 1200 x 1000
	//b->InitalizeBoard(width, height);
	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("PF Project"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.
    
	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);
    
	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */
