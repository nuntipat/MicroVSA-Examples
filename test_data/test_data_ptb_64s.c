#include "test_data.h"

const uint8_t test_data_sample[] = {
255,149,22,8,40,43,29,37,34,31,41,32,39,33,37,47,40,42,37,43,46,39,49,37,41,45,38,43,43,45,53,46,51,51,48,52,46,56,51,49,57,44,53,50,55,62,56,59,57,56,64,61,71,73,76,90,77,86,95,91,83,70,72,53,47,58,48,48,43,44,50,31,16,67,146,232,189,80,0,43,58,48,54,49,50,53,42,52,52,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
255,152,34,31,22,21,19,18,18,19,19,19,20,19,22,22,24,26,29,33,38,42,48,53,62,70,80,87,93,100,103,102,94,83,72,58,49,41,35,33,30,27,27,27,27,27,27,27,26,28,26,26,26,25,24,23,22,22,20,22,19,19,19,18,20,19,19,20,20,20,17,20,25,31,36,37,41,49,45,43,38,37,25,19,13,11,11,12,12,0,27,101,214,251,161,32,23,14,15,14,11,11,12,13,14,13,13,14,15,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
255,175,104,160,178,138,135,133,125,137,136,143,141,145,136,143,144,151,151,150,151,158,151,148,138,146,139,139,128,130,119,120,117,117,112,110,116,113,109,112,113,116,114,108,112,115,115,112,106,113,110,110,111,107,118,107,112,119,114,108,105,117,123,129,124,135,138,118,115,113,105,106,118,102,102,99,101,104,101,102,103,103,107,106,102,94,41,0,97,245,157,109,181,170,134,112,122,119,119,124,125,130,134,128,131,132,135,138,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
235,178,71,7,0,53,66,67,77,78,81,84,88,89,93,95,96,99,101,102,107,115,121,128,140,151,162,175,184,191,196,196,192,178,158,140,121,104,93,88,81,78,75,74,75,76,75,77,74,73,76,76,76,76,77,80,77,79,76,76,80,76,76,77,77,77,78,78,78,72,73,71,74,73,75,73,70,69,72,70,72,70,67,72,78,87,97,99,108,116,112,112,111,88,78,71,66,65,68,65,66,63,64,68,95,101,122,236,255,142,65,1,25,66,71,81,87,90,92,92,92,97,99,100,105,103,106,111,113,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
255,187,92,28,16,77,88,93,100,105,105,102,103,101,106,106,105,108,110,112,113,112,123,136,146,156,168,175,181,190,193,196,193,182,163,145,125,110,107,96,94,92,92,92,89,85,86,83,79,82,85,82,79,79,79,75,75,80,79,80,77,82,79,78,80,82,80,80,79,76,72,71,73,72,73,70,70,73,70,72,72,69,64,64,65,67,72,76,77,74,75,86,90,100,105,109,99,97,106,94,85,75,72,73,74,77,76,74,78,82,94,126,136,168,231,177,89,28,0,62,82,81,89,95,97,104,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
247,159,107,36,0,17,22,41,32,47,49,48,48,51,47,47,56,72,68,76,71,80,85,90,96,93,99,109,100,114,115,118,128,130,122,116,96,100,94,93,91,66,70,66,78,79,77,83,76,75,67,59,64,47,53,48,47,50,52,59,66,62,78,76,89,101,96,115,100,105,91,84,93,70,69,59,52,65,57,64,62,69,75,74,79,73,74,60,42,51,137,228,255,144,83,22,28,60,65,64,66,77,79,80,82,77,83,89,82,91,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
255,162,90,61,91,97,106,111,111,110,117,116,117,120,122,130,130,132,138,144,147,148,152,152,145,142,129,121,118,105,100,92,89,89,82,86,82,77,86,88,88,81,83,91,81,94,97,88,75,70,73,72,66,66,68,72,68,69,66,67,68,68,67,66,65,66,65,67,65,64,68,66,67,63,63,67,65,65,37,0,79,212,224,101,59,78,92,103,103,102,105,106,111,109,112,117,120,121,123,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
238,237,110,20,5,23,33,27,25,24,25,25,25,25,25,25,25,26,26,28,30,30,31,32,35,40,42,45,52,58,66,74,82,91,98,106,110,104,92,79,65,51,40,31,27,25,23,22,22,23,23,23,22,22,23,23,22,22,24,23,24,23,23,22,22,22,22,21,21,20,21,22,20,20,21,21,21,22,23,22,23,23,21,21,29,36,37,39,40,39,33,32,28,29,26,22,18,16,16,17,18,16,14,16,15,18,14,0,3,47,152,255,210,59,4,14,34,30,29,28,26,27,27,28,29,29,29,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
255,177,25,0,2,15,33,35,35,38,38,39,37,40,41,41,41,42,43,45,45,46,48,50,52,54,57,60,64,68,73,76,78,78,75,70,64,58,54,51,48,48,47,46,45,47,47,46,48,47,48,49,48,48,47,47,46,47,47,47,46,46,46,45,46,51,57,60,58,68,75,74,73,67,58,52,48,40,36,35,34,34,35,33,34,34,21,59,140,208,248,185,29,0,1,15,31,35,36,37,38,39,40,40,43,43,43,44,45,45,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
255,194,63,0,50,60,48,57,37,56,59,66,55,61,62,62,73,70,70,71,78,85,79,105,84,81,101,85,85,80,80,79,83,76,76,69,71,69,73,71,66,78,76,76,76,71,74,79,76,79,77,86,76,87,80,78,82,69,79,68,80,68,74,80,103,113,122,145,105,149,135,105,108,98,71,55,54,50,49,49,42,50,45,51,89,90,109,186,247,205,83,26,73,71,83,67,73,81,75,70,71,84,77,87,95,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};
const uint8_t test_data_actual[] = {
1,
0,
1,
0,
0,
1,
1,
0,
1,
1,
};
const int32_t test_data_class_score[] = {
-20,-2,
-2,-12,
-16,6,
8,-14,
0,-10,
-4,-2,
-10,4,
2,-24,
-10,-4,
-12,6,
};
