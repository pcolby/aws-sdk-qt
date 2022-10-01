// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECEIVEMESSAGEREQUEST_P_H
#define QTAWS_RECEIVEMESSAGEREQUEST_P_H

#include "sqsrequest_p.h"
#include "receivemessagerequest.h"

namespace QtAws {
namespace Sqs {

class ReceiveMessageRequest;

class ReceiveMessageRequestPrivate : public SqsRequestPrivate {

public:
    ReceiveMessageRequestPrivate(const SqsRequest::Action action,
                                   ReceiveMessageRequest * const q);
    ReceiveMessageRequestPrivate(const ReceiveMessageRequestPrivate &other,
                                   ReceiveMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReceiveMessageRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
