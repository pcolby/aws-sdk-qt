// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMGAMESERVERREQUEST_P_H
#define QTAWS_CLAIMGAMESERVERREQUEST_P_H

#include "gameliftrequest_p.h"
#include "claimgameserverrequest.h"

namespace QtAws {
namespace GameLift {

class ClaimGameServerRequest;

class ClaimGameServerRequestPrivate : public GameLiftRequestPrivate {

public:
    ClaimGameServerRequestPrivate(const GameLiftRequest::Action action,
                                   ClaimGameServerRequest * const q);
    ClaimGameServerRequestPrivate(const ClaimGameServerRequestPrivate &other,
                                   ClaimGameServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(ClaimGameServerRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
