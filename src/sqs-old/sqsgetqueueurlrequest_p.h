// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSGETQUEUEURLREQUEST_P_H
#define SQSGETQUEUEURLREQUEST_P_H

#include "sqsgetqueueurlrequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsGetQueueUrlRequest;

class SqsGetQueueUrlRequestPrivate : public SqsRequestPrivate {

public:
    SqsGetQueueUrlRequestPrivate(const SqsRequest::Action action,
                                   SqsGetQueueUrlRequest * const q);
    SqsGetQueueUrlRequestPrivate(const SqsGetQueueUrlRequestPrivate &other,
                                   SqsGetQueueUrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsGetQueueUrlRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
