// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILTININTENTSRESPONSE_P_H
#define QTAWS_LISTBUILTININTENTSRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBuiltInIntentsResponse;

class ListBuiltInIntentsResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit ListBuiltInIntentsResponsePrivate(ListBuiltInIntentsResponse * const q);

    void parseListBuiltInIntentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBuiltInIntentsResponse)
    Q_DISABLE_COPY(ListBuiltInIntentsResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
