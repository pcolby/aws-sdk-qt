// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINSIGHTSELECTORSREQUEST_P_H
#define QTAWS_PUTINSIGHTSELECTORSREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "putinsightselectorsrequest.h"

namespace QtAws {
namespace CloudTrail {

class PutInsightSelectorsRequest;

class PutInsightSelectorsRequestPrivate : public CloudTrailRequestPrivate {

public:
    PutInsightSelectorsRequestPrivate(const CloudTrailRequest::Action action,
                                   PutInsightSelectorsRequest * const q);
    PutInsightSelectorsRequestPrivate(const PutInsightSelectorsRequestPrivate &other,
                                   PutInsightSelectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutInsightSelectorsRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
