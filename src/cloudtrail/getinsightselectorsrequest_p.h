// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTSELECTORSREQUEST_P_H
#define QTAWS_GETINSIGHTSELECTORSREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "getinsightselectorsrequest.h"

namespace QtAws {
namespace CloudTrail {

class GetInsightSelectorsRequest;

class GetInsightSelectorsRequestPrivate : public CloudTrailRequestPrivate {

public:
    GetInsightSelectorsRequestPrivate(const CloudTrailRequest::Action action,
                                   GetInsightSelectorsRequest * const q);
    GetInsightSelectorsRequestPrivate(const GetInsightSelectorsRequestPrivate &other,
                                   GetInsightSelectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInsightSelectorsRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
