// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOURNEYREQUEST_P_H
#define QTAWS_CREATEJOURNEYREQUEST_P_H

#include "pinpointrequest_p.h"
#include "createjourneyrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateJourneyRequest;

class CreateJourneyRequestPrivate : public PinpointRequestPrivate {

public:
    CreateJourneyRequestPrivate(const PinpointRequest::Action action,
                                   CreateJourneyRequest * const q);
    CreateJourneyRequestPrivate(const CreateJourneyRequestPrivate &other,
                                   CreateJourneyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateJourneyRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
