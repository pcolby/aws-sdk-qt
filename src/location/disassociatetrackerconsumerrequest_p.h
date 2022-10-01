// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRACKERCONSUMERREQUEST_P_H
#define QTAWS_DISASSOCIATETRACKERCONSUMERREQUEST_P_H

#include "locationrequest_p.h"
#include "disassociatetrackerconsumerrequest.h"

namespace QtAws {
namespace Location {

class DisassociateTrackerConsumerRequest;

class DisassociateTrackerConsumerRequestPrivate : public LocationRequestPrivate {

public:
    DisassociateTrackerConsumerRequestPrivate(const LocationRequest::Action action,
                                   DisassociateTrackerConsumerRequest * const q);
    DisassociateTrackerConsumerRequestPrivate(const DisassociateTrackerConsumerRequestPrivate &other,
                                   DisassociateTrackerConsumerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateTrackerConsumerRequest)

};

} // namespace Location
} // namespace QtAws

#endif
