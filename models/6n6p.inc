* ==============================================================
* 6N6P LTSpice model
* Koren model (5 parameters): mean fit error 0.591392mA
* Traced by Wayne Clay on 12/23/2016 using Curve Captor v0.9.1
* and Engauge Digitizer from Soviet datasheet
* ==============================================================
.subckt 6N6P  P G K
    Bp  P K  I=(0.01775316952m)*uramp(V(P,K)*ln(1.0+exp((7.538517656)+
+ (7.538517656)*(16.95526988)*V(G,K)/sqrt((-0.006038270499k)+
+ (V(P,K))**2)))/(7.538517656))**(1.665343065)
  Cgp G P 4.2p ; 0.7p added (3.5p)
  Cgk G K 5.1p ; 0.7p added (4.4p)
  Cpk P K 1.9p ; 0.2p added (1.7p)
  Rpk P K 1.0G ; to avoid floating nodes in mu-follower
  d3  G K dx1
.model dx1 d(is=1n rs=2k cjo=1pf N=1.5 tt=1n)
.ends 6N6P