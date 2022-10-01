// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTVERSIONSRESPONSE_P_H
#define QTAWS_LISTBOTVERSIONSRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotVersionsResponse;

class ListBotVersionsResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit ListBotVersionsResponsePrivate(ListBotVersionsResponse * const q);

    void parseListBotVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBotVersionsResponse)
    Q_DISABLE_COPY(ListBotVersionsResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
