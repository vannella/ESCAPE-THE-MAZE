#include<stdio.h>
int opcoes(int valor){
int x;
if(valor==1){
x=valor;
} else if(valor==2){
  x=valor;
}   else if(valor!= 1 && valor!=2){
    printf("erro, so digite 1 ou 2\n");
}

   return valor;
} 
int main(){
  int esc;
  printf("voce e maior de idade?\n1)sim\n2)nao\n");
  scanf("%d",&esc);
  opcoes(esc);
  if(esc==1){
    printf("otimo, vamos la.\n\n");
            }else if(esc==2){
            printf("Pode jogar do mesmo jeito, pois aqui não há restrições.\n\n");
                            }
  printf("nossa historia e simples... Porém bem estranha, você terá que desvendar os mistérios e loucuras desse labirinto.um rapaz precisa sair do labirinto, ajude ele e encontre a saida ou nao\n\n");
  printf("sua primeria escolha e simples, escolha um nome para ele.. cuidado com o loop\n1)Renan\n2)Diego \n");
  scanf("%d",&esc);
  opcoes(esc);
  if(esc==1){
    {
    printf("bem-vindo ao labirinto do fauno\n");
    printf("aqui e um lugar de muitos mistérios e monstros\n");
    printf("você pode levar com você duas coisas\n1)lanterna\n2)faca\n");
    scanf("%d",&esc);
    opcoes(esc);
    if(esc==1){
      printf("Essa história e diferente das normais, então vá com mente aberta... vamos lá..\n\n");
        printf("você não e um rapaz corajoso?\n 1)não, tenho medo de me perde\n2)sim, por isso inicei esse jogo\n");
      scanf("%d",&esc);
      opcoes(esc);
      if (esc==1){
        printf("deixei de ser medroso, vamos lá\n\n");
        printf("escolha logo um caminho\n\n1)direita\n2)esquerda\n");
        scanf("%d",&esc);
        opcoes(esc);
        if(esc==1){
          printf("OTIMA ESCOLHA, INICIE O JOGO HAHA isso e um labirinto!\n\n");
                  }else if (esc==2){
                  printf("QUE PENA, volte ao incio, OLHA O LOOP. KKK\n\n");    
                                    }
                } else if(esc==2){
                  printf("assim que gosto de ver, alguém sem medo de morrer\n\n");
                  printf("vamos escolha um caminho do labirinto\n\n1)direita\n2)esquerda\n");
                  scanf("%d",&esc);
                  opcoes(esc);
                  if(esc==1){
                    printf("muito bem, logo você morrera MUHAHA\n\n");
                    printf("esta escuro e você liga a lanterna, agora consegue ver melhor, vamos correr?\n\n1)nao, vou poupar energia\n2)sim, assim saiu logo desse lugar");
                    scanf("%d",&esc);
                    opcoes(esc);
                    if(esc==1){
                      printf("ENTAO POUPA MEU TEMPO E PEGA O BECO");
                                }else if(esc==2){
                              printf("ENTAO SAI LOGO DO JOGO, PERDEU. ESCOLHA OUTRA ROTA");
                                                }
                            }else if(esc==2){
                              printf("parece que vai demorar pra você morrer\n\n");
                              printf("vamos ligar essa lanterna?\n\n1)sim, por isso escolhi ela\n2)não, vou poupar bateria\n");
                    scanf("%d",&esc);
                    opcoes(esc);
                    if(esc==1){
                      printf("ENTAO VAI INICIAR O JOGO DE NOVO.");
                              }else if(esc==2){
                                printf("ENTAO POUPA MEU TEMPO E INICIA ISSO");
                                              }
                                            }
                                }
            }else if(esc==2){
            printf("parece que alguém que arrumar confusão.\n");
            printf("Essa história e diferente das normais, então vá com mente aberta... vamos lá..\n\você é um rapaz corajoso?\n1)sim, coragem e meu segundo nome\n2)não, não sou um herói\n");
            scanf("%d",&esc);
            opcoes(esc);
      if(esc==1){
        printf("parece que temos um herói entre nos, então siga em frente\n\n");
        printf("você se vê encurralado, qual caminho seguir\n1)direita\n2)esquerda\n\n");
        scanf("%d",&esc);
        opcoes(esc);
        if(esc==1){
          printf("voce esta indo bem, bem mal\n\n");
          printf("prepare sua faca, logo inimigos apareceram, corra tem alguém vindo, o que você ira fazer?\n1)se esconde para dar um golpe\n2)não dá pra fazer nada\n\n");
          scanf("%d",&esc);
          opcoes(esc);
          if(esc==1){
            printf("VOCE VAI SER PERDE AIND MAIS, VOLTE AO INICIO\n\n");
                    }else if(esc==2){
                     printf("algo ou alguém passa por você muito rápido.\n\n LEVANDO VOCE PARA O INCIO HAHA INICIE O JOGO"); 
                                    }
                  }else if(esc==2){
          printf("SEM SAIDA, VOLTEI AO INICIO");
                                  }
                }else if(esc==2){
                printf("você realmente não, e só um humano\n\n");
                printf("mas isso não importa, qual caminho você irá escolher\n\n1)direita\n2)esquerda\n\n");
                scanf("%d",&esc);
                opcoes(esc);
                if(esc==1){
                  printf("não lhe disse, não importa sua escolha seu fim e certo\n\n");
                  printf("algo esta se aproximando vamos procure se esconder, escolha!\n\n1)entra nos arbusto que ali tinha\n2)estranho, uma cova, e aqui mesmo\n\n");
                  scanf("%d",&esc);
                  opcoes(esc);
                  if(esc==1){
                    printf("você corre e consegue se esconder, quando uma criatura passa com velocidade... ela senti seu cheiro. ela lhe mata no mesmo instante.  \n\n  INICIE O LABIRINTO ATE MATAR A FERA");
                            }else if(esc==2){
                              printf("já está se acostumando com sua cova?!hahah\n\n");
                              printf("quando você está saindo da cova algo puxa seu braço, você olha pra cima e vê o Minotauro do labirinto, como você reagi?\n\n\n1)se fingi de morto\n2)tenta lutar usando sua faca\n\n");
                              scanf("%d",&esc);
                              opcoes(esc);
                    if(esc==1){
                      printf("ao se fingir de morto o Minotauro te sacode e você dá um grito com ele, ele te coloca no chão.\n\n");
                        printf("agora que o susto passou, você pode fazer uma pergunta a ele, qual pergunta você ia fazer?\n\n1) meu deus tu fala?\n2)tenta correr\n");
                        scanf("%d",&esc);
                        opcoes(esc);
                        if (esc==1){
                          printf("a criatura e um ser racional e não quer fazer mal a você, pelo contrário que lhe ajudar a achar a saída desse pesadelo\n\n");
                            printf("agora e com você, o que você escolhe?\n1)aceita a ajuda\n2) quer continuar e tentar sair sozinho dali\n");
                            scanf("%d",&esc);
                          opcoes(esc);
                          if(esc==1){
                            printf("uma voz horripilante surgi, ! VOCE NAO PODE AJUDAR ELE, MORRA, quando menos espera, o labirinto começa a mudar, os galhos saem das paredes e acertam a criatura, deixado ela sem vida!\n\n");
                            printf("você se encurralado novamente, sem saber pra onde ir! o que fazer?\n\n\n1)voce continua andando por que parado não pode ficar\\n2)algo estanho no chão, você se agacha pra ver\n");
                            scanf("%d",&esc);
                            opcoes(esc);
                            if(esc==1){
                              printf("você continua andando até que encontra uma saída, mas algo está errado, parecer ser o início\n\n mas algo mudou, você se vê de longe e grita pra si mesmo\n\n\n1)nao entre ai, você não vai mais sair\n2)você corre e tenta fazer algo\n");
                            scanf("%d",&esc);
                            opcoes(esc);
                            if(esc==1){
                              printf("sua voz não sai, você perdeu uma chance de cometer o mesmo erro.... NAO ESTA CANSADO DE PERDE?! KK INICEI NOVAMENTE\n\n");
                                      }else if(esc==2){
                                      printf("quando você corre, parece que não sai do lugar feito um pesadelo eterno....VOLTE PRO PESADELO KK INICIE O JOGO\n\n");
                                                        }

                            }else if(esc==2){
                              printf("OLHA SUA DERROTA TAVA NO CHAO.. INICIE");
                                      }

                                    }
                                    }else if(esc==2){
                          printf("você se encurralado novamente, sem saber pra onde ir! o que fazer?\n\n1)você continua andando por que parado não pode ficar\n2)algo estanho no chão, você se agacha pra ver\n");
                          scanf("%d",&esc);
                          opcoes(esc);
                          if(esc==1){
                            printf("você continua andando até que encontra uma saída, mas algo está errado, parecer ser o início\n\n mas algo mudou, você se vê de longe e grita pra si mesmo\n\n1)não entre ai, você não vai mais sair\n2)você corre e tenta fazer algo\n");
                            scanf("%d",&esc);
                            opcoes(esc);
                            if(esc==1){
                              printf("sua voz não sai, você perdeu uma chance de cometer o mesmo erro... VOLTE AO INICIO\n");
                                      }else if(esc==2){
                                      printf("quando você corre, parece que não sai do lugar feito um pesadelo eterno... VOLTE PRO PESADELO KK INICIE O JOGO\n");
                                                        }
                                    }

                                                    }

                              }else if(esc==2){
                      printf("VOCE MORRE CLARO KK QUE FAQUINHA QUE NADA");
                                              }
                                            }
                          }else if (esc==2){
                          printf("voce um escolheu um caminho complicado meu amigo, então vamos lá, tomara que encontre uma cova logo\n");
                          printf("veja tem algo mais a frente, parece ser um baú, mais pra que diabos isso estaria aqui, vamos verificar?\n\n1)claro, o que tem demais\n2)não, quanto mais rápido sair daqui melhor\n\n");
                          scanf("%d",&esc);
                          opcoes(esc);
                          if(esc==1){
                            printf("ao abrir o baú você encontra armas e joias, algo útil nessa jornada.\n");
                            printf("então o que vamos levar?\n\n1)armas e logico\n2)joias, sempre quis ser rico\n");
                            scanf("%d",&esc);
                            opcoes(esc);
                            if(esc==1){
                              printf("e sempre ter por perto um resolver ops quero dizer um revolver\n");
                              printf("ao verificar melhor, percebe que tem algo a mais no bua, veja um mapa, parece que vai ser mais fácil sair agora\n\n ");
                              printf("por onde vamos agora?\n\n1)mapa aponta para seguir reto, então vamos\n2)pera o que e isso?");
                              scanf("%d",&esc);
                              opcoes(esc);
                              if(esc==1){
                                printf("ao seguir reto você bate de frente com uma criatura estranha\n\n");
                                printf("como você deve reagir a isso\n1)tenta conversar\n2)sai correndo\n");
                                scanf("%d",&esc);
                                opcoes(esc);
                                if(esc==1){
                                  printf("incrivelmente sua ideia deu certo, a criatura fala e não e um monstro irracional\n\n OLHA ELE FALA PRA TU INICIAR O JOGO");
                                          }else if(esc==2){
                                            printf("quando você sai correndo, ela grita\n");
                                            printf("o que a criatura grita?\n1)espere EU SEI A SAIDA\n2)se correr e viado\n");
                                            scanf("%d",&esc);
                                            opcoes(esc);
                                            if(esc==1){
                                              printf("voce para de correr, fica assustado com o que a criatura fala\n");
                                              printf("e faz a seguinte pergunta:\n\n 1)para fica a saida entao.\n2)esta me zoando tu fala?!");
                                              scanf("%d",&esc);
                                              opcoes(esc);
                                              if(esc==1){
                                                printf(" A SAIDA E PARA PERDEDORES, INICIE O LABIRINTO");
                                                        }else if(esc==2){
                                                          printf("criatura se aproxima de você, isso o deixa assustado, ele recua, criatura diz que sabe como sair dali\n");
                                                          printf("como voce reagiria nessa situação\n1)normal, um ser místico sempre fala comigo nos labirintos\n2)tu e doido, vou nada e começa a correr\n");
                                                          scanf("%d",&esc);
                                                          opcoes(esc);
                                                if(esc==1){
                                                  printf("a criatura se revela ser o dono daquele labirinto e se chamar Minotauro\n");
                                                  printf("voce fica mais aliviado, mas continua em alerta\n ela sugere que você siga ela, oque você fara?\n1)segue, pois e a melhor opcao\n2)desconfia e faz mais perguntas\n");
                                                  scanf("%d",&esc);
                                                  opcoes(esc);
                                                  if(esc==1){
                                                    printf("o Minotauro começa a falar como chegou ali, e como aquele lugar e misterioso.\n\n neste momento você pode fazer uma pergunta a ele, escolha\n1)a quanto tempo esta aqui?\n2)do que você se alimenta?");
                                                    scanf("%d",&esc);
                                                    opcoes(esc);
                                                    if(esc==1){
                                                      printf("a fera responde que faz 5 mil anos");
                                                              }else if(esc==2){
                                                                printf("ela fala que se alimenta de carne, mas faz tempo que não encontra nada");
                                                                              }
                                                            }else if(esc==2){
                                                    printf("o Minotauro começa a falar como chegou ali, e como aquele lugar e misterioso.\n\nnesse momento você pode fazer uma pergunta a ele, escolha\n1)a quanto tempo está aqui?\n2)do que você se alimenta?");
                                                    scanf("%d",&esc);
                                                    opcoes(esc);
                                                    if(esc==1){
                                                      printf("a fera responde que faz 5 mil anos");
                                                      printf("você continua a fazer perguntas\escolha a próxima\n1)você já viu outro humano?\n2)onde nos estamos indo?");
                                                      scanf("%d",&esc);
                                                      opcoes(esc);
                                                      if(esc==1){
                                                        printf("outras pessoas já passaram por aqui, mas não as encontrei novamente\n");
                                                        printf("voce começa a ficar nervoso, o que será que aconteceu com essas pessoas, quando a fera fala que chegaram a saída, você não vê nada, apenas ossos\n\n o que fazer nessa situação\n1)corre\n2)tenta lutar\n");
                                                        scanf("%d",&esc);
                                                        if(esc==1){
                                                          printf("quando você tenta correr a fera lhe golpeia, lhe furado com seus chifres, você começa a sangrar.\n");
                                                          printf("o sangue deixa a fera ainda mais violenta, você ainda tem forças pra correr\n o que você faz\n1)corre, e se mete mais a fundo no labirinto\n2)começa a gritar por ajudar\n");
                                                          scanf("%d",&esc);
                                                          opcoes(esc);
                                                          if(esc==1){
                                                              printf("a fera percebe que você vai fugir e começa a te caçar.\n\você vê um obstáculo, e uma grande pedra no caminho, o que faz\n\n1)pula\n2)passa por baixo");
                                                            scanf("%d",&esc);
                                                            opcoes(esc);
                                                            if(esc==1){
                                                              printf("você pula, mas acaba de batendo e caindo no chão, você se levanta a fera esta mais próxima");            
                                                              printf("você corre mais rápido possível, como se não houvesse amanhã, a um desvio a frente, escolha\n\n1)direito\n2)esquerdo");
                                                              scanf("%d",&esc);
                                                              opcoes(esc);
                                                              if(esc==1){
                                                                printf("falta pouco está quase escapando.\n\n você está perdendo muito sangue e tropeça, tem que agir rápido?\n1)se esconde na moita\n2)tenta chegar na esquina do labirinto.\n");
                                                                  scanf("%d",&esc);
                                                                opcoes(esc);
                                                                if(esc==1){
                                                                  printf("você se esconde na moita e cai num buraco, era uma armadilha, você morreu");
                                                                          }else if (esc==2){
                                                                          printf("você não tem mais forças, mas joga uma pedra que estava no chão no Minotauro, acertando ele se desiquilibra e cai numa moita, dentro da moita tinha uma armadilha.\n\n PARABENS VOCE VENCEU O MONSTRO,  POREM continua perdido muhahahaha");
                                                                                            }
                                                                        }
                                                                      }
                                                                    }else if (esc==2){
                                                              printf("quando você tenta passar por baixo, não consegue e pula por cima, caindo no Chao, você se levanta a fera esta mais próxima");

                                                                                      }
                                                                  }else if(esc==2){
                                                                  printf("você da um chute na fera, mas ela não senti nada, ela revida com um golpe de seu chifre, lhe perfurando, você começa a sangrar");
                                                                                  }
                                                                }else if(esc==2){
                                                                printf("eu lhe disse que ia levar você para saída, e pra lá que estamos indo");
                                                                                }
                                                              }else if(esc==2){
                                                                printf("ela fala que se alimenta de carne, mas faz tempo que não encontra nada");
                                                              printf("você continua a fazer perguntas\n escolha a próxima\n1)você já viu outro humano?\n2)onde nos estamos indo?");
                                                      scanf("%d",&esc);
                                                      opcoes(esc);
                                                      if(esc==1){
                                                        printf("outras pessoas já passaram por aqui, mas não as encontrei novamente");
                                                                }else if(esc==2){
                                                                printf("eu lhe disse que ia levar você para saída, e pra lá que estamos indo");
                                                                                }

                                                                              }
                                                                            }
                                                          }else if(esc==2){
                                                      printf("quando você tenta correr a criatura te segura com tanta forca que  você não tem como escapar\n");
                                                                          }
                                                                        }
                                                      }else if(esc==2){
                                                  printf("HUMMMM TU E ?! INICIA LOGO O JOGO");
                                                                      }
                                                          }
                                        } else if(esc==2){
                                        printf("VOCE PERDEU ALGO NO CHAO? SUA DERROTA, INICIE O JOGO.");
                                                        }
                                      }else if(esc==2){
                                      printf("CE TEM DEMENCIA? HAHA então beleza, leva isso ai não quero saber, tu que esta jogando\n");
                                      printf("ao verificar melhor, percebe que tem algo a mais no bua, veja um mapa, parece que vai ser mais fácil sair agora\n ");
                              printf("por onde vamos agora?\n1)mapa aponta para seguir reto, então vamos\n2)pera o que e isso?");
                              scanf("%d",&esc);
                              opcoes(esc);
                              if(esc==1){
                                printf("ao seguir reto você bate de frente com uma criatura estranha\n");
                                printf("como você deve reagir a isso\n1)tenta conversar\n2)sai correndo\n");
                                scanf("%d",&esc);
                                opcoes(esc);
                                if(esc==1){
                                  printf("incrivelmente sua ideia deu certo, a criatura fala e não e um monstro irracional... ELA MANDA TU INICIA O JOGO AHAHAHA\n");
                                          }else if(esc==2){
                                            printf("quando você sai correndo, ela grita\n");
                                            printf("o que a criatura grita?\n1)espere sou seu pai\n2)se correr e viado\n");
                                            scanf("%d",&esc);
                                            opcoes(esc);
                                            if(esc==1){
                                              printf("você para de correr, fica assustado com o que a criatura fala\n");
                                              printf("e faz a seguinte pergunta:\n 1)se tu e meu pai, qual e meu apelido\n2)ta me zoando tu fala?!");
                                              scanf("%d",&esc);
                                              opcoes(esc);
                                              if(esc==1){
                                                printf("na realidade a criatura só falou isso pra fazer ele para, ela e só uma criatura mística que queria conversar\n");
                                                        }else if(esc==2){
                                                          printf("criatura se aproxima de você, isso o deixa assustado, ele recua, criatura diz que sabe como sair dali\n");
                                                          printf("como você reagiria nessa situação\n1)normal, um ser místico sempre fala comigo nos labirintos\n2)tu que e me comer, vou nada e começa a correr\n");
                                                          scanf("%d",&esc);
                                                          opcoes(esc);
                                                if(esc==1){
                                                  printf("NAO KK NAO E NORMAL.. INICIA LOGO ISSO AI");
                                                          }else if(esc==2){
                                                      printf("quando você tenta correr a criatura te segura com tanta forca que voce não tem como escapar\nVOCE MORREU, VOCE NAO VAI ACHAR A SAIDA");
                                                                          }
                                                                        }
                                                      } else if (esc==2){
                                                    printf("E TU E?HAHAH INICIA O JOGO");
                                                                        }
                                                          }
                                        }else if(esc==2){
                                printf("SUA DERROTA NO CHAO, INICIE O JOGO HAHAHA");
                                                        }
                                      }
                                    }else if(esc==2){
                            printf("VOCE FOI GANANCIOSO e perdeu, inicie o jogo.");
                                                      }
                                            }
                                }

                  }
          }
    }else if(esc==2){
    printf("hehehe nao tem diego so renan mesmo.\n\n");
    main();
    }return 0;
  }

