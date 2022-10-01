// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELPACKAGINGJOBSREQUEST_P_H
#define QTAWS_LISTMODELPACKAGINGJOBSREQUEST_P_H

#include "lookoutvisionrequest_p.h"
#include "listmodelpackagingjobsrequest.h"

namespace QtAws {
namespace LookoutVision {

class ListModelPackagingJobsRequest;

class ListModelPackagingJobsRequestPrivate : public LookoutVisionRequestPrivate {

public:
    ListModelPackagingJobsRequestPrivate(const LookoutVisionRequest::Action action,
                                   ListModelPackagingJobsRequest * const q);
    ListModelPackagingJobsRequestPrivate(const ListModelPackagingJobsRequestPrivate &other,
                                   ListModelPackagingJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListModelPackagingJobsRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
