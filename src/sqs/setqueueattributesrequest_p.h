// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETQUEUEATTRIBUTESREQUEST_P_H
#define QTAWS_SETQUEUEATTRIBUTESREQUEST_P_H

#include "sqsrequest_p.h"
#include "setqueueattributesrequest.h"

namespace QtAws {
namespace Sqs {

class SetQueueAttributesRequest;

class SetQueueAttributesRequestPrivate : public SqsRequestPrivate {

public:
    SetQueueAttributesRequestPrivate(const SqsRequest::Action action,
                                   SetQueueAttributesRequest * const q);
    SetQueueAttributesRequestPrivate(const SetQueueAttributesRequestPrivate &other,
                                   SetQueueAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetQueueAttributesRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
