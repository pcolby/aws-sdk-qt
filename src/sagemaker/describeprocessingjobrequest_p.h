// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROCESSINGJOBREQUEST_P_H
#define QTAWS_DESCRIBEPROCESSINGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeprocessingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeProcessingJobRequest;

class DescribeProcessingJobRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeProcessingJobRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeProcessingJobRequest * const q);
    DescribeProcessingJobRequestPrivate(const DescribeProcessingJobRequestPrivate &other,
                                   DescribeProcessingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProcessingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
