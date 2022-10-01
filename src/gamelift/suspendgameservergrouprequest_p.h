// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUSPENDGAMESERVERGROUPREQUEST_P_H
#define QTAWS_SUSPENDGAMESERVERGROUPREQUEST_P_H

#include "gameliftrequest_p.h"
#include "suspendgameservergrouprequest.h"

namespace QtAws {
namespace GameLift {

class SuspendGameServerGroupRequest;

class SuspendGameServerGroupRequestPrivate : public GameLiftRequestPrivate {

public:
    SuspendGameServerGroupRequestPrivate(const GameLiftRequest::Action action,
                                   SuspendGameServerGroupRequest * const q);
    SuspendGameServerGroupRequestPrivate(const SuspendGameServerGroupRequestPrivate &other,
                                   SuspendGameServerGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(SuspendGameServerGroupRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
