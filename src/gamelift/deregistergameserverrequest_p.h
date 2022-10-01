// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERGAMESERVERREQUEST_P_H
#define QTAWS_DEREGISTERGAMESERVERREQUEST_P_H

#include "gameliftrequest_p.h"
#include "deregistergameserverrequest.h"

namespace QtAws {
namespace GameLift {

class DeregisterGameServerRequest;

class DeregisterGameServerRequestPrivate : public GameLiftRequestPrivate {

public:
    DeregisterGameServerRequestPrivate(const GameLiftRequest::Action action,
                                   DeregisterGameServerRequest * const q);
    DeregisterGameServerRequestPrivate(const DeregisterGameServerRequestPrivate &other,
                                   DeregisterGameServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterGameServerRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
