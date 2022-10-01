// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETARCHITECTURERECOMMENDATIONSRESPONSE_P_H
#define QTAWS_GETARCHITECTURERECOMMENDATIONSRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetArchitectureRecommendationsResponse;

class GetArchitectureRecommendationsResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit GetArchitectureRecommendationsResponsePrivate(GetArchitectureRecommendationsResponse * const q);

    void parseGetArchitectureRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetArchitectureRecommendationsResponse)
    Q_DISABLE_COPY(GetArchitectureRecommendationsResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
