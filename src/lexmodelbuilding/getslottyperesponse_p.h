// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSLOTTYPERESPONSE_P_H
#define QTAWS_GETSLOTTYPERESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetSlotTypeResponse;

class GetSlotTypeResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetSlotTypeResponsePrivate(GetSlotTypeResponse * const q);

    void parseGetSlotTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSlotTypeResponse)
    Q_DISABLE_COPY(GetSlotTypeResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
