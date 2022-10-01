// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCESREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describeinstancesrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeInstancesRequest;

class DescribeInstancesRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeInstancesRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeInstancesRequest * const q);
    DescribeInstancesRequestPrivate(const DescribeInstancesRequestPrivate &other,
                                   DescribeInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstancesRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
