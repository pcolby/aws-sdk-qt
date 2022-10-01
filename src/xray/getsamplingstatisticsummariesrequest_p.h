// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLINGSTATISTICSUMMARIESREQUEST_P_H
#define QTAWS_GETSAMPLINGSTATISTICSUMMARIESREQUEST_P_H

#include "xrayrequest_p.h"
#include "getsamplingstatisticsummariesrequest.h"

namespace QtAws {
namespace XRay {

class GetSamplingStatisticSummariesRequest;

class GetSamplingStatisticSummariesRequestPrivate : public XRayRequestPrivate {

public:
    GetSamplingStatisticSummariesRequestPrivate(const XRayRequest::Action action,
                                   GetSamplingStatisticSummariesRequest * const q);
    GetSamplingStatisticSummariesRequestPrivate(const GetSamplingStatisticSummariesRequestPrivate &other,
                                   GetSamplingStatisticSummariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSamplingStatisticSummariesRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
