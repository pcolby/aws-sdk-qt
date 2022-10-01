// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSFORMJOBREQUEST_P_H
#define QTAWS_DESCRIBETRANSFORMJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describetransformjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeTransformJobRequest;

class DescribeTransformJobRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeTransformJobRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeTransformJobRequest * const q);
    DescribeTransformJobRequestPrivate(const DescribeTransformJobRequestPrivate &other,
                                   DescribeTransformJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTransformJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
