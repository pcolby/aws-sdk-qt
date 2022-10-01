// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRACKERCONSUMERSREQUEST_P_H
#define QTAWS_LISTTRACKERCONSUMERSREQUEST_P_H

#include "locationrequest_p.h"
#include "listtrackerconsumersrequest.h"

namespace QtAws {
namespace Location {

class ListTrackerConsumersRequest;

class ListTrackerConsumersRequestPrivate : public LocationRequestPrivate {

public:
    ListTrackerConsumersRequestPrivate(const LocationRequest::Action action,
                                   ListTrackerConsumersRequest * const q);
    ListTrackerConsumersRequestPrivate(const ListTrackerConsumersRequestPrivate &other,
                                   ListTrackerConsumersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrackerConsumersRequest)

};

} // namespace Location
} // namespace QtAws

#endif
