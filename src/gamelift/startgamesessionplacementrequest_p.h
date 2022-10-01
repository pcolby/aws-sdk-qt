// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTGAMESESSIONPLACEMENTREQUEST_P_H
#define QTAWS_STARTGAMESESSIONPLACEMENTREQUEST_P_H

#include "gameliftrequest_p.h"
#include "startgamesessionplacementrequest.h"

namespace QtAws {
namespace GameLift {

class StartGameSessionPlacementRequest;

class StartGameSessionPlacementRequestPrivate : public GameLiftRequestPrivate {

public:
    StartGameSessionPlacementRequestPrivate(const GameLiftRequest::Action action,
                                   StartGameSessionPlacementRequest * const q);
    StartGameSessionPlacementRequestPrivate(const StartGameSessionPlacementRequestPrivate &other,
                                   StartGameSessionPlacementRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartGameSessionPlacementRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
