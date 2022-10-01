// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPORTINSTANCESTATUSREQUEST_P_H
#define QTAWS_REPORTINSTANCESTATUSREQUEST_P_H

#include "ec2request_p.h"
#include "reportinstancestatusrequest.h"

namespace QtAws {
namespace Ec2 {

class ReportInstanceStatusRequest;

class ReportInstanceStatusRequestPrivate : public Ec2RequestPrivate {

public:
    ReportInstanceStatusRequestPrivate(const Ec2Request::Action action,
                                   ReportInstanceStatusRequest * const q);
    ReportInstanceStatusRequestPrivate(const ReportInstanceStatusRequestPrivate &other,
                                   ReportInstanceStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReportInstanceStatusRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
