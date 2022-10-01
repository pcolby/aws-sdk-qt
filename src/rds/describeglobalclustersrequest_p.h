// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALCLUSTERSREQUEST_P_H
#define QTAWS_DESCRIBEGLOBALCLUSTERSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describeglobalclustersrequest.h"

namespace QtAws {
namespace Rds {

class DescribeGlobalClustersRequest;

class DescribeGlobalClustersRequestPrivate : public RdsRequestPrivate {

public:
    DescribeGlobalClustersRequestPrivate(const RdsRequest::Action action,
                                   DescribeGlobalClustersRequest * const q);
    DescribeGlobalClustersRequestPrivate(const DescribeGlobalClustersRequestPrivate &other,
                                   DescribeGlobalClustersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalClustersRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
