// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTEBOOKINSTANCELIFECYCLECONFIGREQUEST_P_H
#define QTAWS_CREATENOTEBOOKINSTANCELIFECYCLECONFIGREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createnotebookinstancelifecycleconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateNotebookInstanceLifecycleConfigRequest;

class CreateNotebookInstanceLifecycleConfigRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateNotebookInstanceLifecycleConfigRequestPrivate(const SageMakerRequest::Action action,
                                   CreateNotebookInstanceLifecycleConfigRequest * const q);
    CreateNotebookInstanceLifecycleConfigRequestPrivate(const CreateNotebookInstanceLifecycleConfigRequestPrivate &other,
                                   CreateNotebookInstanceLifecycleConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNotebookInstanceLifecycleConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
