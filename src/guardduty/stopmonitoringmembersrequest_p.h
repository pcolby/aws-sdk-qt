// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMONITORINGMEMBERSREQUEST_P_H
#define QTAWS_STOPMONITORINGMEMBERSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "stopmonitoringmembersrequest.h"

namespace QtAws {
namespace GuardDuty {

class StopMonitoringMembersRequest;

class StopMonitoringMembersRequestPrivate : public GuardDutyRequestPrivate {

public:
    StopMonitoringMembersRequestPrivate(const GuardDutyRequest::Action action,
                                   StopMonitoringMembersRequest * const q);
    StopMonitoringMembersRequestPrivate(const StopMonitoringMembersRequestPrivate &other,
                                   StopMonitoringMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopMonitoringMembersRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
