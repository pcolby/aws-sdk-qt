// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESESSIONQUEUEREQUEST_P_H
#define QTAWS_UPDATEGAMESESSIONQUEUEREQUEST_P_H

#include "gameliftrequest_p.h"
#include "updategamesessionqueuerequest.h"

namespace QtAws {
namespace GameLift {

class UpdateGameSessionQueueRequest;

class UpdateGameSessionQueueRequestPrivate : public GameLiftRequestPrivate {

public:
    UpdateGameSessionQueueRequestPrivate(const GameLiftRequest::Action action,
                                   UpdateGameSessionQueueRequest * const q);
    UpdateGameSessionQueueRequestPrivate(const UpdateGameSessionQueueRequestPrivate &other,
                                   UpdateGameSessionQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGameSessionQueueRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
