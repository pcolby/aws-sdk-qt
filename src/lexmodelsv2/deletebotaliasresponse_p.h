// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTALIASRESPONSE_P_H
#define QTAWS_DELETEBOTALIASRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteBotAliasResponse;

class DeleteBotAliasResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DeleteBotAliasResponsePrivate(DeleteBotAliasResponse * const q);

    void parseDeleteBotAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBotAliasResponse)
    Q_DISABLE_COPY(DeleteBotAliasResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
