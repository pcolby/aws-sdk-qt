// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRACKERCONSUMERREQUEST_P_H
#define QTAWS_ASSOCIATETRACKERCONSUMERREQUEST_P_H

#include "locationrequest_p.h"
#include "associatetrackerconsumerrequest.h"

namespace QtAws {
namespace Location {

class AssociateTrackerConsumerRequest;

class AssociateTrackerConsumerRequestPrivate : public LocationRequestPrivate {

public:
    AssociateTrackerConsumerRequestPrivate(const LocationRequest::Action action,
                                   AssociateTrackerConsumerRequest * const q);
    AssociateTrackerConsumerRequestPrivate(const AssociateTrackerConsumerRequestPrivate &other,
                                   AssociateTrackerConsumerRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateTrackerConsumerRequest)

};

} // namespace Location
} // namespace QtAws

#endif
