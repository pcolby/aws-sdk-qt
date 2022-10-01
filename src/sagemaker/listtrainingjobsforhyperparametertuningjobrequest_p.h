// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAININGJOBSFORHYPERPARAMETERTUNINGJOBREQUEST_P_H
#define QTAWS_LISTTRAININGJOBSFORHYPERPARAMETERTUNINGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listtrainingjobsforhyperparametertuningjobrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTrainingJobsForHyperParameterTuningJobRequest;

class ListTrainingJobsForHyperParameterTuningJobRequestPrivate : public SageMakerRequestPrivate {

public:
    ListTrainingJobsForHyperParameterTuningJobRequestPrivate(const SageMakerRequest::Action action,
                                   ListTrainingJobsForHyperParameterTuningJobRequest * const q);
    ListTrainingJobsForHyperParameterTuningJobRequestPrivate(const ListTrainingJobsForHyperParameterTuningJobRequestPrivate &other,
                                   ListTrainingJobsForHyperParameterTuningJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrainingJobsForHyperParameterTuningJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
