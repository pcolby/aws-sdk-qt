// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSSETQUEUEATTRIBUTESREQUEST_P_H
#define SQSSETQUEUEATTRIBUTESREQUEST_P_H

#include "sqssetqueueattributesrequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsSetQueueAttributesRequest;

class SqsSetQueueAttributesRequestPrivate : public SqsRequestPrivate {

public:
    SqsSetQueueAttributesRequestPrivate(const SqsRequest::Action action,
                                   SqsSetQueueAttributesRequest * const q);
    SqsSetQueueAttributesRequestPrivate(const SqsSetQueueAttributesRequestPrivate &other,
                                   SqsSetQueueAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsSetQueueAttributesRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
