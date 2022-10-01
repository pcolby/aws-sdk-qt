// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTEBOOKINSTANCEREQUEST_P_H
#define QTAWS_CREATENOTEBOOKINSTANCEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createnotebookinstancerequest.h"

namespace QtAws {
namespace SageMaker {

class CreateNotebookInstanceRequest;

class CreateNotebookInstanceRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateNotebookInstanceRequestPrivate(const SageMakerRequest::Action action,
                                   CreateNotebookInstanceRequest * const q);
    CreateNotebookInstanceRequestPrivate(const CreateNotebookInstanceRequestPrivate &other,
                                   CreateNotebookInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNotebookInstanceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
