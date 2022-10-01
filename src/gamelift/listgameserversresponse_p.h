// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGAMESERVERSRESPONSE_P_H
#define QTAWS_LISTGAMESERVERSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class ListGameServersResponse;

class ListGameServersResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit ListGameServersResponsePrivate(ListGameServersResponse * const q);

    void parseListGameServersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGameServersResponse)
    Q_DISABLE_COPY(ListGameServersResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
