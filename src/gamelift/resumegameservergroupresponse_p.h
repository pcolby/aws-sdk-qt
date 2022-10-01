// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMEGAMESERVERGROUPRESPONSE_P_H
#define QTAWS_RESUMEGAMESERVERGROUPRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class ResumeGameServerGroupResponse;

class ResumeGameServerGroupResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit ResumeGameServerGroupResponsePrivate(ResumeGameServerGroupResponse * const q);

    void parseResumeGameServerGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResumeGameServerGroupResponse)
    Q_DISABLE_COPY(ResumeGameServerGroupResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
