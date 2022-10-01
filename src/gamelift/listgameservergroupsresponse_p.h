// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGAMESERVERGROUPSRESPONSE_P_H
#define QTAWS_LISTGAMESERVERGROUPSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class ListGameServerGroupsResponse;

class ListGameServerGroupsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit ListGameServerGroupsResponsePrivate(ListGameServerGroupsResponse * const q);

    void parseListGameServerGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGameServerGroupsResponse)
    Q_DISABLE_COPY(ListGameServerGroupsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
