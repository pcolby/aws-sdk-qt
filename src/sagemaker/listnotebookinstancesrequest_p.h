// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTEBOOKINSTANCESREQUEST_P_H
#define QTAWS_LISTNOTEBOOKINSTANCESREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listnotebookinstancesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListNotebookInstancesRequest;

class ListNotebookInstancesRequestPrivate : public SageMakerRequestPrivate {

public:
    ListNotebookInstancesRequestPrivate(const SageMakerRequest::Action action,
                                   ListNotebookInstancesRequest * const q);
    ListNotebookInstancesRequestPrivate(const ListNotebookInstancesRequestPrivate &other,
                                   ListNotebookInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNotebookInstancesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
