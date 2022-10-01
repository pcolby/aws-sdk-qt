// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSENTIMENTREQUEST_P_H
#define QTAWS_DETECTSENTIMENTREQUEST_P_H

#include "comprehendrequest_p.h"
#include "detectsentimentrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectSentimentRequest;

class DetectSentimentRequestPrivate : public ComprehendRequestPrivate {

public:
    DetectSentimentRequestPrivate(const ComprehendRequest::Action action,
                                   DetectSentimentRequest * const q);
    DetectSentimentRequestPrivate(const DetectSentimentRequestPrivate &other,
                                   DetectSentimentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectSentimentRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
