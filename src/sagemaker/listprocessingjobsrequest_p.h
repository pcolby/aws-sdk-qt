// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROCESSINGJOBSREQUEST_P_H
#define QTAWS_LISTPROCESSINGJOBSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listprocessingjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListProcessingJobsRequest;

class ListProcessingJobsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListProcessingJobsRequestPrivate(const SageMakerRequest::Action action,
                                   ListProcessingJobsRequest * const q);
    ListProcessingJobsRequestPrivate(const ListProcessingJobsRequestPrivate &other,
                                   ListProcessingJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProcessingJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
