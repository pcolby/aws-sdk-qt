// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTINSTANCESREQUEST_P_H
#define QTAWS_REBOOTINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "rebootinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class RebootInstancesRequest;

class RebootInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    RebootInstancesRequestPrivate(const Ec2Request::Action action,
                                   RebootInstancesRequest * const q);
    RebootInstancesRequestPrivate(const RebootInstancesRequestPrivate &other,
                                   RebootInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebootInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
