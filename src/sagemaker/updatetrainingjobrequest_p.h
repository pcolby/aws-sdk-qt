// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAININGJOBREQUEST_P_H
#define QTAWS_UPDATETRAININGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatetrainingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateTrainingJobRequest;

class UpdateTrainingJobRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateTrainingJobRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateTrainingJobRequest * const q);
    UpdateTrainingJobRequestPrivate(const UpdateTrainingJobRequestPrivate &other,
                                   UpdateTrainingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTrainingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
