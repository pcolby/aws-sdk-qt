// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOURNEYSTATEREQUEST_P_H
#define QTAWS_UPDATEJOURNEYSTATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updatejourneystaterequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateJourneyStateRequest;

class UpdateJourneyStateRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateJourneyStateRequestPrivate(const PinpointRequest::Action action,
                                   UpdateJourneyStateRequest * const q);
    UpdateJourneyStateRequestPrivate(const UpdateJourneyStateRequestPrivate &other,
                                   UpdateJourneyStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateJourneyStateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
