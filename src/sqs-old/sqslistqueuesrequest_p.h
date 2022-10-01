// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSLISTQUEUESREQUEST_P_H
#define SQSLISTQUEUESREQUEST_P_H

#include "sqslistqueuesrequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsListQueuesRequest;

class SqsListQueuesRequestPrivate : public SqsRequestPrivate {

public:
    SqsListQueuesRequestPrivate(const SqsRequest::Action action,
                                   SqsListQueuesRequest * const q);
    SqsListQueuesRequestPrivate(const SqsListQueuesRequestPrivate &other,
                                   SqsListQueuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsListQueuesRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
