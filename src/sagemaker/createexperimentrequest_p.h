// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPERIMENTREQUEST_P_H
#define QTAWS_CREATEEXPERIMENTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createexperimentrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateExperimentRequest;

class CreateExperimentRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateExperimentRequestPrivate(const SageMakerRequest::Action action,
                                   CreateExperimentRequest * const q);
    CreateExperimentRequestPrivate(const CreateExperimentRequestPrivate &other,
                                   CreateExperimentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateExperimentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
