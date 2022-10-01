// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAININGJOBREQUEST_P_H
#define QTAWS_CREATETRAININGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createtrainingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateTrainingJobRequest;

class CreateTrainingJobRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateTrainingJobRequestPrivate(const SageMakerRequest::Action action,
                                   CreateTrainingJobRequest * const q);
    CreateTrainingJobRequestPrivate(const CreateTrainingJobRequestPrivate &other,
                                   CreateTrainingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrainingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
