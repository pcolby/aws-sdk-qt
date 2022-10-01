// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETIMELINEEVENTREQUEST_P_H
#define QTAWS_CREATETIMELINEEVENTREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "createtimelineeventrequest.h"

namespace QtAws {
namespace SsmIncidents {

class CreateTimelineEventRequest;

class CreateTimelineEventRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    CreateTimelineEventRequestPrivate(const SsmIncidentsRequest::Action action,
                                   CreateTimelineEventRequest * const q);
    CreateTimelineEventRequestPrivate(const CreateTimelineEventRequestPrivate &other,
                                   CreateTimelineEventRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTimelineEventRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
