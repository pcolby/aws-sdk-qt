// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNINSTANCESREQUEST_P_H
#define QTAWS_RUNINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "runinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class RunInstancesRequest;

class RunInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    RunInstancesRequestPrivate(const Ec2Request::Action action,
                                   RunInstancesRequest * const q);
    RunInstancesRequestPrivate(const RunInstancesRequestPrivate &other,
                                   RunInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RunInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
