// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSRECEIVEMESSAGEREQUEST_P_H
#define SQSRECEIVEMESSAGEREQUEST_P_H

#include "sqsreceivemessagerequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsReceiveMessageRequest;

class SqsReceiveMessageRequestPrivate : public SqsRequestPrivate {

public:
    SqsReceiveMessageRequestPrivate(const SqsRequest::Action action,
                                   SqsReceiveMessageRequest * const q);
    SqsReceiveMessageRequestPrivate(const SqsReceiveMessageRequestPrivate &other,
                                   SqsReceiveMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsReceiveMessageRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
