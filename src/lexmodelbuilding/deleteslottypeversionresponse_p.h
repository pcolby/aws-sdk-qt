// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLOTTYPEVERSIONRESPONSE_P_H
#define QTAWS_DELETESLOTTYPEVERSIONRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteSlotTypeVersionResponse;

class DeleteSlotTypeVersionResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit DeleteSlotTypeVersionResponsePrivate(DeleteSlotTypeVersionResponse * const q);

    void parseDeleteSlotTypeVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSlotTypeVersionResponse)
    Q_DISABLE_COPY(DeleteSlotTypeVersionResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
