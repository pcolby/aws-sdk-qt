// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBSREQUEST_P_H
#define QTAWS_LISTJOBSREQUEST_P_H

#include "batchrequest_p.h"
#include "listjobsrequest.h"

namespace QtAws {
namespace Batch {

class ListJobsRequest;

class ListJobsRequestPrivate : public BatchRequestPrivate {

public:
    ListJobsRequestPrivate(const BatchRequest::Action action,
                                   ListJobsRequest * const q);
    ListJobsRequestPrivate(const ListJobsRequestPrivate &other,
                                   ListJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListJobsRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
