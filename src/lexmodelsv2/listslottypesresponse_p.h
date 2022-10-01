// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLOTTYPESRESPONSE_P_H
#define QTAWS_LISTSLOTTYPESRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class ListSlotTypesResponse;

class ListSlotTypesResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit ListSlotTypesResponsePrivate(ListSlotTypesResponse * const q);

    void parseListSlotTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSlotTypesResponse)
    Q_DISABLE_COPY(ListSlotTypesResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
