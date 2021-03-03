void __fastcall DoAction(int a1, unsigned int a2, signed int actionIndex, int a4, int a5, int a6, __int64 a7, int a8, __int64 a9)
{
  __int64 v9; // r15
  signed int v10; // edi
  __int64 v11; // rsi
  unsigned int v12; // er14
  __int64 v13; // rdi
  __int64 v14; // rbx
  int v15; // ST20_4
  _BYTE *v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // rcx
  __int64 *v21; // rdi
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
  _DWORD *v29; // rcx
  _DWORD *v30; // r8
  __int64 v31; // r8
  _DWORD *v32; // rcx
  _DWORD *v33; // r9
  int v34; // edx
  __int64 v35; // rax
  BYTE_BUFFER *v36; // rax
  BYTE_BUFFER *v37; // rax
  BYTE_BUFFER *v38; // rax
  __int64 v39; // rax
  BYTE_BUFFER *v40; // rax
  BYTE_BUFFER *v41; // rax
  BYTE_BUFFER *v42; // rax
  __int64 v43; // rax
  BYTE_BUFFER *v44; // rax
  BYTE_BUFFER *v45; // rax
  BYTE_BUFFER *v46; // rax
  __int64 v47; // rax
  BYTE_BUFFER *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  BYTE_BUFFER *v53; // rax
  BYTE_BUFFER *v54; // rax
  __int64 v55; // rax
  BYTE_BUFFER *v56; // rax
  BYTE_BUFFER *v57; // rax
  __int64 v58; // rbx
  unsigned int v59; // eax
  __int64 v60; // rax
  BYTE_BUFFER *v61; // rbx
  __int16 v62; // ax
  __int64 v63; // rax
  BYTE_BUFFER *v64; // rax
  BYTE_BUFFER *v65; // rax
  BYTE_BUFFER *v66; // rax
  BYTE_BUFFER *v67; // rax
  BYTE_BUFFER *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  BYTE_BUFFER *v71; // rax
  BYTE_BUFFER *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  BYTE_BUFFER *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  BYTE_BUFFER *v80; // rax
  BYTE_BUFFER *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  BYTE_BUFFER *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  BYTE_BUFFER *v87; // rax
  __int64 v88; // rax
  BYTE_BUFFER *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 *v92; // rdi
  __int64 *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  BYTE_BUFFER *v97; // rax
  BYTE_BUFFER *v98; // rax
  BYTE_BUFFER *v99; // rax
  BYTE_BUFFER *v100; // rax
  __int64 v101; // rbx
  char v102; // al
  BYTE_BUFFER *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rbx
  unsigned int v106; // eax
  __int64 v107; // rbx
  unsigned int v108; // eax
  BYTE_BUFFER *v109; // rax
  __int64 v110; // rbx
  char v111; // al
  BYTE_BUFFER *v112; // rax
  BYTE_BUFFER *v113; // rax
  BYTE_BUFFER *v114; // rax
  __int64 v115; // rax
  BYTE_BUFFER *v116; // rax
  __int64 v117; // rbx
  char v118; // al
  BYTE_BUFFER *v119; // rax
  __int64 v120; // rax
  __int64 v121; // rbx
  char v122; // al
  BYTE_BUFFER *v123; // rax
  BYTE_BUFFER *v124; // rax
  BYTE_BUFFER *v125; // rax
  __int64 v126; // rbx
  char v127; // al
  BYTE_BUFFER *v128; // rax
  BYTE_BUFFER *v129; // rax
  __int64 v130; // rbx
  char v131; // al
  BYTE_BUFFER *v132; // rax
  __int64 v133; // rax
  BYTE_BUFFER *v134; // rax
  BYTE_BUFFER *v135; // rax
  BYTE_BUFFER *v136; // rax
  __int64 v137; // rbx
  char v138; // al
  BYTE_BUFFER *v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  BYTE_BUFFER *v142; // rax
  __int64 v143; // rbx
  char v144; // al
  BYTE_BUFFER *v145; // rax
  __int64 v146; // rax
  __int64 v147; // rbx
  char v148; // al
  BYTE_BUFFER *v149; // rbx
  int v150; // eax
  BYTE_BUFFER *v151; // rax
  BYTE_BUFFER *v152; // rax
  BYTE_BUFFER *v153; // rbx
  __int16 v154; // ax
  BYTE_BUFFER *v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rbx
  char v162; // al
  BYTE_BUFFER *v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rbx
  char v169; // al
  BYTE_BUFFER *v170; // rax
  BYTE_BUFFER *v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rbx
  char v176; // al
  BYTE_BUFFER *v177; // rax
  BYTE_BUFFER *v178; // rax
  BYTE_BUFFER *v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  BYTE_BUFFER *v183; // rax
  __int64 v184; // rbx
  char v185; // al
  BYTE_BUFFER *v186; // rax
  BYTE_BUFFER *v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rax
  BYTE_BUFFER *v191; // rax
  BYTE_BUFFER *v192; // rax
  __int64 v193; // rbx
  char v194; // al
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // rbx
  __int64 v198; // rax
  __int64 v199; // rax
  BYTE_BUFFER *v200; // rax
  __int64 v201; // rbx
  char v202; // al
  BYTE_BUFFER *v203; // rax
  __int64 v204; // rax
  BYTE_BUFFER *v205; // rax
  __int64 v206; // rax
  signed __int64 v207; // rbx
  __int64 v208; // rax
  __int64 v209; // rax
  __int64 v210; // rbx
  char v211; // al
  BYTE_BUFFER *v212; // rax
  BYTE_BUFFER *v213; // rbx
  int v214; // eax
  BYTE_BUFFER *v215; // rbx
  __int16 v216; // ax
  __int64 v217; // rax
  char *v218; // rbx
  __int64 v219; // rax
  __int64 v220; // rax
  __int64 v221; // rbx
  char v222; // al
  __int64 v223; // rax
  __int64 v224; // rax
  __int64 v225; // rax
  __int64 v226; // rax
  __int64 v227; // rbx
  char v228; // al
  BYTE_BUFFER *v229; // rax
  __int64 v230; // rax
  __int64 v231; // rax
  __int64 v232; // rax
  __int64 v233; // rax
  __int64 v234; // rbx
  char v235; // al
  __int64 v236; // rax
  __int64 v237; // rax
  __int64 v238; // rax
  __int64 v239; // rbx
  char v240; // al
  __int64 v241; // rax
  __int64 v242; // rax
  __int64 v243; // rax
  __int64 v244; // rax
  BYTE_BUFFER *v245; // rax
  __int64 v246; // rbx
  char v247; // al
  __int64 v248; // rax
  __int64 v249; // rax
  __int64 v250; // rax
  __int64 v251; // rax
  __int64 v252; // rbx
  char v253; // al
  __int64 v254; // rax
  __int64 v255; // rax
  BYTE_BUFFER *v256; // rax
  BYTE_BUFFER *v257; // rax
  __int64 v258; // rax
  __int64 v259; // rax
  __int64 v260; // rax
  __int64 v261; // rax
  __int64 v262; // rbx
  char v263; // al
  BYTE_BUFFER *v264; // rax
  BYTE_BUFFER *v265; // rbx
  __int16 v266; // ax
  __int64 v267; // rbx
  unsigned int v268; // eax
  __int64 v269; // rax
  __int64 v270; // rax
  __int64 v271; // rax
  __int64 v272; // rax
  char v273; // al
  __int64 v274; // rax
  __int64 v275; // rax
  __int64 v276; // rax
  BYTE_BUFFER *v277; // rax
  __int64 v278; // rbx
  char v279; // al
  __int64 v280; // rax
  __int64 v281; // rax
  __int64 v282; // rax
  __int64 v283; // rax
  __int64 v284; // rbx
  char v285; // al
  BYTE_BUFFER *v286; // rax
  __int64 v287; // rax
  __int64 v288; // rbx
  __int64 v289; // rax
  __int64 v290; // rax
  __int64 v291; // rax
  __int64 v292; // rbx
  char v293; // al
  __int64 v294; // rax
  __int64 v295; // rax
  __int64 v296; // rax
  __int64 v297; // rax
  __int64 v298; // rax
  BYTE_BUFFER *v299; // rax
  __int64 v300; // rbx
  char v301; // al
  __int64 v302; // rax
  __int64 v303; // rax
  __int64 v304; // rax
  __int64 v305; // rax
  __int64 v306; // rax
  __int64 v307; // rbx
  char v308; // al
  __int64 v309; // rax
  __int64 v310; // rax
  __int64 v311; // rax
  __int64 v312; // rax
  BYTE_BUFFER *v313; // rax
  __int64 v314; // rbx
  char v315; // al
  __int64 v316; // rax
  __int64 v317; // rax
  __int64 v318; // rax
  __int64 v319; // rax
  __int64 v320; // rbx
  char v321; // al
  BYTE_BUFFER *v322; // rax
  __int64 v323; // rax
  __int64 v324; // rax
  __int64 v325; // rax
  __int64 v326; // rax
  __int64 v327; // rbx
  char v328; // al
  BYTE_BUFFER *v329; // rax
  __int64 v330; // rax
  __int64 v331; // rax
  __int64 v332; // rax
  BYTE_BUFFER *v333; // rax
  __int64 v334; // rax
  __int64 v335; // rax
  __int64 v336; // rax
  unsigned int *v337; // rbx
  __int64 v338; // rax
  __int64 v339; // rax
  __int64 v340; // rax
  __int64 v341; // rax
  __int64 v342; // rax
  __int64 v343; // rax
  __int64 v344; // rax
  __int64 v345; // rax
  __int64 v346; // rax
  BYTE_BUFFER *v347; // rbx
  _DWORD *v348; // rax
  __int64 v349; // rax
  __int64 v350; // rax
  __int64 v351; // rax
  BYTE_BUFFER *v352; // rbx
  int v353; // eax
  BYTE_BUFFER *v354; // rbx
  __int64 v355; // rax
  __int64 v356; // rbx
  unsigned int v357; // eax
  BYTE_BUFFER *v358; // rax
  __int64 v359; // rax
  BYTE_BUFFER *v360; // rbx
  __int16 v361; // ax
  __int64 v362; // rax
  __int64 v363; // rbx
  __int64 v364; // rax
  __int64 v365; // rax
  __int64 v366; // rbx
  __int64 v367; // rax
  __int64 v368; // rax
  __int64 v369; // rbx
  __int64 v370; // rax
  __int64 v371; // rax
  __int64 v372; // rbx
  __int64 v373; // rax
  __int64 v374; // rbx
  __int64 v375; // rax
  int *v376; // [rsp+20h] [rbp-E0h]
  char v377; // [rsp+30h] [rbp-D0h]
  __int64 v378; // [rsp+50h] [rbp-B0h]
  __int64 v379; // [rsp+58h] [rbp-A8h]
  __int64 v380; // [rsp+60h] [rbp-A0h]
  __int64 v381; // [rsp+68h] [rbp-98h]
  char v382; // [rsp+80h] [rbp-80h]
  char v383; // [rsp+88h] [rbp-78h]
  __int64 v384; // [rsp+C0h] [rbp-40h]
  char v385; // [rsp+D0h] [rbp-30h]
  char v386; // [rsp+F0h] [rbp-10h]
  char v387; // [rsp+110h] [rbp+10h]
  char v388; // [rsp+120h] [rbp+20h]
  char v389; // [rsp+130h] [rbp+30h]
  char v390; // [rsp+140h] [rbp+40h]
  char v391; // [rsp+150h] [rbp+50h]
  char v392; // [rsp+160h] [rbp+60h]
  char v393; // [rsp+170h] [rbp+70h]
  char v394; // [rsp+180h] [rbp+80h]
  char v395; // [rsp+190h] [rbp+90h]
  char v396; // [rsp+1A0h] [rbp+A0h]
  char v397; // [rsp+1B0h] [rbp+B0h]
  char v398; // [rsp+1C0h] [rbp+C0h]
  char v399; // [rsp+1D0h] [rbp+D0h]
  char v400; // [rsp+1F0h] [rbp+F0h]
  char v401; // [rsp+210h] [rbp+110h]
  char v402; // [rsp+230h] [rbp+130h]
  char v403; // [rsp+250h] [rbp+150h]
  char v404; // [rsp+2A0h] [rbp+1A0h]
  int v405; // [rsp+31Ch] [rbp+21Ch]
  char v406; // [rsp+320h] [rbp+220h]
  int v407; // [rsp+39Ch] [rbp+29Ch]
  char v408; // [rsp+3A0h] [rbp+2A0h]
  char v409; // [rsp+3A8h] [rbp+2A8h]
  char v410; // [rsp+3E0h] [rbp+2E0h]
  char v411; // [rsp+3E8h] [rbp+2E8h]
  char v412; // [rsp+420h] [rbp+320h]
  char v413; // [rsp+428h] [rbp+328h]
  char v414; // [rsp+460h] [rbp+360h]
  char v415; // [rsp+468h] [rbp+368h]
  char v416; // [rsp+4A0h] [rbp+3A0h]
  char v417; // [rsp+4A8h] [rbp+3A8h]
  char v418; // [rsp+4E0h] [rbp+3E0h]
  char v419; // [rsp+4E8h] [rbp+3E8h]
  char v420; // [rsp+520h] [rbp+420h]
  char v421; // [rsp+528h] [rbp+428h]
  char v422; // [rsp+560h] [rbp+460h]
  char v423; // [rsp+568h] [rbp+468h]
  char v424; // [rsp+5A0h] [rbp+4A0h]
  char v425; // [rsp+5A8h] [rbp+4A8h]
  char v426; // [rsp+5E0h] [rbp+4E0h]
  char v427; // [rsp+5E8h] [rbp+4E8h]
  char v428; // [rsp+620h] [rbp+520h]
  char v429; // [rsp+628h] [rbp+528h]
  char v430; // [rsp+660h] [rbp+560h]
  char v431; // [rsp+668h] [rbp+568h]
  char v432; // [rsp+6A0h] [rbp+5A0h]
  char v433; // [rsp+6A8h] [rbp+5A8h]
  char v434; // [rsp+6E0h] [rbp+5E0h]
  char v435; // [rsp+6E8h] [rbp+5E8h]
  char v436; // [rsp+720h] [rbp+620h]
  char v437; // [rsp+728h] [rbp+628h]
  char v438; // [rsp+760h] [rbp+660h]
  char v439; // [rsp+768h] [rbp+668h]
  char v440; // [rsp+7A0h] [rbp+6A0h]
  BYTE_BUFFER Bytes; // [rsp+7A8h] [rbp+6A8h]
  char v442; // [rsp+7E0h] [rbp+6E0h]
  char v443; // [rsp+7E8h] [rbp+6E8h]
  char v444; // [rsp+820h] [rbp+720h]
  char v445; // [rsp+828h] [rbp+728h]
  char v446; // [rsp+860h] [rbp+760h]
  char v447; // [rsp+868h] [rbp+768h]
  char v448; // [rsp+8A0h] [rbp+7A0h]
  char v449; // [rsp+8A8h] [rbp+7A8h]
  char v450; // [rsp+8E0h] [rbp+7E0h]
  BYTE_BUFFER v451; // [rsp+8E8h] [rbp+7E8h]
  char v452; // [rsp+920h] [rbp+820h]
  BYTE_BUFFER v453; // [rsp+928h] [rbp+828h]
  char v454; // [rsp+960h] [rbp+860h]
  char v455; // [rsp+968h] [rbp+868h]
  char v456; // [rsp+9A0h] [rbp+8A0h]
  char v457; // [rsp+9A8h] [rbp+8A8h]
  char v458; // [rsp+9E0h] [rbp+8E0h]
  char v459; // [rsp+9E8h] [rbp+8E8h]
  char v460; // [rsp+A20h] [rbp+920h]
  char v461; // [rsp+A28h] [rbp+928h]
  char v462; // [rsp+A60h] [rbp+960h]
  char v463; // [rsp+A68h] [rbp+968h]
  char v464; // [rsp+AA0h] [rbp+9A0h]
  char v465; // [rsp+AA8h] [rbp+9A8h]
  char v466; // [rsp+AE0h] [rbp+9E0h]
  char v467; // [rsp+AE8h] [rbp+9E8h]
  char v468; // [rsp+B20h] [rbp+A20h]
  int v469; // [rsp+B9Ch] [rbp+A9Ch]
  char v470; // [rsp+BE0h] [rbp+AE0h]

  v9 = a4;
  v10 = actionIndex - 2000;
  v11 = a1;
  if ( actionIndex < 2000 )
    v10 = actionIndex;
  v12 = a2;
  if ( v10 == 25 )
  {
    v13 = a9;
    if ( *(_QWORD *)(a9 + 8) )
    {
      sub_140061F90();
      v14 = *(_QWORD *)(v13 + 8);
      sub_1400467C0(v13);
      v15 = *(_DWORD *)(v14 + 1728);
      sub_140061E50(qword_14051E508);
      dword_14051DDCC = 0;
      sub_1400468C0(&v380, v13);
      if ( v380 == v381 )
        sub_140038390((__m128i **)&v380, (const __m128i *)qword_14189A750, qword_14189A758);
      sub_140037E00(&v385);
      v16 = *(_BYTE **)(v13 + 8);
      if ( *v16 )
      {
        v17 = sub_1400394F0((__int64 *)&v386, 0xFFFFFFu);
        v18 = sub_14002F390(&v382, v16 + 640, v17);
        v19 = sub_14002C0B0(v18);
        sub_140032CE0(&v385, v19);
        sub_14001A150(&v382);
        v20 = &v386;
      }
      else
      {
        v21 = sub_1400394F0((__int64 *)&v399, 0xFFFFFFu);
        v22 = sub_1400394F0((__int64 *)&v400, 0xFF00u);
        v23 = sub_14002F470(&v401, v22, v16 + 1616);
        v24 = sub_14002F470(&v402, v23, v21);
        v25 = sub_14002C0B0(v24);
        sub_140032CE0(&v385, v25);
        sub_14001A150(&v402);
        sub_14001A150(&v401);
        sub_14001A150(&v400);
        v20 = &v399;
      }
      sub_14001A150(v20);
      sub_140062090(qword_14051E508, &v380, &v385);
      sub_14001A150(&v385);
      sub_14001A150(&v380);
    }
  }
  else
  {
    v26 = a9;
    if ( v10 == 24 )
    {
      v27 = *(_QWORD *)(a9 + 8);
      if ( v27 )
      {
        if ( *(_DWORD *)(v27 + 20) <= 0 || (unsigned __int8)sub_140046630() )
        {
          sub_1401415C0((__int64)&v440, 33, qword_1416FC218 + 2560);
          j_WriteInt2(&Bytes, v12);
          sub_140092970(qword_1416FC218, &v440);
          sub_1401416F0(&Bytes);
          sub_14001B920(&Bytes);
        }
      }
    }
    if ( v10 == 26 )
      sub_140046280();
    if ( v10 == 28 )
    {
      sub_1401415C0((__int64)&v450, 33, qword_1416FC218 + 2560);
      j_WriteInt2(&v451, v12);
      sub_140092970(qword_1416FC218, &v450);
      v28 = *(_QWORD *)(v26 + 8);
      if ( v28 )
      {
        if ( *(_QWORD *)(v28 + 1544) )
        {
          v29 = *(_DWORD **)(*(_QWORD *)(v28 + 1552) + 16i64);
          if ( *v29 == 5 )
          {
            v30 = (_DWORD *)(qword_141894B78 + 4i64 * (signed int)v29[1]);
            *v30 = 1 - *v30;
            sub_140045EA0();
          }
        }
      }
      sub_1401416F0(&v451);
      sub_14001B920(&v451);
    }
    if ( v10 == 29 )
    {
      sub_1401415C0((__int64)&v452, 33, qword_1416FC218 + 2560);
      j_WriteInt2(&v453, v12);
      sub_140092970(qword_1416FC218, &v452);
      v31 = *(_QWORD *)(v26 + 8);
      if ( v31 )
      {
        if ( *(_QWORD *)(v31 + 1544) )
        {
          v32 = *(_DWORD **)(*(_QWORD *)(v31 + 1552) + 16i64);
          if ( *v32 == 5 )
          {
            v33 = (_DWORD *)(qword_141894B78 + 4i64 * (signed int)v32[1]);
            v34 = **(_DWORD **)(v31 + 1600);
            if ( *v33 != v34 )
            {
              *v33 = v34;
              sub_140045EA0();
            }
          }
        }
      }
      sub_1401416F0(&v453);
      sub_14001B920(&v453);
    }
    if ( v10 == 30 && !*((_QWORD *)&xmmword_1417081F8 + 1) && *(_QWORD *)(v26 + 8) )
    {
      sub_1400AB090(v12, (unsigned int)v11);
      v35 = sub_14002B870(&v380, v26);
      sub_14002C860(v35, &xmmword_1417081F8);
      if ( v380 )
        sub_140037B60();
      sub_14003D960(&xmmword_1417081F8);
    }
    if ( v10 == 33 )
    {
      sub_1401415C0((__int64)&v408, 57, qword_1416FC218 + 2560);
      sub_140020980(&v377, &v409);
      v36 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteInt1(v36, v12);
      v37 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      j_WriteShortReversed(v37, v9);
      v38 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteShort(v38, v11);
      sub_140092970(qword_1416FC218, &v408);
      dword_14051D86C = 0;
      v39 = sub_14002B870(&v380, v26);
      sub_14002C860(v39, &qword_141708208);
      if ( v380 )
        sub_140037B60();
      dword_14051DCEC = v11;
      sub_1401416F0(&v409);
      sub_14001B920(&v409);
    }
    if ( v10 == 34 )
    {
      sub_1401415C0((__int64)&v410, 22, qword_1416FC218 + 2560);
      sub_140020980(&v377, &v411);
      v40 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteByteNeg(v40, v9);
      v41 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteByteNeg(v41, v11);
      v42 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteInt1(v42, v12);
      sub_140092970(qword_1416FC218, &v410);
      dword_14051D86C = 0;
      v43 = sub_14002B870(&v380, v26);
      sub_14002C860(v43, &qword_141708208);
      if ( v380 )
        sub_140037B60();
      dword_14051DCEC = v11;
      sub_1401416F0(&v411);
      sub_14001B920(&v411);
    }
    if ( v10 == 35 )
    {
      sub_1401415C0((__int64)&v412, 87, qword_1416FC218 + 2560);
      sub_140020980(&v377, &v413);
      v44 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteByteNeg(v44, v11);
      v45 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      j_WriteInt2(v45, v12);
      v46 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteShort(v46, v9);
      sub_140092970(qword_1416FC218, &v412);
      dword_14051D86C = 0;
      v47 = sub_14002B870(&v380, v26);
      sub_14002C860(v47, &qword_141708208);
      if ( v380 )
        sub_140037B60();
      dword_14051DCEC = v11;
      sub_1401416F0(&v413);
      sub_14001B920(&v413);
    }
    if ( v10 == 36 )
    {
      sub_1401415C0((__int64)&v414, 60, qword_1416FC218 + 2560);
      sub_140020980(&v377, &v415);
      v48 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteByteNeg(v48, v11);
      v49 = ReferenceByteBuffer((__int64)&v377);
      sub_140077150(v49, (unsigned int)v9);
      v50 = ReferenceByteBuffer((__int64)&v377);
      sub_140077230(v50, v12);
      sub_140092970(qword_1416FC218, &v414);
      dword_14051D86C = 0;
      v51 = sub_14002B870(&v380, v26);
      sub_14002C860(v51, &qword_141708208);
      if ( v380 )
        sub_140037B60();
      dword_14051DCEC = v11;
      sub_1401416F0(&v415);
      sub_14001B920(&v415);
    }
    if ( v10 == 37 )
    {
      sub_1401415C0((__int64)&v416, 67, qword_1416FC218 + 2560);
      sub_140020980(&v377, &v417);
      v52 = ReferenceByteBuffer((__int64)&v377);
      sub_140079CC0(v52, v12);
      v53 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      j_WriteShortReversed(v53, v9);
      v54 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteByteNeg(v54, v11);
      sub_140092970(qword_1416FC218, &v416);
      dword_14051D86C = 0;
      v55 = sub_14002B870(&v380, v26);
      sub_14002C860(v55, &qword_141708208);
      if ( v380 )
        sub_140037B60();
      dword_14051DCEC = v11;
      sub_1401416F0(&v417);
      sub_14001B920(&v417);
    }
    if ( v10 == 32 )
    {
      sub_1401415C0((__int64)&v418, 55, qword_1416FC218 + 2560);
      sub_140020980(&v377, &v419);
      v56 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteShort(v56, v9);
      v57 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteByteNeg(v57, v11);
      v58 = ReferenceByteBuffer((__int64)&v377);
      v59 = sub_140062100(qword_14051E508);
      sub_140077230(v58, v59);
      v60 = ReferenceByteBuffer((__int64)&v377);
      sub_140079CC0(v60, v12);
      v61 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      v62 = sub_140062110(qword_14051E508);
      WriteShort(v61, v62);
      sub_140092970(qword_1416FC218, &v418);
      dword_14051D86C = 0;
      v63 = sub_14002B870(&v380, v26);
      sub_14002C860(v63, &qword_141708208);
      if ( v380 )
        sub_140037B60();
      dword_14051DCEC = v11;
      sub_1401416F0(&v419);
      sub_14001B920(&v419);
    }
    if ( v10 == 31 )
    {
      sub_1401415C0((__int64)&v420, 101, qword_1416FC218 + 2560);
      sub_140020980(&v377, &v421);
      v64 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteInt1(v64, dword_14051DDC8);
      v65 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteShort(v65, v11);
      v66 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteShort(v66, v9);
      v67 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteByteNeg(v67, dword_14051D868);
      v68 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      j_WriteShortReversed(v68, dword_14051DDD0);
      v69 = ReferenceByteBuffer((__int64)&v377);
      sub_140077230(v69, v12);
      sub_140092970(qword_1416FC218, &v420);
      dword_14051D86C = 0;
      v70 = sub_14002B870(&v380, v26);
      sub_14002C860(v70, &qword_141708208);
      if ( v380 )
        sub_140037B60();
      dword_14051DCEC = v11;
      sub_1401416F0(&v421);
      sub_14001B920(&v421);
    }
    if ( v10 == 39 )
    {
      sub_1401415C0((__int64)&v422, 26, qword_1416FC218 + 2560);
      sub_140020980(&v377, &v423);
      v71 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteShort(v71, v9);
      v72 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteShort(v72, v11);
      v73 = ReferenceByteBuffer((__int64)&v377);
      sub_140077230(v73, v12);
      sub_140092970(qword_1416FC218, &v422);
      dword_14051D86C = 0;
      v74 = sub_14002B870(&v380, v26);
      sub_14002C860(v74, &qword_141708208);
      if ( v380 )
        sub_140037B60();
      dword_14051DCEC = v11;
      sub_1401416F0(&v423);
      sub_14001B920(&v423);
    }
    if ( v10 == 40 )
    {
      sub_1401415C0((__int64)&v424, 65, qword_1416FC218 + 2560);
      sub_140020980(&v377, &v425);
      v75 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      j_WriteInt2(v75, v12);
      v76 = ReferenceByteBuffer((__int64)&v377);
      sub_140077150(v76, (unsigned int)v9);
      v77 = ReferenceByteBuffer((__int64)&v377);
      sub_140077150(v77, (unsigned int)v11);
      sub_140092970(qword_1416FC218, &v424);
      dword_14051D86C = 0;
      v78 = sub_14002B870(&v380, v26);
      sub_14002C860(v78, &qword_141708208);
      if ( v380 )
        sub_140037B60();
      dword_14051DCEC = v11;
      sub_1401416F0(&v425);
      sub_14001B920(&v425);
    }
    if ( v10 == 41 )
    {
      sub_1401415C0((__int64)&v426, 3, qword_1416FC218 + 2560);
      sub_140020980(&v377, &v427);
      v79 = ReferenceByteBuffer((__int64)&v377);
      sub_140077230(v79, v12);
      v80 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteByteNeg(v80, v11);
      v81 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      j_WriteShortReversed(v81, v9);
      sub_140092970(qword_1416FC218, &v426);
      dword_14051D86C = 0;
      v82 = sub_14002B870(&v380, v26);
      sub_14002C860(v82, &qword_141708208);
      if ( v380 )
        sub_140037B60();
      dword_14051DCEC = v11;
      sub_1401416F0(&v427);
      sub_14001B920(&v427);
    }
    if ( v10 == 42 )
    {
      sub_1401415C0((__int64)&v428, 52, qword_1416FC218 + 2560);
      sub_140020980(&v377, &v429);
      v83 = ReferenceByteBuffer((__int64)&v377);
      sub_140077150(v83, (unsigned int)v11);
      v84 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      j_WriteShortReversed(v84, v9);
      v85 = ReferenceByteBuffer((__int64)&v377);
      sub_140079CC0(v85, v12);
      sub_140092970(qword_1416FC218, &v428);
      dword_14051D86C = 0;
      v86 = sub_14002B870(&v380, v26);
      sub_14002C860(v86, &qword_141708208);
      if ( v380 )
        sub_140037B60();
      dword_14051DCEC = v11;
      sub_1401416F0(&v429);
      sub_14001B920(&v429);
    }
    if ( v10 == 43 )
    {
      sub_1401415C0((__int64)&v430, 68, qword_1416FC218 + 2560);
      sub_140020980(&v377, &v431);
      v87 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      WriteShort(v87, v11);
      v88 = ReferenceByteBuffer((__int64)&v377);
      sub_140079CC0(v88, v12);
      v89 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
      j_WriteShortReversed(v89, v9);
      sub_140092970(qword_1416FC218, &v430);
      dword_14051D86C = 0;
      v90 = sub_14002B870(&v380, v26);
      sub_14002C860(v90, &qword_141708208);
      if ( v380 )
        sub_140037B60();
      dword_14051DCEC = v11;
      sub_1401416F0(&v431);
      sub_14001B920(&v431);
    }
    if ( v10 == 38 )
    {
      sub_140061F90();
      dword_14051DDCC = 1;
      *(_DWORD *)&dword_14051DDD0 = v11;
      dword_14051DDC8 = v12;
      *(_DWORD *)&dword_14051D868 = v9;
      sub_14003D960(v26);
      sub_1400D73B0(&v378, (unsigned int)v9);
      v91 = v379;
      v92 = sub_1400394F0((__int64 *)&v386, 0xFFFFFFu);
      v93 = sub_1400394F0((__int64 *)&v385, 0xFF9040u);
      v94 = sub_14002F470(&v380, v93, v91 + 8);
      v95 = sub_14002F470(&v382, v94, v92);
      v96 = sub_14002C0B0(v95);
      sub_140032CE0(&off_14044E490, v96);
      sub_14001A150(&v382);
      sub_14001A150(&v380);
      sub_14001A150(&v385);
      sub_14001A150(&v386);
      if ( off_14044E490 == off_14044E498 && &qword_14189A750 != (__int64 *)&off_14044E490 )
        sub_140038390((__m128i **)&off_14044E490, (const __m128i *)qword_14189A750, qword_14189A758);
      if ( v378 )
        sub_140037B60();
    }
    else
    {
      if ( v10 == 16 )
      {
        dword_14051D798 = v11;
        dword_14051D79C = v12;
        sub_1401415C0((__int64)&v432, 9, qword_1416FC218 + 2560);
        sub_140020980(&v377, &v433);
        v97 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteShort(v97, v9);
        v98 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        j_WriteShortReversed(v98, dword_14051D868);
        v99 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        j_WriteShortReversed(v99, v12 + dword_14051E520);
        v100 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteByteNeg(v100, v11 + dword_14051E524);
        v101 = sub_1400209B0(&v377);
        v102 = sub_14001DC70(&off_14044C090, 82i64);
        sub_1400772A0(v101, v102 != 0);
        v103 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        j_WriteShortReversed(v103, dword_14051DDD0);
        v104 = ReferenceByteBuffer((__int64)&v377);
        sub_140077230(v104, (unsigned int)dword_14051DDC8);
        sub_140092970(qword_1416FC218, &v432);
        sub_1401416F0(&v433);
        sub_14001B920(&v433);
      }
      if ( v10 == 17 )
      {
        dword_14051D798 = v11;
        dword_14051D79C = v12;
        sub_1401415C0((__int64)&v434, 84, qword_1416FC218 + 2560);
        sub_140020980(&v377, &v435);
        v105 = ReferenceByteBuffer((__int64)&v377);
        v106 = sub_140062110(qword_14051E508);
        sub_140077150(v105, v106);
        v107 = ReferenceByteBuffer((__int64)&v377);
        v108 = sub_140062100(qword_14051E508);
        sub_140079CC0(v107, v108);
        v109 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteShort(v109, v9);
        v110 = sub_1400209B0(&v377);
        v111 = sub_14001DC70(&off_14044C090, 82i64);
        sub_1400772C0(v110, v111 != 0);
        v112 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        j_WriteShortReversed(v112, v12 + dword_14051E520);
        v113 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        j_WriteShortReversed(v113, v11 + dword_14051E524);
        sub_140092970(qword_1416FC218, &v434);
        sub_1401416F0(&v435);
        sub_14001B920(&v435);
      }
      if ( v10 == 18 )
      {
        dword_14051D798 = v11;
        dword_14051D79C = v12;
        sub_1401415C0((__int64)&v436, 53, qword_1416FC218 + 2560);
        sub_140020980(&v377, &v437);
        v114 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteByteNeg(v114, v12 + dword_14051E520);
        v115 = ReferenceByteBuffer((__int64)&v377);
        sub_140077150(v115, (unsigned int)v9);
        v116 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        j_WriteShortReversed(v116, v11 + dword_14051E524);
        v117 = sub_1400209B0(&v377);
        v118 = sub_14001DC70(&off_14044C090, 82i64);
        sub_1400772E0(v117, v118 != 0);
        sub_140092970(qword_1416FC218, &v436);
        sub_1401416F0(&v437);
        sub_14001B920(&v437);
      }
      if ( v10 == 19 )
      {
        dword_14051D798 = v11;
        dword_14051D79C = v12;
        sub_1401415C0((__int64)&v438, 27, qword_1416FC218 + 2560);
        sub_140020980(&v377, &v439);
        v119 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteShort(v119, v11 + dword_14051E524);
        v120 = ReferenceByteBuffer((__int64)&v377);
        sub_140077150(v120, (unsigned int)v9);
        v121 = sub_1400209B0(&v377);
        v122 = sub_14001DC70(&off_14044C090, 82i64);
        sub_14002FF30(v121, v122 != 0);
        v123 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        j_WriteShortReversed(v123, v12 + dword_14051E520);
        sub_140092970(qword_1416FC218, &v438);
        sub_1401416F0(&v439);
        sub_14001B920(&v439);
      }
      if ( v10 == 20 )
      {
        dword_14051D798 = v11;
        dword_14051D79C = v12;
        sub_1401415C0((__int64)&v448, 51, qword_1416FC218 + 2560);
        sub_140020980(&v377, &v449);
        v124 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        j_WriteShortReversed(v124, v9);
        v125 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteShort(v125, v12 + dword_14051E520);
        v126 = sub_1400209B0(&v377);
        v127 = sub_14001DC70(&off_14044C090, 82i64);
        sub_1400772C0(v126, v127 != 0);
        v128 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteShort(v128, v11 + dword_14051E524);
        sub_140092970(qword_1416FC218, &v448);
        sub_1401416F0(&v449);
        sub_14001B920(&v449);
      }
      if ( v10 == 21 )
      {
        dword_14051D798 = v11;
        dword_14051D79C = v12;
        sub_1401415C0((__int64)&v442, 95, qword_1416FC218 + 2560);
        sub_140020980(&v377, &v443);
        v129 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        j_WriteShortReversed(v129, v12 + dword_14051E520);
        v130 = sub_1400209B0(&v377);
        v131 = sub_14001DC70(&off_14044C090, 82i64);
        sub_1400772E0(v130, v131 != 0);
        v132 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteByteNeg(v132, v9);
        v133 = ReferenceByteBuffer((__int64)&v377);
        sub_140077150(v133, (unsigned int)(v11 + dword_14051E524));
        sub_140092970(qword_1416FC218, &v442);
        sub_1401416F0(&v443);
        sub_14001B920(&v443);
      }
      if ( v10 == 22 )
      {
        dword_14051D798 = v11;
        dword_14051D79C = v12;
        sub_1401415C0((__int64)&v444, 30, qword_1416FC218 + 2560);
        sub_140020980(&v377, &v445);
        v134 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        j_WriteShortReversed(v134, v12 + dword_14051E520);
        v135 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteByteNeg(v135, v11 + dword_14051E524);
        v136 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        j_WriteShortReversed(v136, v9);
        v137 = sub_1400209B0(&v377);
        v138 = sub_14001DC70(&off_14044C090, 82i64);
        sub_14002FF30(v137, v138 != 0);
        sub_140092970(qword_1416FC218, &v444);
        sub_1401416F0(&v445);
        sub_14001B920(&v445);
      }
      if ( v10 == 1 )
      {
        dword_14051D798 = v11;
        dword_14051D79C = v12;
        sub_1401415C0((__int64)&v446, 18, qword_1416FC218 + 2560);
        sub_140020980(&v377, &v447);
        v139 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteShort(v139, dword_14051D868);
        v140 = ReferenceByteBuffer((__int64)&v377);
        sub_140077150(v140, (unsigned int)v9);
        v141 = ReferenceByteBuffer((__int64)&v377);
        sub_140077150(v141, *(unsigned int *)&dword_14051DDD0);
        v142 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteShort(v142, v12 + dword_14051E520);
        v143 = sub_1400209B0(&v377);
        v144 = sub_14001DC70(&off_14044C090, 82i64);
        sub_1400772E0(v143, v144 != 0);
        v145 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteByteNeg(v145, v11 + dword_14051E524);
        v146 = ReferenceByteBuffer((__int64)&v377);
        sub_140077230(v146, (unsigned int)dword_14051DDC8);
        sub_140092970(qword_1416FC218, &v446);
        sub_1401416F0(&v447);
        sub_14001B920(&v447);
      }
      if ( v10 == 2 )
      {
        dword_14051D798 = v11;
        dword_14051D79C = v12;
        sub_1401415C0((__int64)&v454, 20, qword_1416FC218 + 2560);
        sub_140020980(&v377, &v455);
        v147 = sub_1400209B0(&v377);
        v148 = sub_14001DC70(&off_14044C090, 82i64);
        sub_1400772A0(v147, v148 != 0);
        v149 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        v150 = sub_140062100(qword_14051E508);
        WriteInt1(v149, v150);
        v151 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteByteNeg(v151, v9);
        v152 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        j_WriteShortReversed(v152, v12 + dword_14051E520);
        v153 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        v154 = sub_140062110(qword_14051E508);
        WriteByteNeg(v153, v154);
        v155 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteShort(v155, v11 + dword_14051E524);
        v156 = sub_14002B630(&qword_1416FC218);
        sub_140092970(v156, &v454);
        sub_14001B900(&v454);
      }
      if ( v10 == 3 )
      {
        dword_14051D798 = v11;
        dword_14051D79C = v12;
        v157 = sub_14002B630(&qword_1416FC218);
        v158 = sub_140020890(v157);
        sub_1401415C0((__int64)&v462, 94, v158);
        sub_1400209C0(&v377, &v463);
        v159 = ReferenceByteBuffer((__int64)&v377);
        sub_140077150(v159, v12 + dword_14051E520);
        v160 = ReferenceByteBuffer((__int64)&v377);
        sub_140077150(v160, (unsigned int)(v11 + dword_14051E524));
        v161 = sub_1400209B0(&v377);
        v162 = sub_14001DC70(&off_14044C090, 82i64);
        sub_14002FF30(v161, v162 != 0);
        v163 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        j_WriteShortReversed(v163, v9);
        v164 = sub_14002B630(&qword_1416FC218);
        sub_140092970(v164, &v462);
        sub_14001B900(&v462);
      }
      if ( v10 == 4 )
      {
        dword_14051D798 = v11;
        dword_14051D79C = v12;
        v165 = sub_14002B630(&qword_1416FC218);
        v166 = sub_140020890(v165);
        sub_1401415C0((__int64)&v464, 78, v166);
        sub_1400209C0(&v377, &v465);
        v167 = ReferenceByteBuffer((__int64)&v377);
        sub_140077150(v167, v12 + dword_14051E520);
        v168 = sub_1400209B0(&v377);
        v169 = sub_14001DC70(&off_14044C090, 82i64);
        sub_1400772E0(v168, v169 != 0);
        v170 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteShort(v170, v9);
        v171 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        j_WriteShortReversed(v171, v11 + dword_14051E524);
        v172 = sub_14002B630(&qword_1416FC218);
        sub_140092970(v172, &v464);
        sub_14001B900(&v464);
      }
      if ( v10 == 5 )
      {
        dword_14051D798 = v11;
        dword_14051D79C = v12;
        v173 = sub_14002B630(&qword_1416FC218);
        v174 = sub_140020890(v173);
        sub_1401415C0((__int64)&v466, 89, v174);
        sub_1400209C0(&v377, &v467);
        v175 = sub_1400209B0(&v377);
        v176 = sub_14001DC70(&off_14044C090, 82i64);
        sub_14002FF30(v175, v176 != 0);
        v177 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteShort(v177, v9);
        v178 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteShort(v178, v11 + dword_14051E524);
        v179 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteByteNeg(v179, v12 + dword_14051E520);
        v180 = sub_14002B630(&qword_1416FC218);
        sub_140092970(v180, &v466);
        sub_14001B900(&v466);
      }
      if ( v10 == 6 )
      {
        dword_14051D798 = v11;
        dword_14051D79C = v12;
        v181 = sub_14002B630(&qword_1416FC218);
        v182 = sub_140020890(v181);
        sub_1401415C0((__int64)&v456, 17, v182);
        sub_1400209C0(&v377, &v457);
        v183 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteByteNeg(v183, v12 + dword_14051E520);
        v184 = sub_1400209B0(&v377);
        v185 = sub_14001DC70(&off_14044C090, 82i64);
        sub_1400772C0(v184, v185 != 0);
        v186 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteByteNeg(v186, v11 + dword_14051E524);
        v187 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteByteNeg(v187, v9);
        v188 = sub_14002B630(&qword_1416FC218);
        sub_140092970(v188, &v456);
        sub_14001B900(&v456);
      }
      if ( v10 == 1001 )
      {
        dword_14051D798 = v11;
        dword_14051D79C = v12;
        v189 = sub_14002B630(&qword_1416FC218);
        v190 = sub_140020890(v189);
        sub_1401415C0((__int64)&v458, 80, v190);
        sub_1400209C0(&v377, &v459);
        v191 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteShort(v191, v11 + dword_14051E524);
        v192 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteByteNeg(v192, v9);
        v193 = sub_1400209B0(&v377);
        v194 = sub_14001DC70(&off_14044C090, 82i64);
        sub_1400772E0(v193, v194 != 0);
        v195 = ReferenceByteBuffer((__int64)&v377);
        sub_140077150(v195, v12 + dword_14051E520);
        v196 = sub_14002B630(&qword_1416FC218);
        sub_140092970(v196, &v458);
        sub_14001B900(&v458);
      }
      v197 = v9;
      if ( v10 == 7 )
      {
        sub_14002B870(&v387, (char *)&unk_1417088A0 + 16 * v9);
        if ( (unsigned __int8)sub_140031030(&v387, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v198 = sub_14002B630(&qword_1416FC218);
          v199 = sub_140020890(v198);
          sub_1401415C0((__int64)&v382, 85, v199);
          sub_1400209C0(&v377, &v383);
          v200 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
          WriteInt1(v200, dword_14051DDC8);
          v201 = sub_1400209B0(&v377);
          v202 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772E0(v201, v202 != 0);
          v203 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
          j_WriteShortReversed(v203, dword_14051D868);
          v204 = ReferenceByteBuffer((__int64)&v377);
          sub_140077150(v204, (unsigned int)v9);
          v205 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
          j_WriteShortReversed(v205, dword_14051DDD0);
          v206 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v206, &v382);
          sub_14001B900(&v382);
          v197 = v9;
        }
        sub_14002B810(&v387);
      }
      v207 = 16 * v197;
      *(_QWORD *)&a5 = v207;
      if ( v10 == 8 )
      {
        sub_14002B870(&v388, (char *)&unk_1417088A0 + v207);
        if ( (unsigned __int8)sub_140031030(&v388, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v208 = sub_14002B630(&qword_1416FC218);
          v209 = sub_140020890(v208);
          sub_1401415C0((__int64)&v382, 38, v209);
          sub_1400209C0(&v377, &v383);
          v210 = sub_1400209B0(&v377);
          v211 = sub_14001DC70(&off_14044C090, 82i64);
          sub_14002FF30(v210, v211 != 0);
          v212 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
          WriteByteNeg(v212, v9);
          v213 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
          v214 = sub_140062100(qword_14051E508);
          j_WriteInt2(v213, v214);
          v215 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
          v216 = sub_140062110(qword_14051E508);
          j_WriteShortReversed(v215, v216);
          v217 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v217, &v382);
          sub_14001B900(&v382);
          v207 = *(_QWORD *)&a5;
        }
        sub_14002B810(&v388);
      }
      v218 = (char *)&unk_1417088A0 + v207;
      *(_QWORD *)&a5 = v218;
      if ( v10 == 9 )
      {
        sub_14002B870(&v389, v218);
        if ( (unsigned __int8)sub_140031030(&v389, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v219 = sub_14002B630(&qword_1416FC218);
          v220 = sub_140020890(v219);
          sub_1401415C0((__int64)&v382, 7, v220);
          sub_1400209C0(&v378, &v383);
          v221 = sub_1400209B0(&v378);
          v222 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772A0(v221, v222 != 0);
          v223 = ReferenceByteBuffer((__int64)&v378);
          sub_140077150(v223, (unsigned int)v9);
          v224 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v224, &v382);
          sub_14001B900(&v382);
          v218 = *(char **)&a5;
        }
        sub_14002B810(&v389);
      }
      if ( v10 == 10 )
      {
        sub_14002B870(&v390, v218);
        if ( (unsigned __int8)sub_140031030(&v390, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v225 = sub_14002B630(&qword_1416FC218);
          v226 = sub_140020890(v225);
          sub_1401415C0((__int64)&v382, 40, v226);
          sub_1400209C0(&v378, &v383);
          v227 = sub_1400209B0(&v378);
          v228 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772E0(v227, v228 != 0);
          v229 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v378);
          j_WriteShortReversed(v229, v9);
          v230 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v230, &v382);
          sub_14001B900(&v382);
          v218 = *(char **)&a5;
        }
        sub_14002B810(&v390);
      }
      if ( v10 == 11 )
      {
        sub_14002B870(&v391, v218);
        if ( (unsigned __int8)sub_140031030(&v391, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v231 = sub_14002B630(&qword_1416FC218);
          v232 = sub_140020890(v231);
          sub_1401415C0((__int64)&v382, 31, v232);
          sub_1400209C0(&v378, &v383);
          v233 = ReferenceByteBuffer((__int64)&v378);
          sub_140077150(v233, (unsigned int)v9);
          v234 = sub_1400209B0(&v378);
          v235 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772A0(v234, v235 != 0);
          v236 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v236, &v382);
          sub_14001B900(&v382);
          v218 = *(char **)&a5;
        }
        sub_14002B810(&v391);
      }
      if ( v10 == 12 )
      {
        sub_14002B870(&v392, v218);
        if ( (unsigned __int8)sub_140031030(&v392, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v237 = sub_14002B630(&qword_1416FC218);
          v238 = sub_140020890(v237);
          sub_1401415C0((__int64)&v382, 2, v238);
          sub_1400209C0(&v378, &v383);
          v239 = sub_1400209B0(&v378);
          v240 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772E0(v239, v240 != 0);
          v241 = ReferenceByteBuffer((__int64)&v378);
          sub_140077150(v241, (unsigned int)v9);
          v242 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v242, &v382);
          sub_14001B900(&v382);
          v218 = *(char **)&a5;
        }
        sub_14002B810(&v392);
      }
      if ( v10 == 13 )
      {
        sub_14002B870(&v393, v218);
        if ( (unsigned __int8)sub_140031030(&v393, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v243 = sub_14002B630(&qword_1416FC218);
          v244 = sub_140020890(v243);
          sub_1401415C0((__int64)&v382, 73, v244);
          sub_1400209C0(&v378, &v383);
          v245 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v378);
          WriteByteNeg(v245, v9);
          v246 = sub_1400209B0(&v378);
          v247 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772C0(v246, v247 != 0);
          v248 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v248, &v382);
          sub_14001B900(&v382);
        }
        sub_14002B810(&v393);
      }
      if ( v10 == 14 )
      {
        v249 = sub_14002B620(&unk_1416FD670, v9);
        sub_14002B870(&v394, v249);
        if ( (unsigned __int8)sub_140031030(&v394, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v250 = sub_14002B630(&qword_1416FC218);
          v251 = sub_140020890(v250);
          sub_1401415C0((__int64)&v382, 83, v251);
          sub_1400209C0(&v377, &v383);
          v252 = sub_1400209B0(&v377);
          v253 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772C0(v252, v253 != 0);
          v254 = ReferenceByteBuffer((__int64)&v377);
          sub_140077230(v254, (unsigned int)dword_14051DDC8);
          v255 = ReferenceByteBuffer((__int64)&v377);
          sub_140077150(v255, *(unsigned int *)&dword_14051DDD0);
          v256 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
          WriteShort(v256, v9);
          v257 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
          WriteShort(v257, dword_14051D868);
          v258 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v258, &v382);
          sub_14001B900(&v382);
        }
        sub_14002B810(&v394);
      }
      if ( v10 == 15 )
      {
        v259 = sub_14002B620(&unk_1416FD670, v9);
        sub_14002B870(&v395, v259);
        if ( (unsigned __int8)sub_140031030(&v395, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v260 = sub_14002B630(&qword_1416FC218);
          v261 = sub_140020890(v260);
          sub_1401415C0((__int64)&v382, 96, v261);
          sub_1400209C0(&v377, &v383);
          v262 = sub_1400209B0(&v377);
          v263 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772E0(v262, v263 != 0);
          v264 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
          WriteByteNeg(v264, v9);
          v265 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
          v266 = sub_140062110(qword_14051E508);
          WriteByteNeg(v265, v266);
          v267 = ReferenceByteBuffer((__int64)&v377);
          v268 = sub_140062100(qword_14051E508);
          sub_140077230(v267, v268);
          v269 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v269, &v382);
          sub_14001B900(&v382);
        }
        sub_14002B810(&v395);
      }
      if ( v10 == 23 )
      {
        if ( (unsigned __int8)sub_140067FC0(qword_14051E508) )
        {
          v270 = sub_140073CB0(&qword_1418860A0);
          sub_1400FAEB0(v270);
        }
        else
        {
          v271 = sub_14001AD70(qword_14051E528);
          v272 = sub_14001AC70(v271);
          v376 = &a8;
          sub_1401043E0(v272);
          v273 = sub_140073CB0(&qword_1418860A0);
          LOBYTE(v376) = 1;
          sub_1400FAE50(v273);
        }
      }
      if ( v10 == 44 )
      {
        v274 = sub_14002B620(&unk_1416FD670, v9);
        sub_14002B870(&v396, v274);
        if ( (unsigned __int8)sub_140031030(&v396, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v275 = sub_14002B630(&qword_1416FC218);
          v276 = sub_140020890(v275);
          sub_1401415C0((__int64)&v382, 6, v276);
          sub_1400209C0(&v378, &v383);
          v277 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v378);
          WriteShort(v277, v9);
          v278 = sub_1400209B0(&v378);
          v279 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772C0(v278, v279 != 0);
          v280 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v280, &v382);
          sub_14001B900(&v382);
        }
        sub_14002B810(&v396);
      }
      if ( v10 == 45 )
      {
        v281 = sub_14002B620(&unk_1416FD670, v9);
        sub_14002B870(&v397, v281);
        if ( (unsigned __int8)sub_140031030(&v397, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v282 = sub_14002B630(&qword_1416FC218);
          v283 = sub_140020890(v282);
          sub_1401415C0((__int64)&v382, 13, v283);
          sub_1400209C0(&v378, &v383);
          v284 = sub_1400209B0(&v378);
          v285 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772E0(v284, v285 != 0);
          v286 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v378);
          WriteShort(v286, v9);
          v287 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v287, &v382);
          sub_14001B900(&v382);
        }
        sub_14002B810(&v397);
      }
      v288 = v9;
      if ( v10 == 46 )
      {
        v289 = sub_14002B620(&unk_1416FD670, v9);
        sub_14002B870(&v399, v289);
        if ( (unsigned __int8)sub_140031030(&v399, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v290 = sub_14002B630(&qword_1416FC218);
          v291 = sub_140020890(v290);
          sub_1401415C0((__int64)&v382, 49, v291);
          sub_1400209C0(&v378, &v383);
          v292 = sub_1400209B0(&v378);
          v293 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772C0(v292, v293 != 0);
          v294 = ReferenceByteBuffer((__int64)&v378);
          sub_140077150(v294, (unsigned int)v9);
          v295 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v295, &v382);
          sub_14001B900(&v382);
          v288 = v9;
        }
        sub_14002B810(&v399);
      }
      v384 = v288;
      if ( v10 == 47 )
      {
        v296 = sub_14002B620(&unk_1416FD670, v288);
        sub_14002B870(&v400, v296);
        if ( (unsigned __int8)sub_140031030(&v400, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v297 = sub_14002B630(&qword_1416FC218);
          v298 = sub_140020890(v297);
          sub_1401415C0((__int64)&v382, 46, v298);
          sub_1400209C0(&v378, &v383);
          v299 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v378);
          WriteShort(v299, v9);
          v300 = sub_1400209B0(&v378);
          v301 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772C0(v300, v301 != 0);
          v302 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v302, &v382);
          sub_14001B900(&v382);
          v288 = v9;
        }
        sub_14002B810(&v400);
      }
      if ( v10 == 48 )
      {
        v303 = sub_14002B620(&unk_1416FD670, v288);
        sub_14002B870(&v401, v303);
        if ( (unsigned __int8)sub_140031030(&v401, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v304 = sub_14002B630(&qword_1416FC218);
          v305 = sub_140020890(v304);
          sub_1401415C0((__int64)&v382, 50, v305);
          sub_1400209C0(&v378, &v383);
          v306 = ReferenceByteBuffer((__int64)&v378);
          sub_140077150(v306, (unsigned int)v9);
          v307 = sub_1400209B0(&v378);
          v308 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772C0(v307, v308 != 0);
          v309 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v309, &v382);
          sub_14001B900(&v382);
          v288 = v9;
        }
        sub_14002B810(&v401);
      }
      if ( v10 == 49 )
      {
        v310 = sub_14002B620(&unk_1416FD670, v288);
        sub_14002B870(&v402, v310);
        if ( (unsigned __int8)sub_140031030(&v402, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v311 = sub_14002B630(&qword_1416FC218);
          v312 = sub_140020890(v311);
          sub_1401415C0((__int64)&v382, 10, v312);
          sub_1400209C0(&v378, &v383);
          v313 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v378);
          j_WriteShortReversed(v313, v9);
          v314 = sub_1400209B0(&v378);
          v315 = sub_14001DC70(&off_14044C090, 82i64);
          sub_14002FF30(v314, v315 != 0);
          v316 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v316, &v382);
          sub_14001B900(&v382);
        }
        sub_14002B810(&v402);
      }
      if ( v10 == 50 )
      {
        v317 = sub_14002B620(&unk_1416FD670, v384);
        sub_14002B870(&v386, v317);
        if ( (unsigned __int8)sub_140031030(&v386, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v318 = sub_14002B630(&qword_1416FC218);
          v319 = sub_140020890(v318);
          sub_1401415C0((__int64)&v382, 79, v319);
          sub_1400209C0(&v378, &v383);
          v320 = sub_1400209B0(&v378);
          v321 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772A0(v320, v321 != 0);
          v322 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v378);
          WriteByteNeg(v322, v9);
          v323 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v323, &v382);
          sub_14001B900(&v382);
        }
        sub_14002B810(&v386);
      }
      if ( v10 == 51 )
      {
        v324 = sub_14002B620(&unk_1416FD670, v384);
        sub_14002B870(&v385, v324);
        if ( (unsigned __int8)sub_140031030(&v385, 0i64) )
        {
          dword_14051D798 = v11;
          dword_14051D79C = v12;
          v325 = sub_14002B630(&qword_1416FC218);
          v326 = sub_140020890(v325);
          sub_1401415C0((__int64)&v382, 98, v326);
          sub_1400209C0(&v378, &v383);
          v327 = sub_1400209B0(&v378);
          v328 = sub_14001DC70(&off_14044C090, 82i64);
          sub_1400772C0(v327, v328 != 0);
          v329 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v378);
          WriteShort(v329, v9);
          v330 = sub_14002B630(&qword_1416FC218);
          sub_140092970(v330, &v382);
          sub_14001B900(&v382);
        }
        sub_14002B810(&v385);
      }
      if ( v10 == 1002 )
      {
        v331 = sub_14002B630(&qword_1416FC218);
        v332 = sub_140020890(v331);
        sub_1401415C0((__int64)&v460, 62, v332);
        sub_1400209C0(&v380, &v461);
        v333 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v380);
        WriteByteNeg(v333, v9);
        v334 = sub_14002B630(&qword_1416FC218);
        sub_140092970(v334, &v460);
        sub_14001B900(&v460);
      }
      if ( v10 == 1004 )
        sub_140042110((unsigned int)v9);
      if ( v10 == 1005 )
      {
        if ( (unsigned __int8)sub_140031030(v26, 0i64)
          && (v335 = sub_14002B5E0(v26), *(_DWORD *)sub_14002FAF0(v335 + 1704, v11) >= 100000) )
        {
          sub_1400D73B0(&v378, (unsigned int)v9);
          sub_140037E00(&v380);
          v336 = sub_14002B5E0(v26);
          v337 = (unsigned int *)sub_14002FAF0(v336 + 1704, v11);
          v338 = sub_14002B5E0(&v378);
          v339 = sub_140032D80(v338 + 8);
          sub_140074CD0(&v380, "%ix%s", *v337, v339, v376);
          v340 = sub_140032D80(&v380);
          sub_14002EAC0(&v382, v340, &v470);
          sub_14002EAC0(&v377, &pServiceName, &a7);
          sub_14001BBD0(27i64, &v377, &v382);
          sub_14001A150(&v377);
          sub_14001A150(&v382);
          sub_1400380C0(&v380);
          sub_14002B810(&v378);
        }
        else
        {
          sub_140042110((unsigned int)v9);
        }
        dword_14051D86C = 0;
        sub_14002B550(&qword_141708208, v26);
        dword_14051DCEC = v11;
      }
      if ( v10 == 1003 )
      {
        sub_14002B870(&v378, (char *)&unk_1417088A0 + 16 * v9);
        if ( (unsigned __int8)sub_140031030(&v378, 0i64) )
        {
          v341 = sub_14002B5E0(&v378);
          sub_14002B870(&v377, v341 + 840);
          v342 = sub_14002B5E0(&v377);
          if ( !(unsigned __int8)sub_140073FD0(v342 + 464) )
          {
            v343 = sub_14002B5E0(&v377);
            v344 = sub_1400D71B0(v343, &v380);
            sub_14002B550(&v377, v344);
            sub_14002B810(&v380);
          }
          if ( (unsigned __int8)sub_140031030(&v377, 0i64) )
          {
            v345 = sub_14002B630(&qword_1416FC218);
            v346 = sub_140020890(v345);
            sub_1401415C0((__int64)&v382, 42, v346);
            sub_1400209C0(&v380, &v383);
            v347 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v380);
            v348 = (_DWORD *)sub_14002B5E0(&v377);
            j_WriteShortReversed(v347, *v348);
            v349 = sub_14002B630(&qword_1416FC218);
            sub_140092970(v349, &v382);
            sub_14001B900(&v382);
          }
          sub_14002B810(&v377);
        }
        sub_14002B810(&v378);
      }
      if ( v10 == 57 || v10 == 1007 )
        sub_140045890((unsigned int)v9, v26, *(_QWORD *)&a6);
      if ( v10 == 58 && (unsigned __int8)sub_140031030(v26, 0i64) )
      {
        v350 = sub_14002B630(&qword_1416FC218);
        v351 = sub_140020890(v350);
        sub_1401415C0((__int64)&v382, 15, v351);
        sub_1400209C0(&v377, &v383);
        v352 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        v353 = sub_140062100(qword_14051E508);
        j_WriteInt2(v352, v353);
        v354 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        v355 = sub_14002B5E0(v26);
        WriteByteNeg(v354, *(_DWORD *)(v355 + 1728));
        v356 = ReferenceByteBuffer((__int64)&v377);
        v357 = sub_140062120(qword_14051E508);
        sub_140077150(v356, v357);
        v358 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        WriteByteNeg(v358, v11);
        v359 = ReferenceByteBuffer((__int64)&v377);
        sub_140077230(v359, v12);
        v360 = (BYTE_BUFFER *)ReferenceByteBuffer((__int64)&v377);
        v361 = sub_140062110(qword_14051E508);
        WriteShort(v360, v361);
        v362 = sub_14002B630(&qword_1416FC218);
        sub_140092970(v362, &v382);
        sub_14001B900(&v382);
      }
      if ( (unsigned int)(v10 - 1008) <= 4 )
      {
        sub_1400BEB30(&v398, (unsigned int)v11);
        sub_1400BEB30(&v384, v12);
        sub_140072B10(qword_14051DE48);
      }
      if ( v10 == 1850 )
      {
        sub_14002B870(&v380, (char *)&unk_1417088A0 + 16 * v9);
        if ( (unsigned __int8)sub_140031030(&v380, 0i64) )
        {
          sub_140026900((unsigned int)v9);
          sub_140027D60(&v406);
          sub_14002B800(&v406, 1i64);
          v363 = sub_14001B270(&v403, (unsigned int)v11);
          v364 = sub_1400302E0(&v406, 0i64);
          sub_14001B340(v364, v363);
          sub_14001FA40(&v403);
          v407 = 30;
          sub_1400268C0(&v406, 500000i64);
          sub_140027DB0(&v406);
        }
        sub_14002B810(&v380);
      }
      if ( v10 == 1851 )
      {
        v365 = sub_1400BEB30(&v377, v12);
        sub_140026910(v365, (unsigned int)v9);
        sub_140027D60(&v406);
        sub_14002B800(&v406, 1i64);
        v366 = sub_14001B270(&v403, (unsigned int)v11);
        v367 = sub_1400302E0(&v406, 0i64);
        sub_14001B340(v367, v366);
        sub_14001FA40(&v403);
        v407 = 31;
        sub_1400268C0(&v406, 500000i64);
        sub_140027DB0(&v406);
      }
      if ( v10 == 1852 )
      {
        v368 = sub_1400BEB30(&v377, v12);
        sub_140026930(v368, (unsigned int)v9);
        sub_140027D60(&v468);
        sub_14002B800(&v468, 1i64);
        v369 = sub_14001B270(&v403, (unsigned int)v11);
        v370 = sub_1400302E0(&v468, 0i64);
        sub_14001B340(v370, v369);
        sub_14001FA40(&v403);
        v469 = 32;
        sub_1400268C0(&v468, 500000i64);
        sub_140027DB0(&v468);
      }
      if ( v10 == 1853 )
      {
        v371 = sub_14002B620(&unk_1416FD670, v9);
        sub_14002B870(&v377, v371);
        if ( (unsigned __int8)sub_140031030(&v377, 0i64) )
        {
          sub_140026950((unsigned int)v9);
          sub_140027D60(&v404);
          sub_14002B800(&v404, 1i64);
          v372 = sub_14001B270(&v403, (unsigned int)v11);
          v373 = sub_1400302E0(&v404, 0i64);
          sub_14001B340(v373, v372);
          sub_14001FA40(&v403);
          v405 = 33;
          sub_1400268C0(&v404, 500000i64);
          sub_140027DB0(&v404);
        }
        sub_14002B810(&v377);
      }
      if ( v10 == 1854 )
      {
        sub_140026960(
          (unsigned int)dword_14043DDFC,
          (unsigned int)(dword_14051E524 + dword_14043DDF4),
          (unsigned int)(dword_14051E520 + dword_14043DDF8));
        sub_140027D60(&v404);
        sub_14002B800(&v404, 1i64);
        v374 = sub_14001B270(&v403, (unsigned int)v11);
        v375 = sub_1400302E0(&v404, 0i64);
        sub_14001B340(v375, v374);
        sub_14001FA40(&v403);
        v405 = 34;
        sub_1400268C0(&v404, 500000i64);
        sub_140027DB0(&v404);
      }
      if ( dword_14051DDCC )
      {
        dword_14051DDCC = 0;
        sub_14003D960(v26);
      }
      if ( (unsigned __int8)sub_1400620E0(qword_14051E508) )
        sub_140061F90();
      if ( (unsigned __int8)sub_140031030(&qword_141708208, 0i64) && !dword_14051D86C )
        sub_14003D960(&qword_141708208);
    }
  }
}
