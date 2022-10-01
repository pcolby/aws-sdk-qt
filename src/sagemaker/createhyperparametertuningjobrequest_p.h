// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHYPERPARAMETERTUNINGJOBREQUEST_P_H
#define QTAWS_CREATEHYPERPARAMETERTUNINGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createhyperparametertuningjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateHyperParameterTuningJobRequest;

class CreateHyperParameterTuningJobRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateHyperParameterTuningJobRequestPrivate(const SageMakerRequest::Action action,
                                   CreateHyperParameterTuningJobRequest * const q);
    CreateHyperParameterTuningJobRequestPrivate(const CreateHyperParameterTuningJobRequestPrivate &other,
                                   CreateHyperParameterTuningJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHyperParameterTuningJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
