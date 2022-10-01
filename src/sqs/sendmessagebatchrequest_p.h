// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDMESSAGEBATCHREQUEST_P_H
#define QTAWS_SENDMESSAGEBATCHREQUEST_P_H

#include "sqsrequest_p.h"
#include "sendmessagebatchrequest.h"

namespace QtAws {
namespace Sqs {

class SendMessageBatchRequest;

class SendMessageBatchRequestPrivate : public SqsRequestPrivate {

public:
    SendMessageBatchRequestPrivate(const SqsRequest::Action action,
                                   SendMessageBatchRequest * const q);
    SendMessageBatchRequestPrivate(const SendMessageBatchRequestPrivate &other,
                                   SendMessageBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendMessageBatchRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
