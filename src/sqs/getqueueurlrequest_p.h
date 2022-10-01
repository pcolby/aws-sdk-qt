// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUEUEURLREQUEST_P_H
#define QTAWS_GETQUEUEURLREQUEST_P_H

#include "sqsrequest_p.h"
#include "getqueueurlrequest.h"

namespace QtAws {
namespace Sqs {

class GetQueueUrlRequest;

class GetQueueUrlRequestPrivate : public SqsRequestPrivate {

public:
    GetQueueUrlRequestPrivate(const SqsRequest::Action action,
                                   GetQueueUrlRequest * const q);
    GetQueueUrlRequestPrivate(const GetQueueUrlRequestPrivate &other,
                                   GetQueueUrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetQueueUrlRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
