// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUSPENDGAMESERVERGROUPRESPONSE_P_H
#define QTAWS_SUSPENDGAMESERVERGROUPRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class SuspendGameServerGroupResponse;

class SuspendGameServerGroupResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit SuspendGameServerGroupResponsePrivate(SuspendGameServerGroupResponse * const q);

    void parseSuspendGameServerGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SuspendGameServerGroupResponse)
    Q_DISABLE_COPY(SuspendGameServerGroupResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
