// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTTARGETEDSENTIMENTREQUEST_P_H
#define QTAWS_DETECTTARGETEDSENTIMENTREQUEST_P_H

#include "comprehendrequest_p.h"
#include "detecttargetedsentimentrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectTargetedSentimentRequest;

class DetectTargetedSentimentRequestPrivate : public ComprehendRequestPrivate {

public:
    DetectTargetedSentimentRequestPrivate(const ComprehendRequest::Action action,
                                   DetectTargetedSentimentRequest * const q);
    DetectTargetedSentimentRequestPrivate(const DetectTargetedSentimentRequestPrivate &other,
                                   DetectTargetedSentimentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectTargetedSentimentRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
