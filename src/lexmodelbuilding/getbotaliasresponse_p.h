// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTALIASRESPONSE_P_H
#define QTAWS_GETBOTALIASRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotAliasResponse;

class GetBotAliasResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetBotAliasResponsePrivate(GetBotAliasResponse * const q);

    void parseGetBotAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBotAliasResponse)
    Q_DISABLE_COPY(GetBotAliasResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
