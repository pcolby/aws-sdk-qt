// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPERIMENTREQUEST_P_H
#define QTAWS_DESCRIBEEXPERIMENTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeexperimentrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeExperimentRequest;

class DescribeExperimentRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeExperimentRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeExperimentRequest * const q);
    DescribeExperimentRequestPrivate(const DescribeExperimentRequestPrivate &other,
                                   DescribeExperimentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExperimentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
