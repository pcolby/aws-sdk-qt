// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTALIASRESPONSE_P_H
#define QTAWS_UPDATEBOTALIASRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateBotAliasResponse;

class UpdateBotAliasResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit UpdateBotAliasResponsePrivate(UpdateBotAliasResponse * const q);

    void parseUpdateBotAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBotAliasResponse)
    Q_DISABLE_COPY(UpdateBotAliasResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
