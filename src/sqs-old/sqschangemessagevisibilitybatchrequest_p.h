// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSCHANGEMESSAGEVISIBILITYBATCHREQUEST_P_H
#define SQSCHANGEMESSAGEVISIBILITYBATCHREQUEST_P_H

#include "sqschangemessagevisibilitybatchrequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsChangeMessageVisibilityBatchRequest;

class SqsChangeMessageVisibilityBatchRequestPrivate : public SqsRequestPrivate {

public:
    SqsChangeMessageVisibilityBatchRequestPrivate(const SqsRequest::Action action,
                                   SqsChangeMessageVisibilityBatchRequest * const q);
    SqsChangeMessageVisibilityBatchRequestPrivate(const SqsChangeMessageVisibilityBatchRequestPrivate &other,
                                   SqsChangeMessageVisibilityBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsChangeMessageVisibilityBatchRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
