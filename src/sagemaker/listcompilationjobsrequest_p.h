// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPILATIONJOBSREQUEST_P_H
#define QTAWS_LISTCOMPILATIONJOBSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listcompilationjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListCompilationJobsRequest;

class ListCompilationJobsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListCompilationJobsRequestPrivate(const SageMakerRequest::Action action,
                                   ListCompilationJobsRequest * const q);
    ListCompilationJobsRequestPrivate(const ListCompilationJobsRequestPrivate &other,
                                   ListCompilationJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCompilationJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
