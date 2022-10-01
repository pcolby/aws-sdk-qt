// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINTENTSRESPONSE_P_H
#define QTAWS_LISTINTENTSRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class ListIntentsResponse;

class ListIntentsResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit ListIntentsResponsePrivate(ListIntentsResponse * const q);

    void parseListIntentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIntentsResponse)
    Q_DISABLE_COPY(ListIntentsResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
