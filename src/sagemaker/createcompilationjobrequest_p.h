// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPILATIONJOBREQUEST_P_H
#define QTAWS_CREATECOMPILATIONJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createcompilationjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateCompilationJobRequest;

class CreateCompilationJobRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateCompilationJobRequestPrivate(const SageMakerRequest::Action action,
                                   CreateCompilationJobRequest * const q);
    CreateCompilationJobRequestPrivate(const CreateCompilationJobRequestPrivate &other,
                                   CreateCompilationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCompilationJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
