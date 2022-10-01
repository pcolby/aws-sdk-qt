// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSLOTTYPESRESPONSE_P_H
#define QTAWS_GETSLOTTYPESRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetSlotTypesResponse;

class GetSlotTypesResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetSlotTypesResponsePrivate(GetSlotTypesResponse * const q);

    void parseGetSlotTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSlotTypesResponse)
    Q_DISABLE_COPY(GetSlotTypesResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
