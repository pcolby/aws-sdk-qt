// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPNOTEBOOKINSTANCEREQUEST_P_H
#define QTAWS_STOPNOTEBOOKINSTANCEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "stopnotebookinstancerequest.h"

namespace QtAws {
namespace SageMaker {

class StopNotebookInstanceRequest;

class StopNotebookInstanceRequestPrivate : public SageMakerRequestPrivate {

public:
    StopNotebookInstanceRequestPrivate(const SageMakerRequest::Action action,
                                   StopNotebookInstanceRequest * const q);
    StopNotebookInstanceRequestPrivate(const StopNotebookInstanceRequestPrivate &other,
                                   StopNotebookInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopNotebookInstanceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
