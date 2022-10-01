// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHYPERPARAMETERTUNINGJOBREQUEST_P_H
#define QTAWS_DESCRIBEHYPERPARAMETERTUNINGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describehyperparametertuningjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeHyperParameterTuningJobRequest;

class DescribeHyperParameterTuningJobRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeHyperParameterTuningJobRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeHyperParameterTuningJobRequest * const q);
    DescribeHyperParameterTuningJobRequestPrivate(const DescribeHyperParameterTuningJobRequestPrivate &other,
                                   DescribeHyperParameterTuningJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHyperParameterTuningJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
