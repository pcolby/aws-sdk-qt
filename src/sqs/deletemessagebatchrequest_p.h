// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMESSAGEBATCHREQUEST_P_H
#define QTAWS_DELETEMESSAGEBATCHREQUEST_P_H

#include "sqsrequest_p.h"
#include "deletemessagebatchrequest.h"

namespace QtAws {
namespace Sqs {

class DeleteMessageBatchRequest;

class DeleteMessageBatchRequestPrivate : public SqsRequestPrivate {

public:
    DeleteMessageBatchRequestPrivate(const SqsRequest::Action action,
                                   DeleteMessageBatchRequest * const q);
    DeleteMessageBatchRequestPrivate(const DeleteMessageBatchRequestPrivate &other,
                                   DeleteMessageBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMessageBatchRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
