// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRAININGJOBREQUEST_P_H
#define QTAWS_STOPTRAININGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "stoptrainingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopTrainingJobRequest;

class StopTrainingJobRequestPrivate : public SageMakerRequestPrivate {

public:
    StopTrainingJobRequestPrivate(const SageMakerRequest::Action action,
                                   StopTrainingJobRequest * const q);
    StopTrainingJobRequestPrivate(const StopTrainingJobRequestPrivate &other,
                                   StopTrainingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopTrainingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
