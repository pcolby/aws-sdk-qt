// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTIMPACTGRAPHREQUEST_P_H
#define QTAWS_GETINSIGHTIMPACTGRAPHREQUEST_P_H

#include "xrayrequest_p.h"
#include "getinsightimpactgraphrequest.h"

namespace QtAws {
namespace XRay {

class GetInsightImpactGraphRequest;

class GetInsightImpactGraphRequestPrivate : public XRayRequestPrivate {

public:
    GetInsightImpactGraphRequestPrivate(const XRayRequest::Action action,
                                   GetInsightImpactGraphRequest * const q);
    GetInsightImpactGraphRequestPrivate(const GetInsightImpactGraphRequestPrivate &other,
                                   GetInsightImpactGraphRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInsightImpactGraphRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
