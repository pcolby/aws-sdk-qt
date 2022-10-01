// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALIASESRESPONSE_P_H
#define QTAWS_LISTALIASESRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class ListAliasesResponse;

class ListAliasesResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit ListAliasesResponsePrivate(ListAliasesResponse * const q);

    void parseListAliasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAliasesResponse)
    Q_DISABLE_COPY(ListAliasesResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
