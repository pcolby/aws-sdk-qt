// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUSINESSREPORTSCHEDULEREQUEST_P_H
#define QTAWS_DELETEBUSINESSREPORTSCHEDULEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "deletebusinessreportschedulerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteBusinessReportScheduleRequest;

class DeleteBusinessReportScheduleRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DeleteBusinessReportScheduleRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DeleteBusinessReportScheduleRequest * const q);
    DeleteBusinessReportScheduleRequestPrivate(const DeleteBusinessReportScheduleRequestPrivate &other,
                                   DeleteBusinessReportScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBusinessReportScheduleRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
