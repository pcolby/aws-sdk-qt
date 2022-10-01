// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGQUEUEREQUEST_P_H
#define QTAWS_TAGQUEUEREQUEST_P_H

#include "sqsrequest_p.h"
#include "tagqueuerequest.h"

namespace QtAws {
namespace Sqs {

class TagQueueRequest;

class TagQueueRequestPrivate : public SqsRequestPrivate {

public:
    TagQueueRequestPrivate(const SqsRequest::Action action,
                                   TagQueueRequest * const q);
    TagQueueRequestPrivate(const TagQueueRequestPrivate &other,
                                   TagQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagQueueRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
