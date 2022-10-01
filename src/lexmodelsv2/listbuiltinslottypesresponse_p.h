// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILTINSLOTTYPESRESPONSE_P_H
#define QTAWS_LISTBUILTINSLOTTYPESRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBuiltInSlotTypesResponse;

class ListBuiltInSlotTypesResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit ListBuiltInSlotTypesResponsePrivate(ListBuiltInSlotTypesResponse * const q);

    void parseListBuiltInSlotTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBuiltInSlotTypesResponse)
    Q_DISABLE_COPY(ListBuiltInSlotTypesResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
