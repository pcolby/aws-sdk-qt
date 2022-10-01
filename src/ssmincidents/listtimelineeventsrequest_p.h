// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTIMELINEEVENTSREQUEST_P_H
#define QTAWS_LISTTIMELINEEVENTSREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "listtimelineeventsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListTimelineEventsRequest;

class ListTimelineEventsRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    ListTimelineEventsRequestPrivate(const SsmIncidentsRequest::Action action,
                                   ListTimelineEventsRequest * const q);
    ListTimelineEventsRequestPrivate(const ListTimelineEventsRequestPrivate &other,
                                   ListTimelineEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTimelineEventsRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
