// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEINSTANCESREQUEST_P_H
#define QTAWS_TERMINATEINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "terminateinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class TerminateInstancesRequest;

class TerminateInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    TerminateInstancesRequestPrivate(const Ec2Request::Action action,
                                   TerminateInstancesRequest * const q);
    TerminateInstancesRequestPrivate(const TerminateInstancesRequestPrivate &other,
                                   TerminateInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(TerminateInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
