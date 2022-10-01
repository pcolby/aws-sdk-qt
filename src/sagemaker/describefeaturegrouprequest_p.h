// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEATUREGROUPREQUEST_P_H
#define QTAWS_DESCRIBEFEATUREGROUPREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describefeaturegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeFeatureGroupRequest;

class DescribeFeatureGroupRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeFeatureGroupRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeFeatureGroupRequest * const q);
    DescribeFeatureGroupRequestPrivate(const DescribeFeatureGroupRequestPrivate &other,
                                   DescribeFeatureGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFeatureGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
