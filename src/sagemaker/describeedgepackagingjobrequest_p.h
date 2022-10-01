// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEDGEPACKAGINGJOBREQUEST_P_H
#define QTAWS_DESCRIBEEDGEPACKAGINGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeedgepackagingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeEdgePackagingJobRequest;

class DescribeEdgePackagingJobRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeEdgePackagingJobRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeEdgePackagingJobRequest * const q);
    DescribeEdgePackagingJobRequestPrivate(const DescribeEdgePackagingJobRequestPrivate &other,
                                   DescribeEdgePackagingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEdgePackagingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
