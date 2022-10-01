// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTALIASRESPONSE_P_H
#define QTAWS_CREATEBOTALIASRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotAliasResponse;

class CreateBotAliasResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit CreateBotAliasResponsePrivate(CreateBotAliasResponse * const q);

    void parseCreateBotAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBotAliasResponse)
    Q_DISABLE_COPY(CreateBotAliasResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
