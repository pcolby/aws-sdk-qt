// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTALIASESRESPONSE_P_H
#define QTAWS_LISTBOTALIASESRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotAliasesResponse;

class ListBotAliasesResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit ListBotAliasesResponsePrivate(ListBotAliasesResponse * const q);

    void parseListBotAliasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBotAliasesResponse)
    Q_DISABLE_COPY(ListBotAliasesResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
