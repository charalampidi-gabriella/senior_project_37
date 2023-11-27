//  (C) Copyright John Maddock 2006-7.
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

   static const std::array<std::array<typename table_type<T>::type, 4>, 140> legendre_p = {{
      {{ SC_(3.0), SC_(-0.804919183254241943359375), SC_(-0.09637879251279735399302410605920296560178428535437), SC_(-0.84585603807674271376114723023136351467791030262194) }}, 
      {{ SC_(3.0), SC_(-0.74602639675140380859375), SC_(0.081027074619746344180737168075984167003866787126753), SC_(-0.80282652754865351221792807765781454966620965987346) }}, 
      {{ SC_(3.0), SC_(-0.72904598712921142578125), SC_(0.12483445078630286253952851342405305778981983166886), SC_(-0.77778604740049228448138273219369426999256253154477) }}, 
      {{ SC_(3.0), SC_(-0.62323606014251708984375), SC_(0.32965574890576083785628027375894100181596968468511), SC_(-0.54513199810739721932916528089324249381856320981233) }}, 
      {{ SC_(3.0), SC_(-0.5579319000244140625), SC_(0.40270407973501426077134190961714921286329627037048), SC_(-0.36518655840013507868281802164420656404202160032323) }}, 
      {{ SC_(3.0), SC_(-0.44300353527069091796875), SC_(0.44715433191447753543307951822408097264371917844983), SC_(-0.036791936427532285617966259083782977179826877960429) }}, 
      {{ SC_(3.0), SC_(-0.38366591930389404296875), SC_(0.43431026413595020613207998332397363761003816762241), SC_(0.12305391050245773781086426664843252339855233834581) }}, 
      {{ SC_(3.0), SC_(0.09376299381256103515625), SC_(-0.13858369755095318860018104847528497280961801152444), SC_(0.63165561565784611978985918320060987131739507929363) }}, 
      {{ SC_(3.0), SC_(0.0944411754608154296875), SC_(-0.13955592906053357908142302859499928047171124489978), SC_(0.63114960637026901412475946814198954544987429570206) }}, 
      {{ SC_(3.0), SC_(0.264718532562255859375), SC_(-0.35070182432271000038054645231433426033618161454797), SC_(0.39637508312826953308089998658220280933868101174524) }}, 
      {{ SC_(3.0), SC_(0.62944734096527099609375), SC_(-0.32069719648529449984920462269136209876307930244366), SC_(-0.561319593950734471650860089348537659182887471015) }}, 
      {{ SC_(3.0), SC_(0.67001712322235107421875), SC_(-0.25306053375130974366335052634993663112084050226258), SC_(-0.66081564793406011705012545543655510789740391137235) }}, 
      {{ SC_(3.0), SC_(0.81158387660980224609375), SC_(0.11903579598709513016345544955329471825677956076106), SC_(-0.84529721625683760880474150426292608647145977571808) }}, 
      {{ SC_(3.0), SC_(0.826751708984375), SC_(0.1726224256643575927228084765374660491943359375), SC_(-0.83881729781391507585288129748948101183986537673708) }}, 
      {{ SC_(3.0), SC_(0.91501367092132568359375), SC_(0.54271752467888026988712457448701953488523486157646), SC_(-0.58117864722536578272928121147096403274716994164107) }}, 
      {{ SC_(3.0), SC_(0.92977702617645263671875), SC_(0.61478093203605979210896718576903619002393952541752), SC_(-0.47601316933958185359002896997987802108555441085956) }}, 
      {{ SC_(3.0), SC_(0.93538987636566162109375), SC_(0.6429734865180513243156944550547871042311953715398), SC_(-0.42776266738524467923677588882284251961316602328383) }}, 
      {{ SC_(3.0), SC_(0.93773555755615234375), SC_(0.65488632484399120345028300071987814590102061629295), SC_(-0.40599139678289761995855284290619999445381396586062) }}, 
      {{ SC_(3.0), SC_(0.98576259613037109375), SC_(0.91608863936432686136610015203984858089825138449669), SC_(0.49911743300628611193386173368321463301956284745397) }}, 
      {{ SC_(3.0), SC_(0.99292266368865966796875), SC_(0.95791076106518834501582130387317692843396343960194), SC_(0.90345674705561627727354266945334737890516023119515) }}, 
      {{ SC_(5.0), SC_(-0.804919183254241943359375), SC_(0.39312973382980111956333250391790337182567613112521), SC_(-0.30797722800923861903533473474484308050729533072248) }}, 
      {{ SC_(5.0), SC_(-0.74602639675140380859375), SC_(0.4144532363564166856565791456062465926118819061177), SC_(0.036750999302184486102911681342167235245694654813727) }}, 
      {{ SC_(5.0), SC_(-0.72904598712921142578125), SC_(0.40170549167165668611417028849058086074027575851596), SC_(0.12520396031165822675600338672833850727710544023424) }}, 
      {{ SC_(5.0), SC_(-0.62323606014251708984375), SC_(0.20914641668663499200234579439954172182527145448352), SC_(0.50490192751447088632949650396821036768725468002192) }}, 
      {{ SC_(5.0), SC_(-0.5579319000244140625), SC_(0.047804048918209109846499488120279081448233535491368), SC_(0.58010824986594190037517814500067698165903587991196) }}, 
      {{ SC_(5.0), SC_(-0.44300353527069091796875), SC_(-0.20426834340719068505951661242682923196540890996203), SC_(0.46263002281764960331577712774593562735119375851165) }}, 
      {{ SC_(5.0), SC_(-0.38366591930389404296875), SC_(-0.29067957811088193540744987867754401309946084909752), SC_(0.31516732667905959819121026003137539434799697742685) }}, 
      {{ SC_(5.0), SC_(0.09376299381256103515625), SC_(0.16864990731338440263027533820227754755159887863031), SC_(-0.46423435769108284256474941359029876833900529649787) }}, 
      {{ SC_(5.0), SC_(0.0944411754608154296875), SC_(0.1697659485252767697264924108060913297868060247664), SC_(-0.46324927263674125093814131181689301223878566421762) }}, 
      {{ SC_(5.0), SC_(0.264718532562255859375), SC_(0.34426832813003273714672924371824224133559143244821), SC_(-0.049432441822728069543372084272506540578906568566679) }}, 
      {{ SC_(5.0), SC_(0.62944734096527099609375), SC_(-0.22382279528405448977447983371074041669623686569369), SC_(0.49147664711760436466007581944059038967809611892101) }}, 
      {{ SC_(5.0), SC_(0.67001712322235107421875), SC_(-0.31223652976417549895070288708720094161868379195206), SC_(0.37610337461310797969209584800253042022904925554525) }}, 
      {{ SC_(5.0), SC_(0.81158387660980224609375), SC_(-0.38292680966875416452976755202641274083447045975907), SC_(-0.34885118284757894374218709400505373551960888245662) }}, 
      {{ SC_(5.0), SC_(0.826751708984375), SC_(-0.35269763131671469331857533366092200943081591546502), SC_(-0.44136440965471238150156372311112451085353528866709) }}, 
      {{ SC_(5.0), SC_(0.91501367092132568359375), SC_(0.063446713438062204473932078136911612759332109107889), SC_(-0.82663633769127728796241230589411701186971587004582) }}, 
      {{ SC_(5.0), SC_(0.92977702617645263671875), SC_(0.18225073809630641977015280395310276646936069311641), SC_(-0.82168035297079603201814519993667772968868461426771) }}, 
      {{ SC_(5.0), SC_(0.93538987636566162109375), SC_(0.23180510604150429189260138185795569842018206442858), SC_(-0.80887163427971286589959630152315983255456115675709) }}, 
      {{ SC_(5.0), SC_(0.93773555755615234375), SC_(0.25325565314935514475658826960850521331006389130604), SC_(-0.80136139259062971113064196979296442577453518790514) }}, 
      {{ SC_(5.0), SC_(0.98576259613037109375), SC_(0.79688047965898906667942422168075865228912496237335), SC_(-0.050056541330186097160719119175881895101011997635397) }}, 
      {{ SC_(5.0), SC_(0.99292266368865966796875), SC_(0.89644489554848727542361918961404754824639399670787), SC_(0.37903738567797794270627705612855765856516256104433) }}, 
      {{ SC_(6.0), SC_(-0.804919183254241943359375), SC_(-0.39836758461472829348998598547346973134856336403357), SC_(-0.11186770789341157073263552304164952167231422725269) }}, 
      {{ SC_(6.0), SC_(-0.74602639675140380859375), SC_(-0.26942943612721316815918357350921061418816560550185), SC_(-0.42602747957292468844799426387152791743497741383254) }}, 
      {{ SC_(6.0), SC_(-0.72904598712921142578125), SC_(-0.21840146170346573698680050916460454542235139698046), SC_(-0.48296923649820365053381714059193346150823509339657) }}, 
      {{ SC_(6.0), SC_(-0.62323606014251708984375), SC_(0.11229562713036701432807908627179645376710821780817), SC_(-0.52579618536742217260788491630929608589881417853436) }}, 
      {{ SC_(6.0), SC_(-0.5579319000244140625), SC_(0.25809538238812630583446736370855025636974655379774), SC_(-0.35443454005327430793711175663169328286248363280561) }}, 
      {{ SC_(6.0), SC_(-0.44300353527069091796875), SC_(0.32627027269443981686050692334106934126675080884247), SC_(0.076978364356597061911602221500765420329999192593694) }}, 
      {{ SC_(6.0), SC_(-0.38366591930389404296875), SC_(0.27296210523874472670236080623125046782530388804834), SC_(0.27741174731966691723650037805968774957839220262642) }}, 
      {{ SC_(6.0), SC_(0.09376299381256103515625), SC_(-0.25631763331851885315854599502995062449465614809422), SC_(-0.28268746516151787527692774690914081177303614109476) }}, 
      {{ SC_(6.0), SC_(0.0944411754608154296875), SC_(-0.25552408862019782534903797380377055156453603599383), SC_(-0.28448177559590539095516583083575884593430785034601) }}, 
      {{ SC_(6.0), SC_(0.264718532562255859375), SC_(0.055663225234594337836693345273561919051283660765644), SC_(-0.49211101331909515135704356361137060677480116821877) }}, 
      {{ SC_(6.0), SC_(0.62944734096527099609375), SC_(0.095034738211053556569114686960941777812118998024525), SC_(0.53595663488501203764878594691541436002403012434814) }}, 
      {{ SC_(6.0), SC_(0.67001712322235107421875), SC_(-0.027907528859134634498084497388775217092645960712684), SC_(0.56739928086411463246848716706273921826782270933536) }}, 
      {{ SC_(6.0), SC_(0.81158387660980224609375), SC_(-0.40564261599347283927948120545903068249295719183982), SC_(0.065698612969198511696728446106187822049301308842024) }}, 
      {{ SC_(6.0), SC_(0.826751708984375), SC_(-0.41441668785915980661759850483046331378288487166901), SC_(-0.046051089316127435599875211778830659378778305951565) }}, 
      {{ SC_(6.0), SC_(0.91501367092132568359375), SC_(-0.14534417319305000517260528484257988550512306946976), SC_(-0.73321199968869349837797508987098833755655170036581) }}, 
      {{ SC_(6.0), SC_(0.92977702617645263671875), SC_(-0.02497873763140766287065827948618680160671583843944), SC_(-0.80187400193518611909857727430796462753119035734657) }}, 
      {{ SC_(6.0), SC_(0.93538987636566162109375), SC_(0.028201141383986142054022312024873160606967286580461), SC_(-0.81740119198478364508466660088619509288367234232148) }}, 
      {{ SC_(6.0), SC_(0.93773555755615234375), SC_(0.051703886374808225952970501830818053254301264204132), SC_(-0.82169997971024778036115328485043201232954643879117) }}, 
      {{ SC_(6.0), SC_(0.98576259613037109375), SC_(0.72170038823497209265542323838206061870527088205587), SC_(-0.25448294588059600387767244854330786413565245709897) }}, 
      {{ SC_(6.0), SC_(0.99292266368865966796875), SC_(0.85656129838850274253099953133227725425228299308345), SC_(0.17625410031563921455149796282056956604031098075843) }}, 
      {{ SC_(13.0), SC_(-0.804919183254241943359375), SC_(-0.021346989675489582899777513316783512919027984178499), SC_(-0.44112202059370695044753367609499513618897172902607) }}, 
      {{ SC_(13.0), SC_(-0.74602639675140380859375), SC_(0.24666838562906154791363844279971485004009388494544), SC_(-0.1559921230869429475133589681910169153699159544855) }}, 
      {{ SC_(13.0), SC_(-0.72904598712921142578125), SC_(0.26205171362935296430727406212496048008100313584788), SC_(-0.017605179298092333976782550762974395271667547123874) }}, 
      {{ SC_(13.0), SC_(-0.62323606014251708984375), SC_(-0.080372069801645230864998901272264760659582933477599), SC_(0.36425485923732018458592174575151844471405378913141) }}, 
      {{ SC_(13.0), SC_(-0.5579319000244140625), SC_(-0.23583528015736737224719659667717786026703268284614), SC_(0.053245393722305081751995109192359134354871591534969) }}, 
      {{ SC_(13.0), SC_(-0.44300353527069091796875), SC_(0.018972604977717555259851272576261414873385597702604), SC_(-0.35886939657929715282594368713239077257966834584912) }}, 
      {{ SC_(13.0), SC_(-0.38366591930389404296875), SC_(0.18550250811451569348004068552647395938057310465493), SC_(-0.20246148054258569990560069049122417793152050446365) }}, 
      {{ SC_(13.0), SC_(0.09376299381256103515625), SC_(0.20769838303968474575312727060982309147206670120161), SC_(-0.10173158142023370803559517312227984933062321078173) }}, 
      {{ SC_(13.0), SC_(0.0944411754608154296875), SC_(0.20829227701017635616317556146048162430074934166827), SC_(-0.098728123460385300129782227650749493941872811511327) }}, 
      {{ SC_(13.0), SC_(0.264718532562255859375), SC_(-0.1016381458266690823353213981274025318520849829061), SC_(0.30835386562966326517046404619145380164126531151263) }}, 
      {{ SC_(13.0), SC_(0.62944734096527099609375), SC_(0.055159037199559177575178459223260433973722342159236), SC_(0.37691576754738027132316322394241161656121459482015) }}, 
      {{ SC_(13.0), SC_(0.67001712322235107421875), SC_(-0.11980080975332609846766208424077118471193674213212), SC_(0.34804362893711095691292965673736967284289808313288) }}, 
      {{ SC_(13.0), SC_(0.81158387660980224609375), SC_(0.064420961086402494165295142893303224035523617990131), SC_(-0.43419593067780672264639624363068831709493843634964) }}, 
      {{ SC_(13.0), SC_(0.826751708984375), SC_(0.16013654257672660076220863480719945813853670795106), SC_(-0.37830883499601794980891054166266352530711732686068) }}, 
      {{ SC_(13.0), SC_(0.91501367092132568359375), SC_(0.02981406506695430902920205723465070991144692911286), SC_(0.53391573874244763290223203488170268282792221646375) }}, 
      {{ SC_(13.0), SC_(0.92977702617645263671875), SC_(-0.14928783504228836625545729908131879929441545864731), SC_(0.5094824048642415323846575901763459962675439032328) }}, 
      {{ SC_(13.0), SC_(0.93538987636566162109375), SC_(-0.21821472006169780300413719938049820079476182672815), SC_(0.45809358526457816919278185678834785451752393960047) }}, 
      {{ SC_(13.0), SC_(0.93773555755615234375), SC_(-0.24593495540807619378595982256918019147674926458319), SC_(0.42889513803137504816802334074350455620384537313833) }}, 
      {{ SC_(13.0), SC_(0.98576259613037109375), SC_(0.06582920955682109946957491732104452005420774878568), SC_(-0.81713360182404631829162888606556475045158637145556) }}, 
      {{ SC_(13.0), SC_(0.99292266368865966796875), SC_(0.45168281361591264659940935116533646174194486856019), SC_(-0.66523405291864568469611605694139032227348875420525) }}, 
      {{ SC_(16.0), SC_(-0.804919183254241943359375), SC_(-0.24617676998426440746802697580367697602069689994431), SC_(-0.10342588249052076335368259863624425129111161555058) }}, 
      {{ SC_(16.0), SC_(-0.74602639675140380859375), SC_(0.05589693997183205349782501045594495596630477937041), SC_(-0.36756591277520722601404123599925254242454264467136) }}, 
      {{ SC_(16.0), SC_(-0.72904598712921142578125), SC_(0.1435839632236998433207972126531002284333052188772), SC_(-0.29678713314015209268198753833877314533807120416601) }}, 
      {{ SC_(16.0), SC_(-0.62323606014251708984375), SC_(0.025006544465484963551355899284888512107603542872025), SC_(0.34655424303519465823894024987098609170947386899599) }}, 
      {{ SC_(16.0), SC_(-0.5579319000244140625), SC_(-0.20273668414164894060160750060929827332311158866899), SC_(0.1149894928335745044316704348175343096216902152789) }}, 
      {{ SC_(16.0), SC_(-0.44300353527069091796875), SC_(0.0568430344346968196836808967847074379571404518767), SC_(-0.31329734713414163463145524081279862392937646591181) }}, 
      {{ SC_(16.0), SC_(-0.38366591930389404296875), SC_(0.19955350157037941974526184597940130951592808285846), SC_(-0.069121706148999889753860133645349635646774147838909) }}, 
      {{ SC_(16.0), SC_(0.09376299381256103515625), SC_(0.004077511401713283600036273485948150451706308548591), SC_(0.3090887073999325166929620341518083398087059069866) }}, 
      {{ SC_(16.0), SC_(0.0944411754608154296875), SC_(0.0018646455756569841632128890021862805086238621865179), SC_(0.30915113128562592599142879370578903469780546339442) }}, 
      {{ SC_(16.0), SC_(0.264718532562255859375), SC_(-0.057138811421491531852629180943328986609990232285623), SC_(-0.30102711196776165823913047161703041527490961215075) }}, 
      {{ SC_(16.0), SC_(0.62944734096527099609375), SC_(0.053905813652862864225047719177357021912552840167578), SC_(-0.3394893321631230893291882500714616497801870033187) }}, 
      {{ SC_(16.0), SC_(0.67001712322235107421875), SC_(0.20571755182888692558409436652095184688145604215735), SC_(-0.15400029036097541197972382773740560927016105513573) }}, 
      {{ SC_(16.0), SC_(0.81158387660980224609375), SC_(-0.25610293236665229776934216307688324622589786937523), SC_(0.029961309199690485279175505247898935243066233951638) }}, 
      {{ SC_(16.0), SC_(0.826751708984375), SC_(-0.24467257950234667771221825741251222771947492803914), SC_(-0.14584909786233540893014977656569646339205583145946) }}, 
      {{ SC_(16.0), SC_(0.91501367092132568359375), SC_(0.30042521371658467516725427482154698462078838756), SC_(0.11242410274334292000251659391599358954645603738835) }}, 
      {{ SC_(16.0), SC_(0.92977702617645263671875), SC_(0.20912498055485121957345853172873004479220934035096), SC_(0.38711457227561848903449378495312209659537067985191) }}, 
      {{ SC_(16.0), SC_(0.93538987636566162109375), SC_(0.14228176834914109691746234218230423568131480850111), SC_(0.46724475576348077611133336497614776597835295379528) }}, 
      {{ SC_(16.0), SC_(0.93773555755615234375), SC_(0.10947822546659067656059296835577708662292349876443), SC_(0.49345958632627785174194039683464075153298036877136) }}, 
      {{ SC_(16.0), SC_(0.98576259613037109375), SC_(-0.18053759743174070857427031356500616942177764243751), SC_(-0.69129540587532453519248426712601771804500778047449) }}, 
      {{ SC_(16.0), SC_(0.99292266368865966796875), SC_(0.24467850628321941403216962899355195806033451938156), SC_(-0.79611153201220615596111924787398204555433320171123) }}, 
      {{ SC_(18.0), SC_(-0.804919183254241943359375), SC_(-0.0091062060443244939758547861277241601517458288228401), SC_(-0.37780874716766649794749661161502596284251171176729) }}, 
      {{ SC_(18.0), SC_(-0.74602639675140380859375), SC_(0.22554068680311218202775373160884926839138620763174), SC_(0.043450468136242147653982143862844811198611491554443) }}, 
      {{ SC_(18.0), SC_(-0.72904598712921142578125), SC_(0.18653718888369370131458265584018026946159296567964), SC_(0.19518736469516489835563573974741507967360934238079) }}, 
      {{ SC_(18.0), SC_(-0.62323606014251708984375), SC_(-0.20837325214812717413067018822585361068165851336255), SC_(-0.037088866497216472583736911887498188987603773369659) }}, 
      {{ SC_(18.0), SC_(-0.5579319000244140625), SC_(0.0083537300257362812848909087265145663947906734657682), SC_(-0.31950967163170480424900959261902943297087436887194) }}, 
      {{ SC_(18.0), SC_(-0.44300353527069091796875), SC_(0.11695183881480336805185423703698692829975597728824), SC_(0.24681367379374692383023201907678584193776277803732) }}, 
      {{ SC_(18.0), SC_(-0.38366591930389404296875), SC_(-0.10358901613970675221183097893317277350294739582856), SC_(0.25578907869474625948919953810862798903271057530686) }}, 
      {{ SC_(18.0), SC_(0.09376299381256103515625), SC_(0.030899020693203570750329014297680833991336820156792), SC_(-0.28791754441150052849520877694768651589010597918611) }}, 
      {{ SC_(18.0), SC_(0.0944411754608154296875), SC_(0.033208344966164570458319052396398896477890882959009), SC_(-0.28729203288102887394022408730410045130704945170246) }}, 
      {{ SC_(18.0), SC_(0.264718532562255859375), SC_(-0.045964012675459912647004385671790829004749499845969), SC_(0.28775273984847125983134846044367147353322574723096) }}, 
      {{ SC_(18.0), SC_(0.62944734096527099609375), SC_(-0.21025192720175270695719746239016794207250758550671), SC_(-0.011451910307176188739521846496709015868005938376706) }}, 
      {{ SC_(18.0), SC_(0.67001712322235107421875), SC_(-0.11209473575977880537554630008831322938651681961203), SC_(-0.28861574077574071045967706163764266303939167641235) }}, 
      {{ SC_(18.0), SC_(0.81158387660980224609375), SC_(-0.059414308841952830929071045427642264332649709039605), SC_(0.36941533931174362399141104265754795528484218175544) }}, 
      {{ SC_(18.0), SC_(0.826751708984375), SC_(-0.1661861116384618036402153021294856784649918532195), SC_(0.28742497280291907514593608858531889117823779493292) }}, 
      {{ SC_(18.0), SC_(0.91501367092132568359375), SC_(0.24104179066621669826861428047478740284125071072384), SC_(-0.25816581242891276150855737931173321477113736399573) }}, 
      {{ SC_(18.0), SC_(0.92977702617645263671875), SC_(0.30345956430814040115575308179633295683878952009221), SC_(0.053205379543234927660568467761641814470230916738039) }}, 
      {{ SC_(18.0), SC_(0.93538987636566162109375), SC_(0.28695924419323148602457516358630434274549630594269), SC_(0.19040502613280754358590157800975680518526525190133) }}, 
      {{ SC_(18.0), SC_(0.93773555755615234375), SC_(0.27214637032176476176235696410333280489913435468021), SC_(0.24695230662862708114901251701483136230530918002153) }}, 
      {{ SC_(18.0), SC_(0.98576259613037109375), SC_(-0.30043454768104230746662772278855454488514250456508), SC_(-0.52586497321495004128692505709794988132542865806662) }}, 
      {{ SC_(18.0), SC_(0.99292266368865966796875), SC_(0.10905904618186494808823511070262036756283922080124), SC_(-0.8190043052645567950966181297246945012178431035647) }}, 
      {{ SC_(19.0), SC_(-0.804919183254241943359375), SC_(-0.13197080377202665736616914483295430386103226798339), SC_(0.30439185079461838727386102511417679445130143697504) }}, 
      {{ SC_(19.0), SC_(-0.74602639675140380859375), SC_(-0.145888472515752488322967820082056444353328274887), SC_(-0.26146280837274387072049326070853702574943967213499) }}, 
      {{ SC_(19.0), SC_(-0.72904598712921142578125), SC_(-0.049543273739376098938164118341034405465324305394334), SC_(-0.33399130950651187664252780722066231231086715215037) }}, 
      {{ SC_(19.0), SC_(-0.62323606014251708984375), SC_(0.108462474462736719241499115773313996144190665045), SC_(0.27188868340165133975799203281538322711757069710654) }}, 
      {{ SC_(19.0), SC_(-0.5579319000244140625), SC_(-0.16898700597587011902855624616392747901805702881528), SC_(0.16296957620279172219978419815087191821651266886829) }}, 
      {{ SC_(19.0), SC_(-0.44300353527069091796875), SC_(0.086774244261237041187502205186727910747248943821998), SC_(-0.2669005399736008170995423913834449884708993279043) }}, 
      {{ SC_(19.0), SC_(-0.38366591930389404296875), SC_(0.18518233719073980253783272267881493406790394149709), SC_(0.050815807727239433167794934837935315089529954541468) }}, 
      {{ SC_(19.0), SC_(0.09376299381256103515625), SC_(-0.1749285947092888721974786955725138685456169025118), SC_(-0.073354024188019371331713593919507214584741353774141) }}, 
      {{ SC_(19.0), SC_(0.0944411754608154296875), SC_(-0.17429825143908666454510603569046385180196182465626), SC_(-0.077001126265999192631865199712139132518527301044888) }}, 
      {{ SC_(19.0), SC_(0.264718532562255859375), SC_(0.16022500206625985912825819052448183125933330717671), SC_(0.14198924834209712722889554522828334583526568794205) }}, 
      {{ SC_(19.0), SC_(0.62944734096527099609375), SC_(-0.13438326361094362774586020859943409104199788819994), SC_(0.24300673266449070282404274854258133237165626165118) }}, 
      {{ SC_(19.0), SC_(0.67001712322235107421875), SC_(-0.20602713406941943301157630033028134054188569383329), SC_(-0.060940372673870113382880029493240963759634545830116) }}, 
      {{ SC_(19.0), SC_(0.81158387660980224609375), SC_(0.086971455844324875234132438927179131969983584970598), SC_(0.34508503887069582338167006750623249283260807122053) }}, 
      {{ SC_(19.0), SC_(0.826751708984375), SC_(-0.033442914793680897952010218712581529745899360903155), SC_(0.37454337915916963566398826067574338174597268932648) }}, 
      {{ SC_(19.0), SC_(0.91501367092132568359375), SC_(0.15007656103598576739971044779394255546718356845339), SC_(-0.37908868831917397336990106081043384870642885722423) }}, 
      {{ SC_(19.0), SC_(0.92977702617645263671875), SC_(0.28693501649909716776829384064013974960722420152263), SC_(-0.12313038336912701300360856578205807776474791522058) }}, 
      {{ SC_(19.0), SC_(0.93538987636566162109375), SC_(0.30324802829239922164147482899163792077902516015462), SC_(0.017801725881771420248228319415115282604840122400748) }}, 
      {{ SC_(19.0), SC_(0.93773555755615234375), SC_(0.30185089350015097041813236342216465473811492066808), SC_(0.080512539757557010183574032982523614885735562454396) }}, 
      {{ SC_(19.0), SC_(0.98576259613037109375), SC_(-0.34396150797274909426987918450335894287593307514199), SC_(-0.42686745322594445556165789826564473675847159812306) }}, 
      {{ SC_(19.0), SC_(0.99292266368865966796875), SC_(0.043969381393564338898972458003559718667557179801894), SC_(-0.81279540498362619452519349374691829897388634698573) }}
   }};

