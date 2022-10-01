// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOVERYINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBERECOVERYINSTANCESREQUEST_P_H

#include "drsrequest_p.h"
#include "describerecoveryinstancesrequest.h"

namespace QtAws {
namespace Drs {

class DescribeRecoveryInstancesRequest;

class DescribeRecoveryInstancesRequestPrivate : public DrsRequestPrivate {

public:
    DescribeRecoveryInstancesRequestPrivate(const DrsRequest::Action action,
                                   DescribeRecoveryInstancesRequest * const q);
    DescribeRecoveryInstancesRequestPrivate(const DescribeRecoveryInstancesRequestPrivate &other,
                                   DescribeRecoveryInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRecoveryInstancesRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
