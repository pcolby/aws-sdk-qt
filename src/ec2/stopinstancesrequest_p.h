// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINSTANCESREQUEST_P_H
#define QTAWS_STOPINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "stopinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class StopInstancesRequest;

class StopInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    StopInstancesRequestPrivate(const Ec2Request::Action action,
                                   StopInstancesRequest * const q);
    StopInstancesRequestPrivate(const StopInstancesRequestPrivate &other,
                                   StopInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
