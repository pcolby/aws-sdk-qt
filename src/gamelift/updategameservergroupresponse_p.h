// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESERVERGROUPRESPONSE_P_H
#define QTAWS_UPDATEGAMESERVERGROUPRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class UpdateGameServerGroupResponse;

class UpdateGameServerGroupResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit UpdateGameServerGroupResponsePrivate(UpdateGameServerGroupResponse * const q);

    void parseUpdateGameServerGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGameServerGroupResponse)
    Q_DISABLE_COPY(UpdateGameServerGroupResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
