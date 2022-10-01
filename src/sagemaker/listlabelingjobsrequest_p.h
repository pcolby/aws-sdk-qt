// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELINGJOBSREQUEST_P_H
#define QTAWS_LISTLABELINGJOBSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listlabelingjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListLabelingJobsRequest;

class ListLabelingJobsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListLabelingJobsRequestPrivate(const SageMakerRequest::Action action,
                                   ListLabelingJobsRequest * const q);
    ListLabelingJobsRequestPrivate(const ListLabelingJobsRequestPrivate &other,
                                   ListLabelingJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLabelingJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
