// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMONITORINGMEMBERSREQUEST_P_H
#define QTAWS_STARTMONITORINGMEMBERSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "startmonitoringmembersrequest.h"

namespace QtAws {
namespace GuardDuty {

class StartMonitoringMembersRequest;

class StartMonitoringMembersRequestPrivate : public GuardDutyRequestPrivate {

public:
    StartMonitoringMembersRequestPrivate(const GuardDutyRequest::Action action,
                                   StartMonitoringMembersRequest * const q);
    StartMonitoringMembersRequestPrivate(const StartMonitoringMembersRequestPrivate &other,
                                   StartMonitoringMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMonitoringMembersRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
