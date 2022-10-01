// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGESTATISTICSREQUEST_P_H
#define QTAWS_GETUSAGESTATISTICSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "getusagestatisticsrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetUsageStatisticsRequest;

class GetUsageStatisticsRequestPrivate : public GuardDutyRequestPrivate {

public:
    GetUsageStatisticsRequestPrivate(const GuardDutyRequest::Action action,
                                   GetUsageStatisticsRequest * const q);
    GetUsageStatisticsRequestPrivate(const GetUsageStatisticsRequestPrivate &other,
                                   GetUsageStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUsageStatisticsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
