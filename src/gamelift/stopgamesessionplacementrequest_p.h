// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPGAMESESSIONPLACEMENTREQUEST_P_H
#define QTAWS_STOPGAMESESSIONPLACEMENTREQUEST_P_H

#include "gameliftrequest_p.h"
#include "stopgamesessionplacementrequest.h"

namespace QtAws {
namespace GameLift {

class StopGameSessionPlacementRequest;

class StopGameSessionPlacementRequestPrivate : public GameLiftRequestPrivate {

public:
    StopGameSessionPlacementRequestPrivate(const GameLiftRequest::Action action,
                                   StopGameSessionPlacementRequest * const q);
    StopGameSessionPlacementRequestPrivate(const StopGameSessionPlacementRequestPrivate &other,
                                   StopGameSessionPlacementRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopGameSessionPlacementRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
