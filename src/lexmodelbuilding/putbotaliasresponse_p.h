// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBOTALIASRESPONSE_P_H
#define QTAWS_PUTBOTALIASRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class PutBotAliasResponse;

class PutBotAliasResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit PutBotAliasResponsePrivate(PutBotAliasResponse * const q);

    void parsePutBotAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBotAliasResponse)
    Q_DISABLE_COPY(PutBotAliasResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
