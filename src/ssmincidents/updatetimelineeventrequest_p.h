// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETIMELINEEVENTREQUEST_P_H
#define QTAWS_UPDATETIMELINEEVENTREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "updatetimelineeventrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateTimelineEventRequest;

class UpdateTimelineEventRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    UpdateTimelineEventRequestPrivate(const SsmIncidentsRequest::Action action,
                                   UpdateTimelineEventRequest * const q);
    UpdateTimelineEventRequestPrivate(const UpdateTimelineEventRequestPrivate &other,
                                   UpdateTimelineEventRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTimelineEventRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
