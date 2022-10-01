// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTEBOOKINSTANCELIFECYCLECONFIGSREQUEST_P_H
#define QTAWS_LISTNOTEBOOKINSTANCELIFECYCLECONFIGSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listnotebookinstancelifecycleconfigsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListNotebookInstanceLifecycleConfigsRequest;

class ListNotebookInstanceLifecycleConfigsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListNotebookInstanceLifecycleConfigsRequestPrivate(const SageMakerRequest::Action action,
                                   ListNotebookInstanceLifecycleConfigsRequest * const q);
    ListNotebookInstanceLifecycleConfigsRequestPrivate(const ListNotebookInstanceLifecycleConfigsRequestPrivate &other,
                                   ListNotebookInstanceLifecycleConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNotebookInstanceLifecycleConfigsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
