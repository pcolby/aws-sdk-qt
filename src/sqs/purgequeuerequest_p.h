// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURGEQUEUEREQUEST_P_H
#define QTAWS_PURGEQUEUEREQUEST_P_H

#include "sqsrequest_p.h"
#include "purgequeuerequest.h"

namespace QtAws {
namespace Sqs {

class PurgeQueueRequest;

class PurgeQueueRequestPrivate : public SqsRequestPrivate {

public:
    PurgeQueueRequestPrivate(const SqsRequest::Action action,
                                   PurgeQueueRequest * const q);
    PurgeQueueRequestPrivate(const PurgeQueueRequestPrivate &other,
                                   PurgeQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurgeQueueRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
