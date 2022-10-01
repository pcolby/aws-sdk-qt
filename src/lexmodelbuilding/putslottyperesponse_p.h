// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSLOTTYPERESPONSE_P_H
#define QTAWS_PUTSLOTTYPERESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class PutSlotTypeResponse;

class PutSlotTypeResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit PutSlotTypeResponsePrivate(PutSlotTypeResponse * const q);

    void parsePutSlotTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutSlotTypeResponse)
    Q_DISABLE_COPY(PutSlotTypeResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
