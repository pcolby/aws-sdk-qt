// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPHYPERPARAMETERTUNINGJOBREQUEST_P_H
#define QTAWS_STOPHYPERPARAMETERTUNINGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "stophyperparametertuningjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopHyperParameterTuningJobRequest;

class StopHyperParameterTuningJobRequestPrivate : public SageMakerRequestPrivate {

public:
    StopHyperParameterTuningJobRequestPrivate(const SageMakerRequest::Action action,
                                   StopHyperParameterTuningJobRequest * const q);
    StopHyperParameterTuningJobRequestPrivate(const StopHyperParameterTuningJobRequestPrivate &other,
                                   StopHyperParameterTuningJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopHyperParameterTuningJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
