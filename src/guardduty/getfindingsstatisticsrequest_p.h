// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSSTATISTICSREQUEST_P_H
#define QTAWS_GETFINDINGSSTATISTICSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "getfindingsstatisticsrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetFindingsStatisticsRequest;

class GetFindingsStatisticsRequestPrivate : public GuardDutyRequestPrivate {

public:
    GetFindingsStatisticsRequestPrivate(const GuardDutyRequest::Action action,
                                   GetFindingsStatisticsRequest * const q);
    GetFindingsStatisticsRequestPrivate(const GetFindingsStatisticsRequestPrivate &other,
                                   GetFindingsStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFindingsStatisticsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
