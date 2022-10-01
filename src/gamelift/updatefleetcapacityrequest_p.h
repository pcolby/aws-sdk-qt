// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETCAPACITYREQUEST_P_H
#define QTAWS_UPDATEFLEETCAPACITYREQUEST_P_H

#include "gameliftrequest_p.h"
#include "updatefleetcapacityrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateFleetCapacityRequest;

class UpdateFleetCapacityRequestPrivate : public GameLiftRequestPrivate {

public:
    UpdateFleetCapacityRequestPrivate(const GameLiftRequest::Action action,
                                   UpdateFleetCapacityRequest * const q);
    UpdateFleetCapacityRequestPrivate(const UpdateFleetCapacityRequestPrivate &other,
                                   UpdateFleetCapacityRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFleetCapacityRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
