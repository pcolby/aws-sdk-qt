// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMATCHMAKINGREQUEST_P_H
#define QTAWS_STOPMATCHMAKINGREQUEST_P_H

#include "gameliftrequest_p.h"
#include "stopmatchmakingrequest.h"

namespace QtAws {
namespace GameLift {

class StopMatchmakingRequest;

class StopMatchmakingRequestPrivate : public GameLiftRequestPrivate {

public:
    StopMatchmakingRequestPrivate(const GameLiftRequest::Action action,
                                   StopMatchmakingRequest * const q);
    StopMatchmakingRequestPrivate(const StopMatchmakingRequestPrivate &other,
                                   StopMatchmakingRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopMatchmakingRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
