// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOURNEYREQUEST_P_H
#define QTAWS_DELETEJOURNEYREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deletejourneyrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteJourneyRequest;

class DeleteJourneyRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteJourneyRequestPrivate(const PinpointRequest::Action action,
                                   DeleteJourneyRequest * const q);
    DeleteJourneyRequestPrivate(const DeleteJourneyRequestPrivate &other,
                                   DeleteJourneyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteJourneyRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
