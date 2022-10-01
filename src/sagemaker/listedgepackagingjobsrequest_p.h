// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEDGEPACKAGINGJOBSREQUEST_P_H
#define QTAWS_LISTEDGEPACKAGINGJOBSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listedgepackagingjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListEdgePackagingJobsRequest;

class ListEdgePackagingJobsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListEdgePackagingJobsRequestPrivate(const SageMakerRequest::Action action,
                                   ListEdgePackagingJobsRequest * const q);
    ListEdgePackagingJobsRequestPrivate(const ListEdgePackagingJobsRequestPrivate &other,
                                   ListEdgePackagingJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEdgePackagingJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
