// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSDELETEQUEUEREQUEST_P_H
#define SQSDELETEQUEUEREQUEST_P_H

#include "sqsdeletequeuerequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsDeleteQueueRequest;

class SqsDeleteQueueRequestPrivate : public SqsRequestPrivate {

public:
    SqsDeleteQueueRequestPrivate(const SqsRequest::Action action,
                                   SqsDeleteQueueRequest * const q);
    SqsDeleteQueueRequestPrivate(const SqsDeleteQueueRequestPrivate &other,
                                   SqsDeleteQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsDeleteQueueRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
