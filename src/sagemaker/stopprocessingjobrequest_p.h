// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPROCESSINGJOBREQUEST_P_H
#define QTAWS_STOPPROCESSINGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "stopprocessingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopProcessingJobRequest;

class StopProcessingJobRequestPrivate : public SageMakerRequestPrivate {

public:
    StopProcessingJobRequestPrivate(const SageMakerRequest::Action action,
                                   StopProcessingJobRequest * const q);
    StopProcessingJobRequestPrivate(const StopProcessingJobRequestPrivate &other,
                                   StopProcessingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopProcessingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
