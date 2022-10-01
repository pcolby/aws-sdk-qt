// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTEBOOKINSTANCEREQUEST_P_H
#define QTAWS_UPDATENOTEBOOKINSTANCEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatenotebookinstancerequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateNotebookInstanceRequest;

class UpdateNotebookInstanceRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateNotebookInstanceRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateNotebookInstanceRequest * const q);
    UpdateNotebookInstanceRequestPrivate(const UpdateNotebookInstanceRequestPrivate &other,
                                   UpdateNotebookInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNotebookInstanceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
