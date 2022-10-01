// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETIMELINEEVENTREQUEST_P_H
#define QTAWS_DELETETIMELINEEVENTREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "deletetimelineeventrequest.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteTimelineEventRequest;

class DeleteTimelineEventRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    DeleteTimelineEventRequestPrivate(const SsmIncidentsRequest::Action action,
                                   DeleteTimelineEventRequest * const q);
    DeleteTimelineEventRequestPrivate(const DeleteTimelineEventRequestPrivate &other,
                                   DeleteTimelineEventRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTimelineEventRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
