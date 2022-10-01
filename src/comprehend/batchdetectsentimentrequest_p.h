// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTSENTIMENTREQUEST_P_H
#define QTAWS_BATCHDETECTSENTIMENTREQUEST_P_H

#include "comprehendrequest_p.h"
#include "batchdetectsentimentrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectSentimentRequest;

class BatchDetectSentimentRequestPrivate : public ComprehendRequestPrivate {

public:
    BatchDetectSentimentRequestPrivate(const ComprehendRequest::Action action,
                                   BatchDetectSentimentRequest * const q);
    BatchDetectSentimentRequestPrivate(const BatchDetectSentimentRequestPrivate &other,
                                   BatchDetectSentimentRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDetectSentimentRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
