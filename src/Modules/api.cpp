#include "Utils/SerialPrint.h"
//объявляем функцию для добавления модуля в вектор
void getApiIoTSensorDallasTemp();

//формируем вектор модулей путем вызова из каждого модуля специальной функции
//в дальнейшем предполагается отключать вызов, если модуль не участвует в сборке
void InitModulesApi() {
    getApiIoTSensorDallasTemp();
}