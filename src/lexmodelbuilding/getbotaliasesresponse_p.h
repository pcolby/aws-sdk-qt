// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTALIASESRESPONSE_P_H
#define QTAWS_GETBOTALIASESRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotAliasesResponse;

class GetBotAliasesResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetBotAliasesResponsePrivate(GetBotAliasesResponse * const q);

    void parseGetBotAliasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBotAliasesResponse)
    Q_DISABLE_COPY(GetBotAliasesResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
