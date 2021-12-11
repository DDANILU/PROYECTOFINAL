#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ao=162,aa=160,ai=161, au=163,pr=168,por=37,s=36, cc=34, de=175, ded=174, an=165;
	//VARIABLES A UTILIZAR 
		int qe, prom, fech, a, b, c, d, e, f, g, h, i, j, k, l, n, o, p, q, r;
		do
		{
			// BIENVENIDA
			printf("---------------------------------------------------\n");
			printf("\tBIENVENIDO A DANI BOUTIQUE\n"); 
			printf("\tTE DAMOS EL MEJOR SERVICIO\n");
			// MUESTRA MENU
				printf("Elige el n%cmero que determina tu posici%cn\n",au, ao);
				printf("1) SOY CLIENTE\n");
				printf("2) SOY EMPLEADO\n");
				printf("3) SOY ADMINISTRADOR\n");
				printf("---------------------------------------------------\n");
				//SELECCION DE OPCION
					scanf("%d",&qe);
					system("cls");
					switch(qe)
					
					{
						//CLIENTE
							case 1:
							{
								//BIENVENIDA A CLIENTE
									printf("\tBIENVENIDO CLIENTE\n");
										//MENU CLIENTE
											printf("%cQue deseas realizar?\n",pr);
											printf("1) Verificar el precio de un producto\n");
											printf("2) Observar promociones\n");
											printf("3) Calificar el servicio de la tienda\n");
											//SELECCION DE OPCION
												scanf("%d",&a);
												system("cls");
												
												
													//VERIFICADOR DE PRECIOS
														if (a == 1)
														{
															printf("\tVERIFICADOR DE PRECIOS\n");
															//SOLICITAR CODIGO
															printf("Ingresar el c%cdigo del producto\n",ao);
															scanf("%d",&b);
															{
																if (b == 55)
																{
																	printf("PANTALON DE MEZCLILLA AZUL\n");
																	printf("SU COSTO ES %c%c425%c\n", de, s, ded);
																}
																if (b == 62)
																{
																	printf("SUDADERA LOVE\n");
																	printf("SU COSTO ES %c%c375%c\n", de, s, ded);
																}
																if (b == 21)
																{
																	printf("BLUSA NEGRA MANGA LARGA\n");
																	printf("SU COSTO ES %c%c200%c\n", de, s, ded);
																}
																if (b == 70)
																{
																	printf("CHAMARRA AZUL\n");
																	printf("SU COSTO ES %c%c500%c\n", de, s, ded);
																}
																if (b == 53)
																{
																	printf("SACO ROSA\n");
																	printf("SU COSTO ES %c%c1250%c\n", de, s, ded);
																}
															}
														}
													//PROMOCIONES
														if (a == 2)
														{
															printf("\tLAS PROMOCIONES DE ESTE MES SON:\n");
															printf("30%c de descuento en tu segunda prenda\n", por);
															printf("10%c de descuento en prendas de temporada\n", por);
															printf("GRACIAS POR TU PREFERENCIA\n");
														}
													//CALIFICACION
														if (a == 3)
														{
															printf("\t Para nosotros es importante tu opini%cn\n",ao);
															printf("\tCALIFICA DEL 5 que indica muy malo AL 10 que indica muy bueno\n");
															printf("%cQue tal fue el servicio?\n",pr);
															scanf("%d", &c);
															printf("%cQue tal fue la calidad de la ropa?\n",pr);
															scanf("%d", &d);
															printf("%cEncontraste todo lo que buscabas?\n",pr);
															scanf("%d", &e);
															prom=((c+d+e)/3);
															printf("EN PROMEDIO TU CALIFICACION PARA LA TIENDA ES: %d\n", prom);
														}
									//FIN CLIENTE
									break;
								}
								
						//EMPLEADO		
							case 2:
							{
								//SOLICITUD DE CONTRASEÑA
									printf("INGRESA TU CONTRASE%cA\n",an);
									scanf("%d", &f);
									system("cls");
									
									//PERFIL PERSONAL DE CADA EMPLEADO
											if (f == 319090213)
											{
												//BIENVENIDA EMPLEADO 1
													printf("\tBIENVENIDO EMPLEADO: DANIELA\n");
													//MENU EMPLEADO
														printf("%cQue deseas realizar?\n",pr);
														printf("1) Registrar Venta\n");
														printf("2) Inventario\n");
														//SELECCION OPCION
														scanf("%d",&g);
														
															//REGISTRO DE VENTA
																if (g == 1)
																{
																	printf("\tRegistro de venta\n");
																	printf("Ingresa la fecha con el siguiente formato dd,mm,aa\n");
																	scanf("%d,%d,%d", &h, &i, &j);
																	printf("%d,%d,%d\n", h, i, j);
																	printf("Ingresa el total de la venta\n");
																	scanf("%d", &k);
																	printf("El total de la venta es de %d\n",k);
																}
															//INVENTARIO
																if (g == 2)
																{
																	printf("\tInventario\n");
																	printf("EN LA TIENDA SE ENCUENTRAN ESTOS PRODUCTOS:\n");
																	printf("%c 100 pz de PANTALON DE MEZCLILLA AZUL\n",de);
																	printf("%c 20 pz SUDADERA LOVE\n", de);
																	printf("%c 60 pz BLUSA NEGRA MANGA LARGA\n", de);
																	printf("%c 80 pz CHAMARRA AZUL\n", de);
																	printf("%c 40 pz SACO ROSA\n", de);
																}
											}
											if (f == 705321622)
											{
												//BIENVENIDA EMPLEADO 2
													printf("\tBIENVENIDO EMPLEADO: ERICK\n");
													//MENU EMPLEADO
														printf("%cQue deseas realizar?\n",pr);
														printf("1) Registrar Venta\n");
														printf("2) Inventario\n");
														//SELECCION OPCION
														scanf("%d",&g);
														
															//REGISTRO DE VENTA
																if (g == 1)
																{
																	printf("\tRegistro de venta\n");
																	printf("Ingresa la fecha con el siguiente formato dd,mm,aa\n");
																	scanf("%d,%d,%d", &h, &i, &j);
																	printf("%d,%d,%d\n", h, i, j);
																	printf("Ingresa el total de la venta\n");
																	scanf("%d", &k);
																	printf("El total de la venta es de %d\n",k);
																}
															//INVENTARIO
															if (g == 2)
																{
																	printf("\tInventario\n");
																	printf("EN LA TIENDA SE ENCUENTRAN ESTOS PRODUCTOS:\n");
																	printf("%c 100 pz de PANTALON DE MEZCLILLA AZUL\n",de);
																	printf("%c 20 pz SUDADERA LOVE\n", de);
																	printf("%c 60 pz BLUSA NEGRA MANGA LARGA\n", de);
																	printf("%c 80 pz CHAMARRA AZUL\n", de);
																	printf("%c 40 pz SACO ROSA\n", de);
																}
											}
											if (f == 280420038)
											{
												//BIENVENIDA EMPLEADO 3
													printf("\tBIENVENIDO EMPLEADO: SERENA\n");
													//MENU EMPLEADO
														printf("%cQue deseas realizar?\n",pr);
														printf("1) Registrar Venta\n");
														printf("2) Inventario\n");
														//SELECCION OPCION
															scanf("%d",&g);
															
															//REGISTRO DE VENTA
																if (g == 1)
																{
																	printf("\tRegistro de venta\n");
																	printf("Ingresa la fecha con el siguiente formato dd,mm,aa\n");
																	scanf("%d,%d,%d", &h, &i, &j);
																	printf("%d,%d,%d\n", h, i, j);
																	printf("Ingresa el total de la venta\n");
																	scanf("%d", &k);
																	printf("El total de la venta es de %d\n",k);
																}
															//INVENTARIO
																if (g == 2)
																{
																	printf("\tInventario\n");
																	printf("EN LA TIENDA SE ENCUENTRAN ESTOS PRODUCTOS:\n");
																	printf("%c 100 pz de PANTALON DE MEZCLILLA AZUL\n",de);
																	printf("%c 20 pz SUDADERA LOVE\n", de);
																	printf("%c 60 pz BLUSA NEGRA MANGA LARGA\n", de);
																	printf("%c 80 pz CHAMARRA AZUL\n", de);
																	printf("%c 40 pz SACO ROSA\n", de);
																}
											}
											
									//CONTRASEÑA INCORRECTA
										else
										{
											printf("\t CONTRASE%cA INCORRECTA\n", an);
										}
								//FIN EMPLEADO
								break;
							}
							
						//ADMINISTRADOR
						case 3:
						{
							//SOLICITUD DE CONTRASEÑA ÚNICA
								printf("INGRESA TU CONTRASE%cA\n", an);
								scanf("%d", &l);
								system("cls");
									//CONTRASEÑA CORRECTA
										if (l == 180410)
										{
											//BIENVENIDA ADMINISTRADOR
												printf("\tBIENVENIDO ADMINISTRADOR\n");
												//MENU ADMINISTRADOR
													printf("%cQue deseas realizar?\n",pr);
													printf("1) INFORMACION DE LOS EMPLEADOS\n");
													printf("2) VENTAS REALIZADAS\n");
													printf("3) INVENTARIO\n");
													printf("4) EVALUACION DE LA TIENDA\n");
													//SELECCION OPCION
														scanf("%d", &n);
														system("cls");
														
														//INFORMACION DE LOS EMPLEADOS
															if (n == 1)
															{
																//MENU DE INFORMACION
																	printf("\tLOS EMPLEADOS ACTIVOS SON:\n");
																	printf("1) DANIELA\n");
																	printf("2) ERICK\n");
																	printf("3) SERENA\n");
																	//SELECCION OPCION
																	scanf("%d", &o);
																	system("cls");
																	
																		//INFORMACION EMPLEADO 1
																			if (o == 1)
																			{
																				printf("El nombre completo del empleado es: \n");
																				printf("DANIELA LUNA DAVILA\n");
																				printf("Su edad es: \n");
																				printf("24 a%cos\n", an);
																				printf("El turno del empleado es: \n");
																				printf("MATUTINO de 8:00-16:00\n");
																			}
																		//INFORMACION EMPLEADO 2
																			if (o == 2)
																			{
																				printf("El nombre completo del empleado es: \n");
																				printf("ERICK AMEZCUA RIVERA\n");
																				printf("Su edad es: \n");
																				printf("27 a%cos\n", an);
																				printf("El turno del empleado es: \n");
																				printf("VESPERTINO de 13:00-22:00\n");
																			}
																		//INFORMACION EMPLEADO 3
																			if (o == 3)
																			{
																				printf("El nombre completo del empleado es: \n");
																				printf("SERENA BARROETA CORTES\n");
																				printf("Su edad es: \n");
																				printf("22 a%cos\n", an);
																				printf("El turno del empleado es: \n");
																				printf("MATUTINO de 11:00-19:00\n");
																			}
															}
															
														//VENTAS REALIZADAS
															if (n == 2)
															{
																printf("\tLAS VENTAS REALIZADAS HASTA HOY:\n");
																printf("HASTA DICIEMBRE 2021 SE HAN REALIZADO 350 VENTAS\n");
																printf("CON GANANCIAS DE %c1,021,300\n",s);
															}
														//INVENTARIO
															if (n ==3)
															{
																//PRODUCTOS EN INVENTARIO
																	printf("\tInventario\n");
																	printf("EN LA TIENDA SE ENCUENTRAN ESTOS PRODUCTOS:\n");
																	printf("%c 100 pz de PANTALON DE MEZCLILLA AZUL\n",de);
																	printf("%c 20 pz SUDADERA LOVE\n", de);
																	printf("%c 60 pz BLUSA NEGRA MANGA LARGA\n", de);
																	printf("%c 80 pz CHAMARRA AZUL\n", de);
																	printf("%c 40 pz SACO ROSA\n", de);
																	//CONFIGURACION DE LOS PRODUCTOS
																		printf("%cDesea agregar otro producto?\n",pr);
																		printf("1) SI\n");
																		printf("2) NO\n");
																		//SELECCION OPCION
																			scanf("%d", &p);
																			
																			//SE AGREGA UN PRODUCTO
																			if (p == 1)
																			{
																				{
																					//SOLICITUD DEL CODIGO
																					printf(" EL NUEVO CODIGO DEL PRODUCTO ES:\n");
																					//SELECCION DE CODIGOD EXISTENTES
																					scanf("%d", &q);
																					
																						//CODIGO 1
																						if(q == 924006)
																						{
																							//SOLICITUD DE PIEZAS
																							printf("INGRESA EL NUMERO DE PIEZAS\n");
																							scanf("%d", &r);
																							//INFORMACION DEL PRODUCTO
																							printf("EL PRODUCTO ES:\n");
																							printf("LENTES NEGROS\n");
																							printf("SU COSTO ES %c%c1500%c\n", de, s, ded);
																							printf("%d pz disponibles\n", r);
																						}
																						//CODIGO 2
																						if(q == 10107)
																						{
																							//SOLICITUD DE PIEZAS
																							printf("INGRESA EL NUMERO DE PIEZAS\n");
																							scanf("%d", &r);
																							//INFORMACION DEL PRODUCTO
																							printf("EL PRODUCTO ES:\n");
																							printf("TENIS NIKE VERDES\n");
																							printf("SU COSTO ES %c%c3500%c\n", de, s, ded);	
																							printf("%d pz disponibles\n\n", r);
																						}
																						//NO SE RECONOCE EL CODIGO
																						else
																						{
																							//EDITAR EN EL PROGRAMA
																							printf("\nFAVOR DE HACER EL MANUAL REGISTRO EN LA BASE DE DATOS\n");
																						}
																				}
																			}
																			
																			//NO HAY PRODUCTOS NUEVOS
																			if (p == 2)
																			{
																				//CONFIRMACION DE QUE NO HAY PRODUCTOS NUEVOS
																				printf("NO HAY PRODUCTOS NUEVOS\n");
																			}
															}
														
														//EVALUACION DE LA TIENDA
														if (n == 4)
														{
															printf("LA EVALUACION DE LA TIENDA POR PARTE DE LOS CLIENTES SE DARA A CONOCER AL FINAL DEL MES\n");
														}
													}
										
									//CONTRASEÑA INCORRECTA	
									else
									{
										printf("\t CONTRASE%cA INCORRECTA\n", an);
									}
								//FIN ADMINISTRADOR
								break;
						}
					//OPCION NO DETECTADA	
					default:
					printf("\tOpci%cn inv%clida.\n",ao,aa);
				}
			}
	while (" qe != 4");
	return 0;
}
