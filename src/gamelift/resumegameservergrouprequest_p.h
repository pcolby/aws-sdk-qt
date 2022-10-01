// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMEGAMESERVERGROUPREQUEST_P_H
#define QTAWS_RESUMEGAMESERVERGROUPREQUEST_P_H

#include "gameliftrequest_p.h"
#include "resumegameservergrouprequest.h"

namespace QtAws {
namespace GameLift {

class ResumeGameServerGroupRequest;

class ResumeGameServerGroupRequestPrivate : public GameLiftRequestPrivate {

public:
    ResumeGameServerGroupRequestPrivate(const GameLiftRequest::Action action,
                                   ResumeGameServerGroupRequest * const q);
    ResumeGameServerGroupRequestPrivate(const ResumeGameServerGroupRequestPrivate &other,
                                   ResumeGameServerGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResumeGameServerGroupRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
