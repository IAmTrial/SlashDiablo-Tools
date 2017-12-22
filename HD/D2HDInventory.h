/*==========================================================
* D2Ex2
* https://github.com/lolet/D2Ex2
* ==========================================================
* Copyright (c) 2011-2014 Bartosz Jankowski
* /r/SlashDiablo HD Modifications: Copyright (c) 2017 Mir Drualga
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
* ==========================================================
*/

#pragma once

#ifndef D2HDINVENTORY_H
#define D2HDINVENTORY_H

#include "../DLLmain.h"

namespace Inventory {
    void __stdcall GetBeltPos(int nIndex, int nMode, BeltBox *out, int nBox);
    void __stdcall GetBeltsTxtRecord(int nIndex, int nMode, BeltsTxt *out);
    void __stdcall GetInventorySize(int nRecord, int nScreenMode, InventorySize *pOutRect);
    void __stdcall GetInventoryGrid(int nRecord, int nScreenMode, InventoryGrid *pOut);
    void __stdcall GetInventoryField(int nRecord, int nScreenMode, InventoryLayout *pOut, int nField);
}

#endif