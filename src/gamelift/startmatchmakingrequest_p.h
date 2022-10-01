// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMATCHMAKINGREQUEST_P_H
#define QTAWS_STARTMATCHMAKINGREQUEST_P_H

#include "gameliftrequest_p.h"
#include "startmatchmakingrequest.h"

namespace QtAws {
namespace GameLift {

class StartMatchmakingRequest;

class StartMatchmakingRequestPrivate : public GameLiftRequestPrivate {

public:
    StartMatchmakingRequestPrivate(const GameLiftRequest::Action action,
                                   StartMatchmakingRequest * const q);
    StartMatchmakingRequestPrivate(const StartMatchmakingRequestPrivate &other,
                                   StartMatchmakingRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMatchmakingRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
