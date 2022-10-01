// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSLOTTYPEVERSIONSRESPONSE_P_H
#define QTAWS_GETSLOTTYPEVERSIONSRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetSlotTypeVersionsResponse;

class GetSlotTypeVersionsResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetSlotTypeVersionsResponsePrivate(GetSlotTypeVersionsResponse * const q);

    void parseGetSlotTypeVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSlotTypeVersionsResponse)
    Q_DISABLE_COPY(GetSlotTypeVersionsResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
