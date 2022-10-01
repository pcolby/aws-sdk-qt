// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUSINESSREPORTSCHEDULEREQUEST_P_H
#define QTAWS_CREATEBUSINESSREPORTSCHEDULEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "createbusinessreportschedulerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateBusinessReportScheduleRequest;

class CreateBusinessReportScheduleRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    CreateBusinessReportScheduleRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   CreateBusinessReportScheduleRequest * const q);
    CreateBusinessReportScheduleRequestPrivate(const CreateBusinessReportScheduleRequestPrivate &other,
                                   CreateBusinessReportScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBusinessReportScheduleRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
