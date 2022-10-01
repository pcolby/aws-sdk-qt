// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTTARGETEDSENTIMENTREQUEST_P_H
#define QTAWS_BATCHDETECTTARGETEDSENTIMENTREQUEST_P_H

#include "comprehendrequest_p.h"
#include "batchdetecttargetedsentimentrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectTargetedSentimentRequest;

class BatchDetectTargetedSentimentRequestPrivate : public ComprehendRequestPrivate {

public:
    BatchDetectTargetedSentimentRequestPrivate(const ComprehendRequest::Action action,
                                   BatchDetectTargetedSentimentRequest * const q);
    BatchDetectTargetedSentimentRequestPrivate(const BatchDetectTargetedSentimentRequestPrivate &other,
                                   BatchDetectTargetedSentimentRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDetectTargetedSentimentRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
