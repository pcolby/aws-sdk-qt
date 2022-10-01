// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGAMESESSIONQUEUEREQUEST_P_H
#define QTAWS_DELETEGAMESESSIONQUEUEREQUEST_P_H

#include "gameliftrequest_p.h"
#include "deletegamesessionqueuerequest.h"

namespace QtAws {
namespace GameLift {

class DeleteGameSessionQueueRequest;

class DeleteGameSessionQueueRequestPrivate : public GameLiftRequestPrivate {

public:
    DeleteGameSessionQueueRequestPrivate(const GameLiftRequest::Action action,
                                   DeleteGameSessionQueueRequest * const q);
    DeleteGameSessionQueueRequestPrivate(const DeleteGameSessionQueueRequestPrivate &other,
                                   DeleteGameSessionQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGameSessionQueueRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
