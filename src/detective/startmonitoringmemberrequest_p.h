// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMONITORINGMEMBERREQUEST_P_H
#define QTAWS_STARTMONITORINGMEMBERREQUEST_P_H

#include "detectiverequest_p.h"
#include "startmonitoringmemberrequest.h"

namespace QtAws {
namespace Detective {

class StartMonitoringMemberRequest;

class StartMonitoringMemberRequestPrivate : public DetectiveRequestPrivate {

public:
    StartMonitoringMemberRequestPrivate(const DetectiveRequest::Action action,
                                   StartMonitoringMemberRequest * const q);
    StartMonitoringMemberRequestPrivate(const StartMonitoringMemberRequestPrivate &other,
                                   StartMonitoringMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMonitoringMemberRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
