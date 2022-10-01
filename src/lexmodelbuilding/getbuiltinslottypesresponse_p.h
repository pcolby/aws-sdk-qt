// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUILTINSLOTTYPESRESPONSE_P_H
#define QTAWS_GETBUILTINSLOTTYPESRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBuiltinSlotTypesResponse;

class GetBuiltinSlotTypesResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetBuiltinSlotTypesResponsePrivate(GetBuiltinSlotTypesResponse * const q);

    void parseGetBuiltinSlotTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBuiltinSlotTypesResponse)
    Q_DISABLE_COPY(GetBuiltinSlotTypesResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
