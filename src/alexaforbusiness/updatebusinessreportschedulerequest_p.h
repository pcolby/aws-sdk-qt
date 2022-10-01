// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUSINESSREPORTSCHEDULEREQUEST_P_H
#define QTAWS_UPDATEBUSINESSREPORTSCHEDULEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "updatebusinessreportschedulerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateBusinessReportScheduleRequest;

class UpdateBusinessReportScheduleRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    UpdateBusinessReportScheduleRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   UpdateBusinessReportScheduleRequest * const q);
    UpdateBusinessReportScheduleRequestPrivate(const UpdateBusinessReportScheduleRequestPrivate &other,
                                   UpdateBusinessReportScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBusinessReportScheduleRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
