// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSLISTDEADLETTERSOURCEQUEUESREQUEST_P_H
#define SQSLISTDEADLETTERSOURCEQUEUESREQUEST_P_H

#include "sqslistdeadlettersourcequeuesrequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsListDeadLetterSourceQueuesRequest;

class SqsListDeadLetterSourceQueuesRequestPrivate : public SqsRequestPrivate {

public:
    SqsListDeadLetterSourceQueuesRequestPrivate(const SqsRequest::Action action,
                                   SqsListDeadLetterSourceQueuesRequest * const q);
    SqsListDeadLetterSourceQueuesRequestPrivate(const SqsListDeadLetterSourceQueuesRequestPrivate &other,
                                   SqsListDeadLetterSourceQueuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsListDeadLetterSourceQueuesRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
