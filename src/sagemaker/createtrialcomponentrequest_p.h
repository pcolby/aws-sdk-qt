// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRIALCOMPONENTREQUEST_P_H
#define QTAWS_CREATETRIALCOMPONENTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createtrialcomponentrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateTrialComponentRequest;

class CreateTrialComponentRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateTrialComponentRequestPrivate(const SageMakerRequest::Action action,
                                   CreateTrialComponentRequest * const q);
    CreateTrialComponentRequestPrivate(const CreateTrialComponentRequestPrivate &other,
                                   CreateTrialComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrialComponentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
