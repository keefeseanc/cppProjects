{"changed":true,"filter":false,"title":"pthread-data-sharing-mutex-strict-alternation.cpp","tooltip":"/ITSC_3146_A_5_1/pthread-data-sharing-mutex-strict-alternation.cpp","value":"#include <iostream>\n#include <pthread.h>\n\n\nint count;\nint turn = 0;   //  Shared variable used to implement strict alternation\n\n\nvoid* myFunction(void* arg)\n{\n\tint actual_arg = *((int*) arg);\n    \n\tfor(unsigned int i = 0; i < 10; ++i) {\n        \n      //  TODO:\n      //  Make sure that the thread waits for its turn\n      //  before it enters the critical region.\n      //\n      //  HINT: The thread ID is stored in actual_arg\n      \n      //this doesnt work\n      //while (1){\n      while(turn != 0);\n      //  Beginning of the critical region\n      \n      count++;\n      std::cout << \"Thread #\" << actual_arg << \" count = \" << count << std::endl;\n        \n      //  End of the critical region\n      turn = 1;\n      }\n   \n      // TODO:\n      // Make sure that the other thread gets a turn\n      //\n      // HINT: There are only two threads: 0 and 1\n      //       You can use the C++ NOT operator (!)\n      //       to toggle back and forth.\n\n        \n\t}\n    \n\tpthread_exit(NULL);\n}\n\n\n//  HINT: It is not necessary to make any changes in main()\nint main()\n{\n    int rc[2];\n    pthread_t ids[2];\n    int args[2];\n    \n    count = 0;\n    for(unsigned int i = 0; i < 2; ++i) {\n        args[i] = i;\n        rc[i] = pthread_create(&ids[i], NULL, myFunction, (void*) &args[i]);\n    }\n    \n    for(unsigned int i = 0; i < 2; ++i) {\n        pthread_join(ids[i], NULL);\n    }\n    \n    std::cout << \"Final count = \" << count << std::endl;\n    pthread_exit(NULL);\n}\n","undoManager":{"mark":-4,"position":100,"stack":[[{"start":{"row":23,"column":6},"end":{"row":23,"column":7},"action":"insert","lines":["h"],"id":170}],[{"start":{"row":23,"column":6},"end":{"row":23,"column":7},"action":"remove","lines":["h"],"id":171}],[{"start":{"row":23,"column":5},"end":{"row":23,"column":6},"action":"remove","lines":["W"],"id":172}],[{"start":{"row":23,"column":5},"end":{"row":23,"column":6},"action":"insert","lines":[" "],"id":173}],[{"start":{"row":23,"column":6},"end":{"row":23,"column":7},"action":"insert","lines":["e"],"id":174},{"start":{"row":23,"column":7},"end":{"row":23,"column":8},"action":"insert","lines":["w"]}],[{"start":{"row":23,"column":8},"end":{"row":23,"column":9},"action":"insert","lines":["h"],"id":175}],[{"start":{"row":23,"column":9},"end":{"row":23,"column":10},"action":"insert","lines":["i"],"id":176}],[{"start":{"row":23,"column":9},"end":{"row":23,"column":10},"action":"remove","lines":["i"],"id":177}],[{"start":{"row":23,"column":8},"end":{"row":23,"column":9},"action":"remove","lines":["h"],"id":178}],[{"start":{"row":23,"column":7},"end":{"row":23,"column":8},"action":"remove","lines":["w"],"id":179}],[{"start":{"row":23,"column":6},"end":{"row":23,"column":7},"action":"remove","lines":["e"],"id":180}],[{"start":{"row":23,"column":6},"end":{"row":23,"column":7},"action":"insert","lines":["w"],"id":181}],[{"start":{"row":23,"column":7},"end":{"row":23,"column":8},"action":"insert","lines":["h"],"id":182}],[{"start":{"row":23,"column":8},"end":{"row":23,"column":9},"action":"insert","lines":["i"],"id":183}],[{"start":{"row":23,"column":9},"end":{"row":23,"column":10},"action":"insert","lines":["l"],"id":184}],[{"start":{"row":23,"column":10},"end":{"row":23,"column":11},"action":"insert","lines":["e"],"id":185}],[{"start":{"row":23,"column":11},"end":{"row":23,"column":13},"action":"insert","lines":["()"],"id":186}],[{"start":{"row":23,"column":12},"end":{"row":23,"column":13},"action":"insert","lines":["t"],"id":187}],[{"start":{"row":23,"column":13},"end":{"row":23,"column":14},"action":"insert","lines":["u"],"id":188}],[{"start":{"row":23,"column":14},"end":{"row":23,"column":15},"action":"insert","lines":["r"],"id":189}],[{"start":{"row":23,"column":15},"end":{"row":23,"column":16},"action":"insert","lines":["n"],"id":190}],[{"start":{"row":23,"column":16},"end":{"row":23,"column":17},"action":"insert","lines":[" "],"id":191}],[{"start":{"row":23,"column":17},"end":{"row":23,"column":18},"action":"insert","lines":["!"],"id":192}],[{"start":{"row":23,"column":18},"end":{"row":23,"column":19},"action":"insert","lines":["0"],"id":193}],[{"start":{"row":23,"column":18},"end":{"row":23,"column":19},"action":"remove","lines":["0"],"id":194}],[{"start":{"row":23,"column":18},"end":{"row":23,"column":19},"action":"insert","lines":["-"],"id":195}],[{"start":{"row":23,"column":18},"end":{"row":23,"column":19},"action":"remove","lines":["-"],"id":196}],[{"start":{"row":23,"column":18},"end":{"row":23,"column":19},"action":"insert","lines":["-"],"id":197}],[{"start":{"row":23,"column":18},"end":{"row":23,"column":19},"action":"remove","lines":["-"],"id":198}],[{"start":{"row":23,"column":18},"end":{"row":23,"column":19},"action":"insert","lines":["="],"id":199}],[{"start":{"row":23,"column":19},"end":{"row":23,"column":20},"action":"insert","lines":[" "],"id":200}],[{"start":{"row":23,"column":20},"end":{"row":23,"column":21},"action":"insert","lines":["0"],"id":201}],[{"start":{"row":23,"column":21},"end":{"row":23,"column":23},"action":"insert","lines":["()"],"id":202}],[{"start":{"row":23,"column":21},"end":{"row":23,"column":23},"action":"remove","lines":["()"],"id":203}],[{"start":{"row":23,"column":21},"end":{"row":23,"column":22},"action":"insert","lines":[")"],"id":204}],[{"start":{"row":23,"column":21},"end":{"row":23,"column":22},"action":"remove","lines":[")"],"id":205}],[{"start":{"row":23,"column":22},"end":{"row":23,"column":23},"action":"insert","lines":[";"],"id":206}],[{"start":{"row":23,"column":6},"end":{"row":23,"column":23},"action":"remove","lines":["while(turn != 0);"],"id":207}],[{"start":{"row":21,"column":19},"end":{"row":22,"column":0},"action":"insert","lines":["",""],"id":208},{"start":{"row":22,"column":0},"end":{"row":22,"column":10},"action":"insert","lines":["          "]}],[{"start":{"row":22,"column":9},"end":{"row":22,"column":10},"action":"remove","lines":[" "],"id":209}],[{"start":{"row":22,"column":8},"end":{"row":22,"column":9},"action":"remove","lines":[" "],"id":210}],[{"start":{"row":22,"column":4},"end":{"row":22,"column":8},"action":"remove","lines":["    "],"id":211}],[{"start":{"row":22,"column":4},"end":{"row":22,"column":5},"action":"insert","lines":[" "],"id":212}],[{"start":{"row":22,"column":5},"end":{"row":22,"column":6},"action":"insert","lines":[" "],"id":213}],[{"start":{"row":22,"column":6},"end":{"row":22,"column":23},"action":"insert","lines":["while(turn != 0);"],"id":214}],[{"start":{"row":30,"column":7},"end":{"row":31,"column":0},"action":"insert","lines":["",""],"id":215},{"start":{"row":31,"column":0},"end":{"row":31,"column":6},"action":"insert","lines":["      "]}],[{"start":{"row":31,"column":6},"end":{"row":40,"column":7},"action":"insert","lines":["while (TRUE){","      while(turn != 0);","      //  Beginning of the critical region","      ","      count++;","      std::cout << \"Thread #\" << actual_arg << \" count = \" << count << std::endl;","        ","      //  End of the critical region","      turn = 1;","      }"],"id":216}],[{"start":{"row":32,"column":20},"end":{"row":32,"column":21},"action":"remove","lines":["0"],"id":217}],[{"start":{"row":32,"column":20},"end":{"row":32,"column":21},"action":"insert","lines":["1"],"id":218}],[{"start":{"row":39,"column":13},"end":{"row":39,"column":14},"action":"remove","lines":["1"],"id":219}],[{"start":{"row":39,"column":13},"end":{"row":39,"column":14},"action":"insert","lines":["0"],"id":220}],[{"start":{"row":31,"column":13},"end":{"row":31,"column":17},"action":"remove","lines":["TRUE"],"id":221},{"start":{"row":31,"column":13},"end":{"row":31,"column":14},"action":"insert","lines":["1"]}],[{"start":{"row":21,"column":13},"end":{"row":21,"column":17},"action":"remove","lines":["TRUE"],"id":222},{"start":{"row":21,"column":13},"end":{"row":21,"column":14},"action":"insert","lines":["1"]}],[{"start":{"row":32,"column":3},"end":{"row":40,"column":7},"action":"remove","lines":["   while(turn != 1);","      //  Beginning of the critical region","      ","      count++;","      std::cout << \"Thread #\" << actual_arg << \" count = \" << count << std::endl;","        ","      //  End of the critical region","      turn = 0;","      }"],"id":223}],[{"start":{"row":22,"column":22},"end":{"row":22,"column":23},"action":"remove","lines":[";"],"id":224}],[{"start":{"row":22,"column":22},"end":{"row":22,"column":23},"action":"insert","lines":["{"],"id":225}],[{"start":{"row":22,"column":23},"end":{"row":22,"column":24},"action":"insert","lines":["}"],"id":226}],[{"start":{"row":31,"column":5},"end":{"row":31,"column":16},"action":"remove","lines":[" while (1){"],"id":227}],[{"start":{"row":31,"column":5},"end":{"row":32,"column":3},"action":"remove","lines":["","   "],"id":228}],[{"start":{"row":31,"column":5},"end":{"row":32,"column":6},"action":"remove","lines":["","      "],"id":229}],[{"start":{"row":22,"column":23},"end":{"row":22,"column":24},"action":"remove","lines":["}"],"id":230}],[{"start":{"row":22,"column":22},"end":{"row":22,"column":23},"action":"remove","lines":["{"],"id":231}],[{"start":{"row":22,"column":22},"end":{"row":22,"column":23},"action":"insert","lines":[";"],"id":232}],[{"start":{"row":30,"column":7},"end":{"row":31,"column":0},"action":"insert","lines":["",""],"id":233},{"start":{"row":31,"column":0},"end":{"row":31,"column":6},"action":"insert","lines":["      "]}],[{"start":{"row":31,"column":5},"end":{"row":31,"column":6},"action":"remove","lines":[" "],"id":234}],[{"start":{"row":31,"column":4},"end":{"row":31,"column":5},"action":"remove","lines":[" "],"id":235}],[{"start":{"row":31,"column":0},"end":{"row":31,"column":4},"action":"remove","lines":["    "],"id":236}],[{"start":{"row":30,"column":7},"end":{"row":31,"column":0},"action":"remove","lines":["",""],"id":237}],[{"start":{"row":30,"column":7},"end":{"row":31,"column":0},"action":"insert","lines":["",""],"id":238},{"start":{"row":31,"column":0},"end":{"row":31,"column":6},"action":"insert","lines":["      "]}],[{"start":{"row":31,"column":6},"end":{"row":40,"column":7},"action":"insert","lines":["      while (1){","      while(turn != 0);","      //  Beginning of the critical region","      ","      count++;","      std::cout << \"Thread #\" << actual_arg << \" count = \" << count << std::endl;","        ","      //  End of the critical region","      turn = 1;","      }"],"id":239}],[{"start":{"row":31,"column":8},"end":{"row":31,"column":12},"action":"remove","lines":["    "],"id":240}],[{"start":{"row":31,"column":4},"end":{"row":31,"column":8},"action":"remove","lines":["    "],"id":241}],[{"start":{"row":32,"column":20},"end":{"row":32,"column":21},"action":"remove","lines":["0"],"id":242}],[{"start":{"row":32,"column":20},"end":{"row":32,"column":21},"action":"insert","lines":["1"],"id":243}],[{"start":{"row":31,"column":3},"end":{"row":41,"column":5},"action":"remove","lines":[" while (1){","      while(turn != 1);","      //  Beginning of the critical region","      ","      count++;","      std::cout << \"Thread #\" << actual_arg << \" count = \" << count << std::endl;","        ","      //  End of the critical region","      turn = 1;","      }","     "],"id":244}],[{"start":{"row":20,"column":6},"end":{"row":20,"column":7},"action":"insert","lines":["/"],"id":245}],[{"start":{"row":20,"column":7},"end":{"row":20,"column":8},"action":"insert","lines":["/"],"id":246}],[{"start":{"row":20,"column":8},"end":{"row":20,"column":9},"action":"insert","lines":["t"],"id":247}],[{"start":{"row":20,"column":9},"end":{"row":20,"column":10},"action":"insert","lines":["h"],"id":248}],[{"start":{"row":20,"column":10},"end":{"row":20,"column":11},"action":"insert","lines":["i"],"id":249}],[{"start":{"row":20,"column":11},"end":{"row":20,"column":12},"action":"insert","lines":["o"],"id":250}],[{"start":{"row":20,"column":12},"end":{"row":20,"column":13},"action":"insert","lines":["s"],"id":251}],[{"start":{"row":20,"column":13},"end":{"row":20,"column":14},"action":"insert","lines":[" "],"id":252}],[{"start":{"row":20,"column":13},"end":{"row":20,"column":14},"action":"remove","lines":[" "],"id":253}],[{"start":{"row":20,"column":12},"end":{"row":20,"column":13},"action":"remove","lines":["s"],"id":254}],[{"start":{"row":20,"column":11},"end":{"row":20,"column":12},"action":"remove","lines":["o"],"id":255}],[{"start":{"row":20,"column":11},"end":{"row":20,"column":12},"action":"insert","lines":["s"],"id":256}],[{"start":{"row":20,"column":12},"end":{"row":20,"column":13},"action":"insert","lines":[" "],"id":257}],[{"start":{"row":20,"column":13},"end":{"row":20,"column":14},"action":"insert","lines":["d"],"id":258}],[{"start":{"row":20,"column":14},"end":{"row":20,"column":15},"action":"insert","lines":["o"],"id":259}],[{"start":{"row":20,"column":15},"end":{"row":20,"column":16},"action":"insert","lines":["e"],"id":260}],[{"start":{"row":20,"column":16},"end":{"row":20,"column":17},"action":"insert","lines":["s"],"id":261}],[{"start":{"row":20,"column":17},"end":{"row":20,"column":18},"action":"insert","lines":["n"],"id":262}],[{"start":{"row":20,"column":18},"end":{"row":20,"column":19},"action":"insert","lines":["t"],"id":263}],[{"start":{"row":20,"column":19},"end":{"row":20,"column":20},"action":"insert","lines":[" "],"id":264}],[{"start":{"row":20,"column":20},"end":{"row":20,"column":21},"action":"insert","lines":["w"],"id":265}],[{"start":{"row":20,"column":21},"end":{"row":20,"column":22},"action":"insert","lines":["o"],"id":266}],[{"start":{"row":20,"column":22},"end":{"row":20,"column":23},"action":"insert","lines":["r"],"id":267}],[{"start":{"row":20,"column":23},"end":{"row":20,"column":24},"action":"insert","lines":["k"],"id":268}],[{"start":{"row":21,"column":6},"end":{"row":21,"column":7},"action":"insert","lines":["/"],"id":269}],[{"start":{"row":21,"column":7},"end":{"row":21,"column":8},"action":"insert","lines":["/"],"id":270}]]},"ace":{"folds":[],"scrolltop":115,"scrollleft":0,"selection":{"start":{"row":21,"column":8},"end":{"row":21,"column":8},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":7,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1496332735699}