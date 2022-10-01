// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSCREATEQUEUEREQUEST_P_H
#define SQSCREATEQUEUEREQUEST_P_H

#include "sqscreatequeuerequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsCreateQueueRequest;

class SqsCreateQueueRequestPrivate : public SqsRequestPrivate {

public:
    SqsCreateQueueRequestPrivate(const SqsRequest::Action action,
                                   SqsCreateQueueRequest * const q);
    SqsCreateQueueRequestPrivate(const SqsCreateQueueRequestPrivate &other,
                                   SqsCreateQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsCreateQueueRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
