// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOURNEYREQUEST_P_H
#define QTAWS_UPDATEJOURNEYREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updatejourneyrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateJourneyRequest;

class UpdateJourneyRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateJourneyRequestPrivate(const PinpointRequest::Action action,
                                   UpdateJourneyRequest * const q);
    UpdateJourneyRequestPrivate(const UpdateJourneyRequestPrivate &other,
                                   UpdateJourneyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateJourneyRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
