// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSDELETEMESSAGEBATCHREQUEST_P_H
#define SQSDELETEMESSAGEBATCHREQUEST_P_H

#include "sqsdeletemessagebatchrequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsDeleteMessageBatchRequest;

class SqsDeleteMessageBatchRequestPrivate : public SqsRequestPrivate {

public:
    SqsDeleteMessageBatchRequestPrivate(const SqsRequest::Action action,
                                   SqsDeleteMessageBatchRequest * const q);
    SqsDeleteMessageBatchRequestPrivate(const SqsDeleteMessageBatchRequestPrivate &other,
                                   SqsDeleteMessageBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsDeleteMessageBatchRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
