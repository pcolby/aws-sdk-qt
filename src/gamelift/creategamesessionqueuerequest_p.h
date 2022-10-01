// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGAMESESSIONQUEUEREQUEST_P_H
#define QTAWS_CREATEGAMESESSIONQUEUEREQUEST_P_H

#include "gameliftrequest_p.h"
#include "creategamesessionqueuerequest.h"

namespace QtAws {
namespace GameLift {

class CreateGameSessionQueueRequest;

class CreateGameSessionQueueRequestPrivate : public GameLiftRequestPrivate {

public:
    CreateGameSessionQueueRequestPrivate(const GameLiftRequest::Action action,
                                   CreateGameSessionQueueRequest * const q);
    CreateGameSessionQueueRequestPrivate(const CreateGameSessionQueueRequestPrivate &other,
                                   CreateGameSessionQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGameSessionQueueRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
