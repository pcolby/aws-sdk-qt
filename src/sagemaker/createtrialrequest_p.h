// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRIALREQUEST_P_H
#define QTAWS_CREATETRIALREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createtrialrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateTrialRequest;

class CreateTrialRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateTrialRequestPrivate(const SageMakerRequest::Action action,
                                   CreateTrialRequest * const q);
    CreateTrialRequestPrivate(const CreateTrialRequestPrivate &other,
                                   CreateTrialRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrialRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
