// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLEETACTIONSREQUEST_P_H
#define QTAWS_STOPFLEETACTIONSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "stopfleetactionsrequest.h"

namespace QtAws {
namespace GameLift {

class StopFleetActionsRequest;

class StopFleetActionsRequestPrivate : public GameLiftRequestPrivate {

public:
    StopFleetActionsRequestPrivate(const GameLiftRequest::Action action,
                                   StopFleetActionsRequest * const q);
    StopFleetActionsRequestPrivate(const StopFleetActionsRequestPrivate &other,
                                   StopFleetActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopFleetActionsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
