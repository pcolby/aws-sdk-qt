// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MONITORINSTANCESREQUEST_P_H
#define QTAWS_MONITORINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "monitorinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class MonitorInstancesRequest;

class MonitorInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    MonitorInstancesRequestPrivate(const Ec2Request::Action action,
                                   MonitorInstancesRequest * const q);
    MonitorInstancesRequestPrivate(const MonitorInstancesRequestPrivate &other,
                                   MonitorInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(MonitorInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
