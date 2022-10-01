// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBEDBCLUSTERPARAMETERSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedbclusterparametersrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterParametersRequest;

class DescribeDBClusterParametersRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBClusterParametersRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBClusterParametersRequest * const q);
    DescribeDBClusterParametersRequestPrivate(const DescribeDBClusterParametersRequestPrivate &other,
                                   DescribeDBClusterParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterParametersRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
