// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGQUEUEREQUEST_P_H
#define QTAWS_UNTAGQUEUEREQUEST_P_H

#include "sqsrequest_p.h"
#include "untagqueuerequest.h"

namespace QtAws {
namespace Sqs {

class UntagQueueRequest;

class UntagQueueRequestPrivate : public SqsRequestPrivate {

public:
    UntagQueueRequestPrivate(const SqsRequest::Action action,
                                   UntagQueueRequest * const q);
    UntagQueueRequestPrivate(const UntagQueueRequestPrivate &other,
                                   UntagQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagQueueRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
