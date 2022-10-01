// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCESREQUEST_P_H
#define QTAWS_STARTINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "startinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class StartInstancesRequest;

class StartInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    StartInstancesRequestPrivate(const Ec2Request::Action action,
                                   StartInstancesRequest * const q);
    StartInstancesRequestPrivate(const StartInstancesRequestPrivate &other,
                                   StartInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
