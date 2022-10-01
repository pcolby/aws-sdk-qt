// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTLOCALESRESPONSE_P_H
#define QTAWS_LISTBOTLOCALESRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotLocalesResponse;

class ListBotLocalesResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit ListBotLocalesResponsePrivate(ListBotLocalesResponse * const q);

    void parseListBotLocalesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBotLocalesResponse)
    Q_DISABLE_COPY(ListBotLocalesResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
