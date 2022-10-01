// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFLEETACTIONSREQUEST_P_H
#define QTAWS_STARTFLEETACTIONSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "startfleetactionsrequest.h"

namespace QtAws {
namespace GameLift {

class StartFleetActionsRequest;

class StartFleetActionsRequestPrivate : public GameLiftRequestPrivate {

public:
    StartFleetActionsRequestPrivate(const GameLiftRequest::Action action,
                                   StartFleetActionsRequest * const q);
    StartFleetActionsRequestPrivate(const StartFleetActionsRequestPrivate &other,
                                   StartFleetActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartFleetActionsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
