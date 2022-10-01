// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEADLETTERSOURCEQUEUESREQUEST_P_H
#define QTAWS_LISTDEADLETTERSOURCEQUEUESREQUEST_P_H

#include "sqsrequest_p.h"
#include "listdeadlettersourcequeuesrequest.h"

namespace QtAws {
namespace Sqs {

class ListDeadLetterSourceQueuesRequest;

class ListDeadLetterSourceQueuesRequestPrivate : public SqsRequestPrivate {

public:
    ListDeadLetterSourceQueuesRequestPrivate(const SqsRequest::Action action,
                                   ListDeadLetterSourceQueuesRequest * const q);
    ListDeadLetterSourceQueuesRequestPrivate(const ListDeadLetterSourceQueuesRequestPrivate &other,
                                   ListDeadLetterSourceQueuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeadLetterSourceQueuesRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
