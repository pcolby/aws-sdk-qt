// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUEUEATTRIBUTESREQUEST_P_H
#define QTAWS_GETQUEUEATTRIBUTESREQUEST_P_H

#include "sqsrequest_p.h"
#include "getqueueattributesrequest.h"

namespace QtAws {
namespace Sqs {

class GetQueueAttributesRequest;

class GetQueueAttributesRequestPrivate : public SqsRequestPrivate {

public:
    GetQueueAttributesRequestPrivate(const SqsRequest::Action action,
                                   GetQueueAttributesRequest * const q);
    GetQueueAttributesRequestPrivate(const GetQueueAttributesRequestPrivate &other,
                                   GetQueueAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetQueueAttributesRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
