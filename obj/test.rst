                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler
                                      3 ; Version 4.5.0 #15242 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module test
                                      6 	
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _sys_init
                                     13 	.globl _UART_sendString
                                     14 	.globl _UART_config
                                     15 	.globl _sleep
                                     16 	.globl _enableAllInterrupts
                                     17 	.globl _PX3
                                     18 	.globl _EX3
                                     19 	.globl _IE3
                                     20 	.globl _IT3
                                     21 	.globl _PX2
                                     22 	.globl _EX2
                                     23 	.globl _IE2
                                     24 	.globl _IT2
                                     25 	.globl _TF2
                                     26 	.globl _EXF2
                                     27 	.globl _RCLK
                                     28 	.globl _TCLK
                                     29 	.globl _EXEN2
                                     30 	.globl _TR2
                                     31 	.globl _T2_CT
                                     32 	.globl _CPRL2
                                     33 	.globl _INT2
                                     34 	.globl _INT3
                                     35 	.globl _P4_3
                                     36 	.globl _P4_2
                                     37 	.globl _P4_1
                                     38 	.globl _P4_0
                                     39 	.globl _T2EX
                                     40 	.globl _T2
                                     41 	.globl _PT2
                                     42 	.globl _ET2
                                     43 	.globl _CY
                                     44 	.globl _AC
                                     45 	.globl _F0
                                     46 	.globl _RS1
                                     47 	.globl _RS0
                                     48 	.globl _OV
                                     49 	.globl _F1
                                     50 	.globl _P
                                     51 	.globl _PS
                                     52 	.globl _PT1
                                     53 	.globl _PX1
                                     54 	.globl _PT0
                                     55 	.globl _PX0
                                     56 	.globl _RD
                                     57 	.globl _WR
                                     58 	.globl _T1
                                     59 	.globl _T0
                                     60 	.globl _INT1
                                     61 	.globl _INT0
                                     62 	.globl _TXD
                                     63 	.globl _RXD
                                     64 	.globl _P3_7
                                     65 	.globl _P3_6
                                     66 	.globl _P3_5
                                     67 	.globl _P3_4
                                     68 	.globl _P3_3
                                     69 	.globl _P3_2
                                     70 	.globl _P3_1
                                     71 	.globl _P3_0
                                     72 	.globl _EA
                                     73 	.globl _ES
                                     74 	.globl _ET1
                                     75 	.globl _EX1
                                     76 	.globl _ET0
                                     77 	.globl _EX0
                                     78 	.globl _P2_7
                                     79 	.globl _P2_6
                                     80 	.globl _P2_5
                                     81 	.globl _P2_4
                                     82 	.globl _P2_3
                                     83 	.globl _P2_2
                                     84 	.globl _P2_1
                                     85 	.globl _P2_0
                                     86 	.globl _SM0
                                     87 	.globl _SM1
                                     88 	.globl _SM2
                                     89 	.globl _REN
                                     90 	.globl _TB8
                                     91 	.globl _RB8
                                     92 	.globl _TI
                                     93 	.globl _RI
                                     94 	.globl _P1_7
                                     95 	.globl _P1_6
                                     96 	.globl _P1_5
                                     97 	.globl _P1_4
                                     98 	.globl _P1_3
                                     99 	.globl _P1_2
                                    100 	.globl _P1_1
                                    101 	.globl _P1_0
                                    102 	.globl _TF1
                                    103 	.globl _TR1
                                    104 	.globl _TF0
                                    105 	.globl _TR0
                                    106 	.globl _IE1
                                    107 	.globl _IT1
                                    108 	.globl _IE0
                                    109 	.globl _IT0
                                    110 	.globl _P0_7
                                    111 	.globl _P0_6
                                    112 	.globl _P0_5
                                    113 	.globl _P0_4
                                    114 	.globl _P0_3
                                    115 	.globl _P0_2
                                    116 	.globl _P0_1
                                    117 	.globl _P0_0
                                    118 	.globl _P4
                                    119 	.globl _ISP_CONTR
                                    120 	.globl _ISP_TRIG
                                    121 	.globl _ISP_CMD
                                    122 	.globl _ISP_ADDRL
                                    123 	.globl _ISP_ADDRH
                                    124 	.globl _ISP_DATA
                                    125 	.globl _WDT_CONTR
                                    126 	.globl _TH2
                                    127 	.globl _TL2
                                    128 	.globl _RCAP2H
                                    129 	.globl _RCAP2L
                                    130 	.globl _T2MOD
                                    131 	.globl _T2CON
                                    132 	.globl _XICON
                                    133 	.globl _IPH
                                    134 	.globl _SADDR1
                                    135 	.globl _AUXR1
                                    136 	.globl _AUXR
                                    137 	.globl _B
                                    138 	.globl _ACC
                                    139 	.globl _PSW
                                    140 	.globl _IP
                                    141 	.globl _P3
                                    142 	.globl _IE
                                    143 	.globl _P2
                                    144 	.globl _SBUF
                                    145 	.globl _SCON
                                    146 	.globl _P1
                                    147 	.globl _TH1
                                    148 	.globl _TH0
                                    149 	.globl _TL1
                                    150 	.globl _TL0
                                    151 	.globl _TMOD
                                    152 	.globl _TCON
                                    153 	.globl _PCON
                                    154 	.globl _DPH
                                    155 	.globl _DPL
                                    156 	.globl _SP
                                    157 	.globl _P0
                                    158 ;--------------------------------------------------------
                                    159 ; special function registers
                                    160 ;--------------------------------------------------------
                                    161 	.area RSEG    (ABS,DATA)
      000000                        162 	.org 0x0000
                           000080   163 _P0	=	0x0080
                           000081   164 _SP	=	0x0081
                           000082   165 _DPL	=	0x0082
                           000083   166 _DPH	=	0x0083
                           000087   167 _PCON	=	0x0087
                           000088   168 _TCON	=	0x0088
                           000089   169 _TMOD	=	0x0089
                           00008A   170 _TL0	=	0x008a
                           00008B   171 _TL1	=	0x008b
                           00008C   172 _TH0	=	0x008c
                           00008D   173 _TH1	=	0x008d
                           000090   174 _P1	=	0x0090
                           000098   175 _SCON	=	0x0098
                           000099   176 _SBUF	=	0x0099
                           0000A0   177 _P2	=	0x00a0
                           0000A8   178 _IE	=	0x00a8
                           0000B0   179 _P3	=	0x00b0
                           0000B8   180 _IP	=	0x00b8
                           0000D0   181 _PSW	=	0x00d0
                           0000E0   182 _ACC	=	0x00e0
                           0000F0   183 _B	=	0x00f0
                           00008E   184 _AUXR	=	0x008e
                           0000A2   185 _AUXR1	=	0x00a2
                           0000A9   186 _SADDR1	=	0x00a9
                           0000B7   187 _IPH	=	0x00b7
                           0000C0   188 _XICON	=	0x00c0
                           0000C8   189 _T2CON	=	0x00c8
                           0000C9   190 _T2MOD	=	0x00c9
                           0000CA   191 _RCAP2L	=	0x00ca
                           0000CB   192 _RCAP2H	=	0x00cb
                           0000CC   193 _TL2	=	0x00cc
                           0000CD   194 _TH2	=	0x00cd
                           0000E1   195 _WDT_CONTR	=	0x00e1
                           0000E2   196 _ISP_DATA	=	0x00e2
                           0000E3   197 _ISP_ADDRH	=	0x00e3
                           0000E4   198 _ISP_ADDRL	=	0x00e4
                           0000E5   199 _ISP_CMD	=	0x00e5
                           0000E6   200 _ISP_TRIG	=	0x00e6
                           0000E7   201 _ISP_CONTR	=	0x00e7
                           0000E8   202 _P4	=	0x00e8
                                    203 ;--------------------------------------------------------
                                    204 ; special function bits
                                    205 ;--------------------------------------------------------
                                    206 	.area RSEG    (ABS,DATA)
      000000                        207 	.org 0x0000
                           000080   208 _P0_0	=	0x0080
                           000081   209 _P0_1	=	0x0081
                           000082   210 _P0_2	=	0x0082
                           000083   211 _P0_3	=	0x0083
                           000084   212 _P0_4	=	0x0084
                           000085   213 _P0_5	=	0x0085
                           000086   214 _P0_6	=	0x0086
                           000087   215 _P0_7	=	0x0087
                           000088   216 _IT0	=	0x0088
                           000089   217 _IE0	=	0x0089
                           00008A   218 _IT1	=	0x008a
                           00008B   219 _IE1	=	0x008b
                           00008C   220 _TR0	=	0x008c
                           00008D   221 _TF0	=	0x008d
                           00008E   222 _TR1	=	0x008e
                           00008F   223 _TF1	=	0x008f
                           000090   224 _P1_0	=	0x0090
                           000091   225 _P1_1	=	0x0091
                           000092   226 _P1_2	=	0x0092
                           000093   227 _P1_3	=	0x0093
                           000094   228 _P1_4	=	0x0094
                           000095   229 _P1_5	=	0x0095
                           000096   230 _P1_6	=	0x0096
                           000097   231 _P1_7	=	0x0097
                           000098   232 _RI	=	0x0098
                           000099   233 _TI	=	0x0099
                           00009A   234 _RB8	=	0x009a
                           00009B   235 _TB8	=	0x009b
                           00009C   236 _REN	=	0x009c
                           00009D   237 _SM2	=	0x009d
                           00009E   238 _SM1	=	0x009e
                           00009F   239 _SM0	=	0x009f
                           0000A0   240 _P2_0	=	0x00a0
                           0000A1   241 _P2_1	=	0x00a1
                           0000A2   242 _P2_2	=	0x00a2
                           0000A3   243 _P2_3	=	0x00a3
                           0000A4   244 _P2_4	=	0x00a4
                           0000A5   245 _P2_5	=	0x00a5
                           0000A6   246 _P2_6	=	0x00a6
                           0000A7   247 _P2_7	=	0x00a7
                           0000A8   248 _EX0	=	0x00a8
                           0000A9   249 _ET0	=	0x00a9
                           0000AA   250 _EX1	=	0x00aa
                           0000AB   251 _ET1	=	0x00ab
                           0000AC   252 _ES	=	0x00ac
                           0000AF   253 _EA	=	0x00af
                           0000B0   254 _P3_0	=	0x00b0
                           0000B1   255 _P3_1	=	0x00b1
                           0000B2   256 _P3_2	=	0x00b2
                           0000B3   257 _P3_3	=	0x00b3
                           0000B4   258 _P3_4	=	0x00b4
                           0000B5   259 _P3_5	=	0x00b5
                           0000B6   260 _P3_6	=	0x00b6
                           0000B7   261 _P3_7	=	0x00b7
                           0000B0   262 _RXD	=	0x00b0
                           0000B1   263 _TXD	=	0x00b1
                           0000B2   264 _INT0	=	0x00b2
                           0000B3   265 _INT1	=	0x00b3
                           0000B4   266 _T0	=	0x00b4
                           0000B5   267 _T1	=	0x00b5
                           0000B6   268 _WR	=	0x00b6
                           0000B7   269 _RD	=	0x00b7
                           0000B8   270 _PX0	=	0x00b8
                           0000B9   271 _PT0	=	0x00b9
                           0000BA   272 _PX1	=	0x00ba
                           0000BB   273 _PT1	=	0x00bb
                           0000BC   274 _PS	=	0x00bc
                           0000D0   275 _P	=	0x00d0
                           0000D1   276 _F1	=	0x00d1
                           0000D2   277 _OV	=	0x00d2
                           0000D3   278 _RS0	=	0x00d3
                           0000D4   279 _RS1	=	0x00d4
                           0000D5   280 _F0	=	0x00d5
                           0000D6   281 _AC	=	0x00d6
                           0000D7   282 _CY	=	0x00d7
                           0000AD   283 _ET2	=	0x00ad
                           0000BD   284 _PT2	=	0x00bd
                           000090   285 _T2	=	0x0090
                           000091   286 _T2EX	=	0x0091
                           0000E8   287 _P4_0	=	0x00e8
                           0000E9   288 _P4_1	=	0x00e9
                           0000EA   289 _P4_2	=	0x00ea
                           0000EB   290 _P4_3	=	0x00eb
                           0000EA   291 _INT3	=	0x00ea
                           0000EB   292 _INT2	=	0x00eb
                           0000C8   293 _CPRL2	=	0x00c8
                           0000C9   294 _T2_CT	=	0x00c9
                           0000CA   295 _TR2	=	0x00ca
                           0000CB   296 _EXEN2	=	0x00cb
                           0000CC   297 _TCLK	=	0x00cc
                           0000CD   298 _RCLK	=	0x00cd
                           0000CE   299 _EXF2	=	0x00ce
                           0000CF   300 _TF2	=	0x00cf
                           0000C0   301 _IT2	=	0x00c0
                           0000C1   302 _IE2	=	0x00c1
                           0000C2   303 _EX2	=	0x00c2
                           0000C3   304 _PX2	=	0x00c3
                           0000C4   305 _IT3	=	0x00c4
                           0000C5   306 _IE3	=	0x00c5
                           0000C6   307 _EX3	=	0x00c6
                           0000C7   308 _PX3	=	0x00c7
                                    309 ;--------------------------------------------------------
                                    310 ; overlayable register banks
                                    311 ;--------------------------------------------------------
                                    312 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        313 	.ds 8
                                    314 ;--------------------------------------------------------
                                    315 ; internal ram data
                                    316 ;--------------------------------------------------------
                                    317 	.area DSEG    (DATA)
      000008                        318 _sys_init_uc_10000_72:
      000008                        319 	.ds 10
                                    320 ;--------------------------------------------------------
                                    321 ; overlayable items in internal ram
                                    322 ;--------------------------------------------------------
                                    323 ;--------------------------------------------------------
                                    324 ; Stack segment in internal ram
                                    325 ;--------------------------------------------------------
                                    326 	.area SSEG
      000037                        327 __start__stack:
      000037                        328 	.ds	1
                                    329 
                                    330 ;--------------------------------------------------------
                                    331 ; indirectly addressable internal ram data
                                    332 ;--------------------------------------------------------
                                    333 	.area ISEG    (DATA)
                                    334 ;--------------------------------------------------------
                                    335 ; absolute internal ram data
                                    336 ;--------------------------------------------------------
                                    337 	.area IABS    (ABS,DATA)
                                    338 	.area IABS    (ABS,DATA)
                                    339 ;--------------------------------------------------------
                                    340 ; bit data
                                    341 ;--------------------------------------------------------
                                    342 	.area BSEG    (BIT)
                                    343 ;--------------------------------------------------------
                                    344 ; paged external ram data
                                    345 ;--------------------------------------------------------
                                    346 	.area PSEG    (PAG,XDATA)
                                    347 ;--------------------------------------------------------
                                    348 ; uninitialized external ram data
                                    349 ;--------------------------------------------------------
                                    350 	.area XSEG    (XDATA)
                                    351 ;--------------------------------------------------------
                                    352 ; absolute external ram data
                                    353 ;--------------------------------------------------------
                                    354 	.area XABS    (ABS,XDATA)
                                    355 ;--------------------------------------------------------
                                    356 ; initialized external ram data
                                    357 ;--------------------------------------------------------
                                    358 	.area XISEG   (XDATA)
                                    359 	.area HOME    (CODE)
                                    360 	.area GSINIT0 (CODE)
                                    361 	.area GSINIT1 (CODE)
                                    362 	.area GSINIT2 (CODE)
                                    363 	.area GSINIT3 (CODE)
                                    364 	.area GSINIT4 (CODE)
                                    365 	.area GSINIT5 (CODE)
                                    366 	.area GSINIT  (CODE)
                                    367 	.area GSFINAL (CODE)
                                    368 	.area CSEG    (CODE)
                                    369 ;--------------------------------------------------------
                                    370 ; interrupt vector
                                    371 ;--------------------------------------------------------
                                    372 	.area HOME    (CODE)
      000000                        373 __interrupt_vect:
      000000 02 00 4C         [24]  374 	ljmp	__sdcc_gsinit_startup
                                    375 ; restartable atomic support routines
      000003                        376 	.ds	5
      000008                        377 sdcc_atomic_exchange_rollback_start::
      000008 00               [12]  378 	nop
      000009 00               [12]  379 	nop
      00000A                        380 sdcc_atomic_exchange_pdata_impl:
      00000A E2               [24]  381 	movx	a, @r0
      00000B FB               [12]  382 	mov	r3, a
      00000C EA               [12]  383 	mov	a, r2
      00000D F2               [24]  384 	movx	@r0, a
      00000E 80 2C            [24]  385 	sjmp	sdcc_atomic_exchange_exit
      000010 00               [12]  386 	nop
      000011 00               [12]  387 	nop
      000012                        388 sdcc_atomic_exchange_xdata_impl:
      000012 E0               [24]  389 	movx	a, @dptr
      000013 FB               [12]  390 	mov	r3, a
      000014 EA               [12]  391 	mov	a, r2
      000015 F0               [24]  392 	movx	@dptr, a
      000016 80 24            [24]  393 	sjmp	sdcc_atomic_exchange_exit
      000018                        394 sdcc_atomic_compare_exchange_idata_impl:
      000018 E6               [12]  395 	mov	a, @r0
      000019 B5 02 02         [24]  396 	cjne	a, ar2, .+#5
      00001C EB               [12]  397 	mov	a, r3
      00001D F6               [12]  398 	mov	@r0, a
      00001E 22               [24]  399 	ret
      00001F 00               [12]  400 	nop
      000020                        401 sdcc_atomic_compare_exchange_pdata_impl:
      000020 E2               [24]  402 	movx	a, @r0
      000021 B5 02 02         [24]  403 	cjne	a, ar2, .+#5
      000024 EB               [12]  404 	mov	a, r3
      000025 F2               [24]  405 	movx	@r0, a
      000026 22               [24]  406 	ret
      000027 00               [12]  407 	nop
      000028                        408 sdcc_atomic_compare_exchange_xdata_impl:
      000028 E0               [24]  409 	movx	a, @dptr
      000029 B5 02 02         [24]  410 	cjne	a, ar2, .+#5
      00002C EB               [12]  411 	mov	a, r3
      00002D F0               [24]  412 	movx	@dptr, a
      00002E 22               [24]  413 	ret
      00002F                        414 sdcc_atomic_exchange_rollback_end::
                                    415 
      00002F                        416 sdcc_atomic_exchange_gptr_impl::
      00002F 30 F6 E0         [24]  417 	jnb	b.6, sdcc_atomic_exchange_xdata_impl
      000032 A8 82            [24]  418 	mov	r0, dpl
      000034 20 F5 D3         [24]  419 	jb	b.5, sdcc_atomic_exchange_pdata_impl
      000037                        420 sdcc_atomic_exchange_idata_impl:
      000037 EA               [12]  421 	mov	a, r2
      000038 C6               [12]  422 	xch	a, @r0
      000039 F5 82            [12]  423 	mov	dpl, a
      00003B 22               [24]  424 	ret
      00003C                        425 sdcc_atomic_exchange_exit:
      00003C 8B 82            [24]  426 	mov	dpl, r3
      00003E 22               [24]  427 	ret
      00003F                        428 sdcc_atomic_compare_exchange_gptr_impl::
      00003F 30 F6 E6         [24]  429 	jnb	b.6, sdcc_atomic_compare_exchange_xdata_impl
      000042 A8 82            [24]  430 	mov	r0, dpl
      000044 20 F5 D9         [24]  431 	jb	b.5, sdcc_atomic_compare_exchange_pdata_impl
      000047 80 CF            [24]  432 	sjmp	sdcc_atomic_compare_exchange_idata_impl
                                    433 ;--------------------------------------------------------
                                    434 ; global & static initialisations
                                    435 ;--------------------------------------------------------
                                    436 	.area HOME    (CODE)
                                    437 	.area GSINIT  (CODE)
                                    438 	.area GSFINAL (CODE)
                                    439 	.area GSINIT  (CODE)
                                    440 	.globl __sdcc_gsinit_startup
                                    441 	.globl __sdcc_program_startup
                                    442 	.globl __start__stack
                                    443 	.globl __mcs51_genXINIT
                                    444 	.globl __mcs51_genXRAMCLEAR
                                    445 	.globl __mcs51_genRAMCLEAR
                                    446 	.area GSFINAL (CODE)
      0000A5 02 00 49         [24]  447 	ljmp	__sdcc_program_startup
                                    448 ;--------------------------------------------------------
                                    449 ; Home
                                    450 ;--------------------------------------------------------
                                    451 	.area HOME    (CODE)
                                    452 	.area HOME    (CODE)
      000049                        453 __sdcc_program_startup:
      000049 02 00 CE         [24]  454 	ljmp	_main
                                    455 ;	return from main will return to caller
                                    456 ;--------------------------------------------------------
                                    457 ; code
                                    458 ;--------------------------------------------------------
                                    459 	.area CSEG    (CODE)
                                    460 ;------------------------------------------------------------
                                    461 ;Allocation info for local variables in function 'sys_init'
                                    462 ;------------------------------------------------------------
                                    463 ;uc            Allocated with name '_sys_init_uc_10000_72'
                                    464 ;------------------------------------------------------------
                                    465 ;	usr/test.c:28: void sys_init(void)
                                    466 ;	-----------------------------------------
                                    467 ;	 function sys_init
                                    468 ;	-----------------------------------------
      0000A8                        469 _sys_init:
                           000007   470 	ar7 = 0x07
                           000006   471 	ar6 = 0x06
                           000005   472 	ar5 = 0x05
                           000004   473 	ar4 = 0x04
                           000003   474 	ar3 = 0x03
                           000002   475 	ar2 = 0x02
                           000001   476 	ar1 = 0x01
                           000000   477 	ar0 = 0x00
                                    478 ;	usr/test.c:32: uc.baudrate          = 9600;
      0000A8 75 08 80         [24]  479 	mov	(_sys_init_uc_10000_72 + 0),#0x80
      0000AB 75 09 25         [24]  480 	mov	(_sys_init_uc_10000_72 + 1),#0x25
      0000AE E4               [12]  481 	clr	a
      0000AF F5 0A            [12]  482 	mov	(_sys_init_uc_10000_72 + 2),a
      0000B1 F5 0B            [12]  483 	mov	(_sys_init_uc_10000_72 + 3),a
                                    484 ;	usr/test.c:33: uc.baudGenerator     = PERIPH_TIM_2;
      0000B3 75 0C 02         [24]  485 	mov	(_sys_init_uc_10000_72 + 0x0004),#0x02
                                    486 ;	usr/test.c:34: uc.interruptState    = DISABLE;
      0000B6 F5 0D            [12]  487 	mov	(_sys_init_uc_10000_72 + 0x0005),a
                                    488 ;	usr/test.c:35: uc.interruptPriority = UTIL_interruptPriority_0;
      0000B8 F5 0E            [12]  489 	mov	(_sys_init_uc_10000_72 + 0x0006),a
                                    490 ;	usr/test.c:36: uc.mode              = UART_mode_1;
      0000BA 75 0F 01         [24]  491 	mov	(_sys_init_uc_10000_72 + 0x0007),#0x01
                                    492 ;	usr/test.c:37: uc.multiBaudrate     = DISABLE;
      0000BD F5 10            [12]  493 	mov	(_sys_init_uc_10000_72 + 0x0008),a
                                    494 ;	usr/test.c:38: uc.receiveState      = ENABLE;
      0000BF 75 11 01         [24]  495 	mov	(_sys_init_uc_10000_72 + 0x0009),#0x01
                                    496 ;	usr/test.c:40: UART_config(&uc);
      0000C2 90 00 08         [24]  497 	mov	dptr,#_sys_init_uc_10000_72
      0000C5 75 F0 40         [24]  498 	mov	b, #0x40
      0000C8 12 00 F8         [24]  499 	lcall	_UART_config
                                    500 ;	usr/test.c:41: enableAllInterrupts();
                                    501 ;	usr/test.c:42: }
      0000CB 02 06 88         [24]  502 	ljmp	_enableAllInterrupts
                                    503 ;------------------------------------------------------------
                                    504 ;Allocation info for local variables in function 'main'
                                    505 ;------------------------------------------------------------
                                    506 ;	usr/test.c:54: void main(void)
                                    507 ;	-----------------------------------------
                                    508 ;	 function main
                                    509 ;	-----------------------------------------
      0000CE                        510 _main:
                                    511 ;	usr/test.c:56: sys_init();
      0000CE 12 00 A8         [24]  512 	lcall	_sys_init
                                    513 ;	usr/test.c:57: while (true)
      0000D1                        514 00102$:
                                    515 ;	usr/test.c:60: sleep(500);
      0000D1 90 01 F4         [24]  516 	mov	dptr,#0x01f4
      0000D4 12 06 A1         [24]  517 	lcall	_sleep
                                    518 ;	usr/test.c:61: UART_sendString("Hello,world\r\n");
      0000D7 90 09 A4         [24]  519 	mov	dptr,#___str_0
      0000DA 75 F0 80         [24]  520 	mov	b, #0x80
      0000DD 12 03 6B         [24]  521 	lcall	_UART_sendString
                                    522 ;	usr/test.c:63: }
      0000E0 80 EF            [24]  523 	sjmp	00102$
                                    524 	.area CSEG    (CODE)
                                    525 	.area CONST   (CODE)
                                    526 	.area CONST   (CODE)
      000994                        527 _hexTable:
      000994 30                     528 	.db #0x30	;  48	'0'
      000995 31                     529 	.db #0x31	;  49	'1'
      000996 32                     530 	.db #0x32	;  50	'2'
      000997 33                     531 	.db #0x33	;  51	'3'
      000998 34                     532 	.db #0x34	;  52	'4'
      000999 35                     533 	.db #0x35	;  53	'5'
      00099A 36                     534 	.db #0x36	;  54	'6'
      00099B 37                     535 	.db #0x37	;  55	'7'
      00099C 38                     536 	.db #0x38	;  56	'8'
      00099D 39                     537 	.db #0x39	;  57	'9'
      00099E 41                     538 	.db #0x41	;  65	'A'
      00099F 42                     539 	.db #0x42	;  66	'B'
      0009A0 43                     540 	.db #0x43	;  67	'C'
      0009A1 44                     541 	.db #0x44	;  68	'D'
      0009A2 45                     542 	.db #0x45	;  69	'E'
      0009A3 46                     543 	.db #0x46	;  70	'F'
                                    544 	.area CSEG    (CODE)
                                    545 	.area CONST   (CODE)
      0009A4                        546 ___str_0:
      0009A4 48 65 6C 6C 6F 2C 77   547 	.ascii "Hello,world"
             6F 72 6C 64
      0009AF 0D                     548 	.db 0x0d
      0009B0 0A                     549 	.db 0x0a
      0009B1 00                     550 	.db 0x00
                                    551 	.area CSEG    (CODE)
                                    552 	.area XINIT   (CODE)
                                    553 	.area CABS    (ABS,CODE)
