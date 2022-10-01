// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALGORITHMREQUEST_P_H
#define QTAWS_DESCRIBEALGORITHMREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describealgorithmrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeAlgorithmRequest;

class DescribeAlgorithmRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeAlgorithmRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeAlgorithmRequest * const q);
    DescribeAlgorithmRequestPrivate(const DescribeAlgorithmRequestPrivate &other,
                                   DescribeAlgorithmRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAlgorithmRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
