// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTEBOOKINSTANCELIFECYCLECONFIGREQUEST_P_H
#define QTAWS_UPDATENOTEBOOKINSTANCELIFECYCLECONFIGREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatenotebookinstancelifecycleconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateNotebookInstanceLifecycleConfigRequest;

class UpdateNotebookInstanceLifecycleConfigRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateNotebookInstanceLifecycleConfigRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateNotebookInstanceLifecycleConfigRequest * const q);
    UpdateNotebookInstanceLifecycleConfigRequestPrivate(const UpdateNotebookInstanceLifecycleConfigRequestPrivate &other,
                                   UpdateNotebookInstanceLifecycleConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNotebookInstanceLifecycleConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
