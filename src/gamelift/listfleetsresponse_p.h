// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLEETSRESPONSE_P_H
#define QTAWS_LISTFLEETSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class ListFleetsResponse;

class ListFleetsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit ListFleetsResponsePrivate(ListFleetsResponse * const q);

    void parseListFleetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFleetsResponse)
    Q_DISABLE_COPY(ListFleetsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
