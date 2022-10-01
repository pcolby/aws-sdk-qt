// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGAMESERVERGROUPRESPONSE_P_H
#define QTAWS_DELETEGAMESERVERGROUPRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DeleteGameServerGroupResponse;

class DeleteGameServerGroupResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DeleteGameServerGroupResponsePrivate(DeleteGameServerGroupResponse * const q);

    void parseDeleteGameServerGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGameServerGroupResponse)
    Q_DISABLE_COPY(DeleteGameServerGroupResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
