// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLOTTYPEVERSIONRESPONSE_P_H
#define QTAWS_CREATESLOTTYPEVERSIONRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class CreateSlotTypeVersionResponse;

class CreateSlotTypeVersionResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit CreateSlotTypeVersionResponsePrivate(CreateSlotTypeVersionResponse * const q);

    void parseCreateSlotTypeVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSlotTypeVersionResponse)
    Q_DISABLE_COPY(CreateSlotTypeVersionResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
