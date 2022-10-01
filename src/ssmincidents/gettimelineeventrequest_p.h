// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTIMELINEEVENTREQUEST_P_H
#define QTAWS_GETTIMELINEEVENTREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "gettimelineeventrequest.h"

namespace QtAws {
namespace SsmIncidents {

class GetTimelineEventRequest;

class GetTimelineEventRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    GetTimelineEventRequestPrivate(const SsmIncidentsRequest::Action action,
                                   GetTimelineEventRequest * const q);
    GetTimelineEventRequestPrivate(const GetTimelineEventRequestPrivate &other,
                                   GetTimelineEventRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTimelineEventRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
