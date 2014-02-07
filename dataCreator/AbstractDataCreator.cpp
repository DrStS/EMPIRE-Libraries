#include "AbstractDataCreator.h"
#include "mmsFunctions.h"
#include "mmsFSI.h"
#include "DataFieldFunctions.h"

using namespace std;

AbstractDataCreator::AbstractDataCreator(int _numNodes, int _numElems, int _nodesPerElem,
        double *_nodeCoors, int *_nodeNumbers, int *_elemTable, std::string function) :
        numNodes(_numNodes), numElems(_numElems), nodesPerElem(_nodesPerElem), nodeCoors(
                _nodeCoors), nodeNumbers(_nodeNumbers), elemTable(_elemTable) {

    if (function == "constant") {
        funcX = constantFunction;
        funcY = constantFunction;
        funcZ = constantFunction;
    } else if (function == "sine") {
        funcX = sinFunction;
        funcY = sinFunction;
        funcZ = sinFunction;
    } else if (function == "mmsStructureCSource") {
        funcX = mmsStructureCSourceX;
        funcY = mmsStructureCSourceY;
        funcZ = mmsStructureCSourceZ;
    } else if (function == "mmsStructureCTarget") {
        funcX = mmsStructureCTargetX;
        funcY = mmsStructureCTargetY;
        funcZ = mmsStructureCTargetZ;
    } else if (function == "mmsStructure00Source") {
        funcX = mmsStructure00SourceX;
        funcY = mmsStructure00SourceY;
        funcZ = mmsStructure00SourceZ;
    } else if (function == "mmsStructure00Target") {
        funcX = mmsStructure00TargetX;
        funcY = mmsStructure00TargetY;
        funcZ = mmsStructure00TargetZ;
    } else if (function == "mmsStructure01Source") {
        funcX = mmsStructure01SourceX;
        funcY = mmsStructure01SourceY;
        funcZ = mmsStructure01SourceZ;
    } else if (function == "mmsStructure01Target") {
        funcX = mmsStructure01TargetX;
        funcY = mmsStructure01TargetY;
        funcZ = mmsStructure01TargetZ;
    } else if (function == "mmsStructure03Source") {
        funcX = mmsStructure03SourceX;
        funcY = mmsStructure03SourceY;
        funcZ = mmsStructure03SourceZ;
    } else if (function == "mmsStructure03Target") {
        funcX = mmsStructure03TargetX;
        funcY = mmsStructure03TargetY;
        funcZ = mmsStructure03TargetZ;
    } else if (function == "mmsStructure04Source") {
        funcX = mmsStructure04SourceX;
        funcY = mmsStructure04SourceY;
        funcZ = mmsStructure04SourceZ;
    } else if (function == "mmsStructure04Target") {
        funcX = mmsStructure04TargetX;
        funcY = mmsStructure04TargetY;
        funcZ = mmsStructure04TargetZ;
    } else if (function == "mmsStructure05Source") {
        funcX = mmsStructure05SourceX;
        funcY = mmsStructure05SourceY;
        funcZ = mmsStructure05SourceZ;
    } else if (function == "mmsStructure05Target") {
        funcX = mmsStructure05TargetX;
        funcY = mmsStructure05TargetY;
        funcZ = mmsStructure05TargetZ;
    } else if (function == "mmsStructure06Source") {
        funcX = mmsStructure06SourceX;
        funcY = mmsStructure06SourceY;
        funcZ = mmsStructure06SourceZ;
    } else if (function == "mmsStructure06Target") {
        funcX = mmsStructure06TargetX;
        funcY = mmsStructure06TargetY;
        funcZ = mmsStructure06TargetZ;
    } else if (function == "mmsStructure14Source") {
        funcXT = mmsStructure14SourceX;
        funcYT = mmsStructure14SourceY;
        funcZT = mmsStructure14SourceZ;
    } else if (function == "mmsStructure14Target") {
        funcXT = mmsStructure14TargetX;
        funcYT = mmsStructure14TargetY;
        funcZT = mmsStructure14TargetZ;
    } else if (function == "mmsStructure15Source") {
        funcXT = mmsStructure15SourceX;
        funcYT = mmsStructure15SourceY;
        funcZT = mmsStructure15SourceZ;
    } else if (function == "mmsStructure15Target") {
        funcXT = mmsStructure15TargetX;
        funcYT = mmsStructure15TargetY;
        funcZT = mmsStructure15TargetZ;
    } else if (function == "mmsStructure16Source") {
        funcXT = mmsStructure16SourceX;
        funcYT = mmsStructure16SourceY;
        funcZT = mmsStructure16SourceZ;
    } else if (function == "mmsStructure16Target") {
        funcXT = mmsStructure16TargetX;
        funcYT = mmsStructure16TargetY;
        funcZT = mmsStructure16TargetZ;
    } else if (function == "mmsStructure17Source") {
        funcXT = mmsStructure17SourceX;
        funcYT = mmsStructure17SourceY;
        funcZT = mmsStructure17SourceZ;
    } else if (function == "mmsStructure17Target") {
        funcXT = mmsStructure17TargetX;
        funcYT = mmsStructure17TargetY;
        funcZT = mmsStructure17TargetZ;
    } else if (function == "mmsStructure19Source") {
        funcXT = mmsStructure19SourceX;
        funcYT = mmsStructure19SourceY;
        funcZT = mmsStructure19SourceZ;
    } else if (function == "mmsStructure19Target") {
        funcXT = mmsStructure19TargetX;
        funcYT = mmsStructure19TargetY;
        funcZT = mmsStructure19TargetZ;
    } else if (function == "mmsStructure20Source") {
        funcXT = mmsStructure20SourceX;
        funcYT = mmsStructure20SourceY;
        funcZT = mmsStructure20SourceZ;
    } else if (function == "mmsStructure20Target") {
        funcXT = mmsStructure20TargetX;
        funcYT = mmsStructure20TargetY;
        funcZT = mmsStructure20TargetZ;
    } else if (function == "mmsStructure21Source") {
        funcXT = mmsStructure21SourceX;
        funcYT = mmsStructure21SourceY;
        funcZT = mmsStructure21SourceZ;
    } else if (function == "mmsStructure21Target") {
        funcXT = mmsStructure21TargetX;
        funcYT = mmsStructure21TargetY;
        funcZT = mmsStructure21TargetZ;
    } else if (function == "mmsStructure22Source") {
        funcXT = mmsStructure22SourceX;
        funcYT = mmsStructure22SourceY;
        funcZT = mmsStructure22SourceZ;
    } else if (function == "mmsStructure22Target") {
        funcXT = mmsStructure22TargetX;
        funcYT = mmsStructure22TargetY;
        funcZT = mmsStructure22TargetZ;
    } else if (function == "mmsStructure23Source") {
        funcXT = mmsStructure23SourceX;
        funcYT = mmsStructure23SourceY;
        funcZT = mmsStructure23SourceZ;
    } else if (function == "mmsStructure23Target") {
        funcXT = mmsStructure23TargetX;
        funcYT = mmsStructure23TargetY;
        funcZT = mmsStructure23TargetZ;
    } else if (function == "mmsStructure24Source") {
        funcXT = mmsStructure24SourceX;
        funcYT = mmsStructure24SourceY;
        funcZT = mmsStructure24SourceZ;
    } else if (function == "mmsStructure24Target") {
        funcXT = mmsStructure24TargetX;
        funcYT = mmsStructure24TargetY;
        funcZT = mmsStructure24TargetZ;
    } else if (function == "mmsStructure25Source") {
        funcXT = mmsStructure25SourceX;
        funcYT = mmsStructure25SourceY;
        funcZT = mmsStructure25SourceZ;
    } else if (function == "mmsStructure25Target") {
        funcXT = mmsStructure25TargetX;
        funcYT = mmsStructure25TargetY;
        funcZT = mmsStructure25TargetZ;

    } else if (function == "mmsStructureMichl04Source") {
        funcXTV = mmsStructureMichl04SourceX;
        funcYTV = mmsStructureMichl04SourceY;
        funcZTV = mmsStructureMichl04SourceZ;
    } else if (function == "mmsStructureMichl04Target") {
        funcXTV = mmsStructureMichl04TargetX;
        funcYTV = mmsStructureMichl04TargetY;
        funcZTV = mmsStructureMichl04TargetZ;
    } else if (function == "mmsStructureMichl24Source") {
        funcXTV = mmsStructureMichl24SourceX;
        funcYTV = mmsStructureMichl24SourceY;
        funcZTV = mmsStructureMichl24SourceZ;
    } else if (function == "mmsStructureMichl24Target") {
        funcXTV = mmsStructureMichl24TargetX;
        funcYTV = mmsStructureMichl24TargetY;
        funcZTV = mmsStructureMichl24TargetZ;

    } else if (function == "mmsFsi01TargetD") {
        funcXT = mmsFsi01TargetDX;
        funcYT = mmsFsi01TargetDY;
        funcZT = mmsFsi01TargetDZ;
    } else if (function == "mmsFsi01SourceF") {
        funcXT = mmsFsi01SourceFX;
        funcYT = mmsFsi01SourceFY;
        funcZT = mmsFsi01SourceFZ;
    } else if (function == "mmsFsi01TargetF") {
        funcXT = mmsFsi01TargetFX;
        funcYT = mmsFsi01TargetFY;
        funcZT = mmsFsi01TargetFZ;
    } else if (function == "mmsFsi04TargetD") {
        funcXT = mmsFsi04TargetDX;
        funcYT = mmsFsi04TargetDY;
        funcZT = mmsFsi04TargetDZ;
    } else if (function == "mmsFsi04SourceF") {
        funcXT = mmsFsi04SourceFX;
        funcYT = mmsFsi04SourceFY;
        funcZT = mmsFsi04SourceFZ;
    } else if (function == "mmsFsi04TargetF") {
        funcXT = mmsFsi04TargetFX;
        funcYT = mmsFsi04TargetFY;
        funcZT = mmsFsi04TargetFZ;
    } else if (function == "mmsFsi05TargetD") {
        funcXT = mmsFsi05TargetDX;
        funcYT = mmsFsi05TargetDY;
        funcZT = mmsFsi05TargetDZ;
    } else if (function == "mmsFsi05SourceF") {
        funcXT = mmsFsi05SourceFX;
        funcYT = mmsFsi05SourceFY;
        funcZT = mmsFsi05SourceFZ;
    } else if (function == "mmsFsi05TargetF") {
        funcXT = mmsFsi05TargetFX;
        funcYT = mmsFsi05TargetFY;
        funcZT = mmsFsi05TargetFZ;
    } else if (function == "mmsFsi06TargetD") {
        funcXT = mmsFsi06TargetDX;
        funcYT = mmsFsi06TargetDY;
        funcZT = mmsFsi06TargetDZ;
    } else if (function == "mmsFsi06SourceF") {
        funcXT = mmsFsi06SourceFX;
        funcYT = mmsFsi06SourceFY;
        funcZT = mmsFsi06SourceFZ;
    } else if (function == "mmsFsi06TargetF") {
        funcXT = mmsFsi06TargetFX;
        funcYT = mmsFsi06TargetFY;
        funcZT = mmsFsi06TargetFZ;
    } else if (function == "mmsFsi06aTargetD") {
        funcXT = mmsFsi06aTargetDX;
        funcYT = mmsFsi06aTargetDY;
        funcZT = mmsFsi06aTargetDZ;
    } else if (function == "mmsFsi06aSourceF") {
        funcXT = mmsFsi06aSourceFX;
        funcYT = mmsFsi06aSourceFY;
        funcZT = mmsFsi06aSourceFZ;
    } else if (function == "mmsFsi06aTargetF") {
        funcXT = mmsFsi06aTargetFX;
        funcYT = mmsFsi06aTargetFY;
        funcZT = mmsFsi06aTargetFZ;
    } else if (function == "mmsFsi31TargetD") {
        funcXT = mmsFsi31TargetDX;
        funcYT = mmsFsi31TargetDY;
        funcZT = mmsFsi31TargetDZ;
    } else if (function == "mmsFsi31SourceF") {
        funcXT = mmsFsi31SourceFX;
        funcYT = mmsFsi31SourceFY;
        funcZT = mmsFsi31SourceFZ;
    } else if (function == "mmsFsi31TargetF") {
        funcXT = mmsFsi31TargetFX;
        funcYT = mmsFsi31TargetFY;
        funcZT = mmsFsi31TargetFZ;
    } else if (function == "mmsFsi32TargetD") {
        funcXT = mmsFsi32TargetDX;
        funcYT = mmsFsi32TargetDY;
        funcZT = mmsFsi32TargetDZ;
    } else if (function == "mmsFsi32SourceF") {
        funcXT = mmsFsi32SourceFX;
        funcYT = mmsFsi32SourceFY;
        funcZT = mmsFsi32SourceFZ;
    } else if (function == "mmsFsi32TargetF") {
        funcXT = mmsFsi32TargetFX;
        funcYT = mmsFsi32TargetFY;
        funcZT = mmsFsi32TargetFZ;
    } else if (function == "mmsFsi33TargetD") {
        funcXT = mmsFsi33TargetDX;
        funcYT = mmsFsi33TargetDY;
        funcZT = mmsFsi33TargetDZ;
    } else if (function == "mmsFsi33SourceF") {
        funcXT = mmsFsi33SourceFX;
        funcYT = mmsFsi33SourceFY;
        funcZT = mmsFsi33SourceFZ;
    } else if (function == "mmsFsi33TargetF") {
        funcXT = mmsFsi33TargetFX;
        funcYT = mmsFsi33TargetFY;
        funcZT = mmsFsi33TargetFZ;
    } else if (function == "mmsFsi34TargetD") {
        funcXT = mmsFsi34TargetDX;
        funcYT = mmsFsi34TargetDY;
        funcZT = mmsFsi34TargetDZ;
    } else if (function == "mmsFsi34SourceF") {
        funcXT = mmsFsi34SourceFX;
        funcYT = mmsFsi34SourceFY;
        funcZT = mmsFsi34SourceFZ;
    } else if (function == "mmsFsi34TargetF") {
        funcXT = mmsFsi34TargetFX;
        funcYT = mmsFsi34TargetFY;
        funcZT = mmsFsi34TargetFZ;
    } else if (function == "mmsFsi35TargetD") {
        funcXT = mmsFsi35TargetDX;
        funcYT = mmsFsi35TargetDY;
        funcZT = mmsFsi35TargetDZ;
    } else if (function == "mmsFsi35SourceF") {
        funcXT = mmsFsi35SourceFX;
        funcYT = mmsFsi35SourceFY;
        funcZT = mmsFsi35SourceFZ;
    } else if (function == "mmsFsi35TargetF") {
        funcXT = mmsFsi35TargetFX;
        funcYT = mmsFsi35TargetFY;
        funcZT = mmsFsi35TargetFZ;
    } else if (function == "mmsFsi51TargetD") {
        funcXT = mmsFsi51TargetDX;
        funcYT = mmsFsi51TargetDY;
        funcZT = mmsFsi51TargetDZ;
    } else if (function == "mmsFsi51SourceF") {
        funcXT = mmsFsi51SourceFX;
        funcYT = mmsFsi51SourceFY;
        funcZT = mmsFsi51SourceFZ;
    } else if (function == "mmsFsi51TargetF") {
        funcXT = mmsFsi51TargetFX;
        funcYT = mmsFsi51TargetFY;
        funcZT = mmsFsi51TargetFZ;

    } else if (function == "meshClientTurbomachinery") {
        funcX = meshClientTurbomachineryX;
        funcY = meshClientTurbomachineryY;
        funcZ = meshClientTurbomachineryZ;
        funcT = meshClientTurbomachineryT;
    } else if (function == "EmperorMapperTest_02sin2pix_001cos2pix") {
        funcX = EmperorMapperTest_02sin2pix_001cos2pix;
        funcY = EmperorMapperTest_02sin2pix_001cos2pix;
        funcZ = EmperorMapperTest_02sin2pix_001cos2pix;
    } else if (function == "EmperorMapperTest_sphere_sin4xPlus4y") {
        funcX = EmperorMapperTest_sphere_sin4xPlus4y;
        funcY = EmperorMapperTest_sphere_sin4xPlus4y;
        funcZ = EmperorMapperTest_sphere_sin4xPlus4y;
    } else if (function == "EmperorMapperTest_sphere_sin3xPlus3y") {
        funcX = EmperorMapperTest_sphere_sin3xPlus3y;
        funcY = EmperorMapperTest_sphere_sin3xPlus3y;
        funcZ = EmperorMapperTest_sphere_sin3xPlus3y;
    } else if (function == "EmperorMapperTest_sphere_sin4xy") {
        funcX = EmperorMapperTest_sphere_sin4xy;
        funcY = EmperorMapperTest_sphere_sin4xy;
        funcZ = EmperorMapperTest_sphere_sin4xy;
    } else if (function == "EmperorMapperTest_sphere_sin3xy") {
        funcX = EmperorMapperTest_sphere_sin3xy;
        funcY = EmperorMapperTest_sphere_sin3xy;
        funcZ = EmperorMapperTest_sphere_sin3xy;
    } else if (function == "EmperorMapperTest_quarterCylinder_surfaceNormal") {
        funcX = EmperorMapperTest_quarterCylinder_surfaceNormal_x;
        funcY = EmperorMapperTest_quarterCylinder_surfaceNormal_y;
        funcZ = zeroFunction;
    } else if (function == "EmperorMapperTest_bladeRotation90") {
        funcX = EmperorMapperTest_bladeRotation90_x;
        funcY = zeroFunction;
        funcZ = EmperorMapperTest_bladeRotation90_z;
    } else {
        std::cerr << std::endl << "AbstractDataCreator:: wrong function type! "
                << "function is called" << function << std::endl;
        exit(EXIT_FAILURE);
    }
}


