// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTEBOOKINSTANCEREQUEST_P_H
#define QTAWS_DELETENOTEBOOKINSTANCEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletenotebookinstancerequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteNotebookInstanceRequest;

class DeleteNotebookInstanceRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteNotebookInstanceRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteNotebookInstanceRequest * const q);
    DeleteNotebookInstanceRequestPrivate(const DeleteNotebookInstanceRequestPrivate &other,
                                   DeleteNotebookInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNotebookInstanceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
