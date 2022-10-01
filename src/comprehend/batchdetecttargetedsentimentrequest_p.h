/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
