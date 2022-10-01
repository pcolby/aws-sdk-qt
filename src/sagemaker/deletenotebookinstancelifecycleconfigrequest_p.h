// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTEBOOKINSTANCELIFECYCLECONFIGREQUEST_P_H
#define QTAWS_DELETENOTEBOOKINSTANCELIFECYCLECONFIGREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletenotebookinstancelifecycleconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteNotebookInstanceLifecycleConfigRequest;

class DeleteNotebookInstanceLifecycleConfigRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteNotebookInstanceLifecycleConfigRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteNotebookInstanceLifecycleConfigRequest * const q);
    DeleteNotebookInstanceLifecycleConfigRequestPrivate(const DeleteNotebookInstanceLifecycleConfigRequestPrivate &other,
                                   DeleteNotebookInstanceLifecycleConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNotebookInstanceLifecycleConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
