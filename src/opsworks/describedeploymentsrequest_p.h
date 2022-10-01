// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEPLOYMENTSREQUEST_P_H
#define QTAWS_DESCRIBEDEPLOYMENTSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describedeploymentsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeDeploymentsRequest;

class DescribeDeploymentsRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeDeploymentsRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeDeploymentsRequest * const q);
    DescribeDeploymentsRequestPrivate(const DescribeDeploymentsRequestPrivate &other,
                                   DescribeDeploymentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDeploymentsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
