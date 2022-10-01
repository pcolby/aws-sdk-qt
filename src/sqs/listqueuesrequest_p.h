// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUESREQUEST_P_H
#define QTAWS_LISTQUEUESREQUEST_P_H

#include "sqsrequest_p.h"
#include "listqueuesrequest.h"

namespace QtAws {
namespace Sqs {

class ListQueuesRequest;

class ListQueuesRequestPrivate : public SqsRequestPrivate {

public:
    ListQueuesRequestPrivate(const SqsRequest::Action action,
                                   ListQueuesRequest * const q);
    ListQueuesRequestPrivate(const ListQueuesRequestPrivate &other,
                                   ListQueuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListQueuesRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
