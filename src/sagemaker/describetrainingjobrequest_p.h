// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAININGJOBREQUEST_P_H
#define QTAWS_DESCRIBETRAININGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describetrainingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeTrainingJobRequest;

class DescribeTrainingJobRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeTrainingJobRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeTrainingJobRequest * const q);
    DescribeTrainingJobRequestPrivate(const DescribeTrainingJobRequestPrivate &other,
                                   DescribeTrainingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrainingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
