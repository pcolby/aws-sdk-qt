// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSGETQUEUEATTRIBUTESREQUEST_P_H
#define SQSGETQUEUEATTRIBUTESREQUEST_P_H

#include "sqsgetqueueattributesrequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsGetQueueAttributesRequest;

class SqsGetQueueAttributesRequestPrivate : public SqsRequestPrivate {

public:
    SqsGetQueueAttributesRequestPrivate(const SqsRequest::Action action,
                                   SqsGetQueueAttributesRequest * const q);
    SqsGetQueueAttributesRequestPrivate(const SqsGetQueueAttributesRequestPrivate &other,
                                   SqsGetQueueAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsGetQueueAttributesRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
