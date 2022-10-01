// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSSENDMESSAGEBATCHREQUEST_P_H
#define SQSSENDMESSAGEBATCHREQUEST_P_H

#include "sqssendmessagebatchrequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsSendMessageBatchRequest;

class SqsSendMessageBatchRequestPrivate : public SqsRequestPrivate {

public:
    SqsSendMessageBatchRequestPrivate(const SqsRequest::Action action,
                                   SqsSendMessageBatchRequest * const q);
    SqsSendMessageBatchRequestPrivate(const SqsSendMessageBatchRequestPrivate &other,
                                   SqsSendMessageBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsSendMessageBatchRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
