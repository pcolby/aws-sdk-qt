// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIOLIFECYCLECONFIGREQUEST_P_H
#define QTAWS_CREATESTUDIOLIFECYCLECONFIGREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createstudiolifecycleconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateStudioLifecycleConfigRequest;

class CreateStudioLifecycleConfigRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateStudioLifecycleConfigRequestPrivate(const SageMakerRequest::Action action,
                                   CreateStudioLifecycleConfigRequest * const q);
    CreateStudioLifecycleConfigRequestPrivate(const CreateStudioLifecycleConfigRequestPrivate &other,
                                   CreateStudioLifecycleConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStudioLifecycleConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
