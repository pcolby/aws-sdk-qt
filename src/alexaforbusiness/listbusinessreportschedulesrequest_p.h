// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUSINESSREPORTSCHEDULESREQUEST_P_H
#define QTAWS_LISTBUSINESSREPORTSCHEDULESREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "listbusinessreportschedulesrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListBusinessReportSchedulesRequest;

class ListBusinessReportSchedulesRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    ListBusinessReportSchedulesRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   ListBusinessReportSchedulesRequest * const q);
    ListBusinessReportSchedulesRequestPrivate(const ListBusinessReportSchedulesRequestPrivate &other,
                                   ListBusinessReportSchedulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBusinessReportSchedulesRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
