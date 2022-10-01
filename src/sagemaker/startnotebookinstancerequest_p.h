// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNOTEBOOKINSTANCEREQUEST_P_H
#define QTAWS_STARTNOTEBOOKINSTANCEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "startnotebookinstancerequest.h"

namespace QtAws {
namespace SageMaker {

class StartNotebookInstanceRequest;

class StartNotebookInstanceRequestPrivate : public SageMakerRequestPrivate {

public:
    StartNotebookInstanceRequestPrivate(const SageMakerRequest::Action action,
                                   StartNotebookInstanceRequest * const q);
    StartNotebookInstanceRequestPrivate(const StartNotebookInstanceRequestPrivate &other,
                                   StartNotebookInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartNotebookInstanceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
