// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUETAGSREQUEST_P_H
#define QTAWS_LISTQUEUETAGSREQUEST_P_H

#include "sqsrequest_p.h"
#include "listqueuetagsrequest.h"

namespace QtAws {
namespace Sqs {

class ListQueueTagsRequest;

class ListQueueTagsRequestPrivate : public SqsRequestPrivate {

public:
    ListQueueTagsRequestPrivate(const SqsRequest::Action action,
                                   ListQueueTagsRequest * const q);
    ListQueueTagsRequestPrivate(const ListQueueTagsRequestPrivate &other,
                                   ListQueueTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListQueueTagsRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
