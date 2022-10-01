// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGAMESERVERGROUPRESPONSE_P_H
#define QTAWS_CREATEGAMESERVERGROUPRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class CreateGameServerGroupResponse;

class CreateGameServerGroupResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit CreateGameServerGroupResponsePrivate(CreateGameServerGroupResponse * const q);

    void parseCreateGameServerGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGameServerGroupResponse)
    Q_DISABLE_COPY(CreateGameServerGroupResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
