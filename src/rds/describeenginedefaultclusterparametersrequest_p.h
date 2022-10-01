// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEDEFAULTCLUSTERPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBEENGINEDEFAULTCLUSTERPARAMETERSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describeenginedefaultclusterparametersrequest.h"

namespace QtAws {
namespace Rds {

class DescribeEngineDefaultClusterParametersRequest;

class DescribeEngineDefaultClusterParametersRequestPrivate : public RdsRequestPrivate {

public:
    DescribeEngineDefaultClusterParametersRequestPrivate(const RdsRequest::Action action,
                                   DescribeEngineDefaultClusterParametersRequest * const q);
    DescribeEngineDefaultClusterParametersRequestPrivate(const DescribeEngineDefaultClusterParametersRequestPrivate &other,
                                   DescribeEngineDefaultClusterParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEngineDefaultClusterParametersRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
