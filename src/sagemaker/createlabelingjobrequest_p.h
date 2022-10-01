// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELINGJOBREQUEST_P_H
#define QTAWS_CREATELABELINGJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createlabelingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateLabelingJobRequest;

class CreateLabelingJobRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateLabelingJobRequestPrivate(const SageMakerRequest::Action action,
                                   CreateLabelingJobRequest * const q);
    CreateLabelingJobRequestPrivate(const CreateLabelingJobRequestPrivate &other,
                                   CreateLabelingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLabelingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
