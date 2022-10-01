// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYREQUEST_P_H
#define QTAWS_GETJOURNEYREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getjourneyrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyRequest;

class GetJourneyRequestPrivate : public PinpointRequestPrivate {

public:
    GetJourneyRequestPrivate(const PinpointRequest::Action action,
                                   GetJourneyRequest * const q);
    GetJourneyRequestPrivate(const GetJourneyRequestPrivate &other,
                                   GetJourneyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJourneyRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
