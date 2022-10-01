// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEDEFAULTPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBEENGINEDEFAULTPARAMETERSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describeenginedefaultparametersrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeEngineDefaultParametersRequest;

class DescribeEngineDefaultParametersRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeEngineDefaultParametersRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeEngineDefaultParametersRequest * const q);
    DescribeEngineDefaultParametersRequestPrivate(const DescribeEngineDefaultParametersRequestPrivate &other,
                                   DescribeEngineDefaultParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEngineDefaultParametersRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
