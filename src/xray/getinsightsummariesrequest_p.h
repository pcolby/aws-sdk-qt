// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTSUMMARIESREQUEST_P_H
#define QTAWS_GETINSIGHTSUMMARIESREQUEST_P_H

#include "xrayrequest_p.h"
#include "getinsightsummariesrequest.h"

namespace QtAws {
namespace XRay {

class GetInsightSummariesRequest;

class GetInsightSummariesRequestPrivate : public XRayRequestPrivate {

public:
    GetInsightSummariesRequestPrivate(const XRayRequest::Action action,
                                   GetInsightSummariesRequest * const q);
    GetInsightSummariesRequestPrivate(const GetInsightSummariesRequestPrivate &other,
                                   GetInsightSummariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInsightSummariesRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
