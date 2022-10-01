// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHSEGMENTJOBSREQUEST_P_H
#define QTAWS_LISTBATCHSEGMENTJOBSREQUEST_P_H

#include "personalizerequest_p.h"
#include "listbatchsegmentjobsrequest.h"

namespace QtAws {
namespace Personalize {

class ListBatchSegmentJobsRequest;

class ListBatchSegmentJobsRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListBatchSegmentJobsRequestPrivate(const PersonalizeRequest::Action action,
                                   ListBatchSegmentJobsRequest * const q);
    ListBatchSegmentJobsRequestPrivate(const ListBatchSegmentJobsRequestPrivate &other,
                                   ListBatchSegmentJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBatchSegmentJobsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
