// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROCESSINGJOBREQUEST_P_H
#define QTAWS_CREATEPROCESSINGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createprocessingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateProcessingJobRequest;

class CreateProcessingJobRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateProcessingJobRequestPrivate(const SageMakerRequest::Action action,
                                   CreateProcessingJobRequest * const q);
    CreateProcessingJobRequestPrivate(const CreateProcessingJobRequestPrivate &other,
                                   CreateProcessingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProcessingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
