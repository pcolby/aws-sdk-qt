// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGEMESSAGEVISIBILITYBATCHREQUEST_P_H
#define QTAWS_CHANGEMESSAGEVISIBILITYBATCHREQUEST_P_H

#include "sqsrequest_p.h"
#include "changemessagevisibilitybatchrequest.h"

namespace QtAws {
namespace Sqs {

class ChangeMessageVisibilityBatchRequest;

class ChangeMessageVisibilityBatchRequestPrivate : public SqsRequestPrivate {

public:
    ChangeMessageVisibilityBatchRequestPrivate(const SqsRequest::Action action,
                                   ChangeMessageVisibilityBatchRequest * const q);
    ChangeMessageVisibilityBatchRequestPrivate(const ChangeMessageVisibilityBatchRequestPrivate &other,
                                   ChangeMessageVisibilityBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(ChangeMessageVisibilityBatchRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
