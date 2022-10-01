// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETARCHITECTURERECOMMENDATIONSREQUEST_P_H
#define QTAWS_GETARCHITECTURERECOMMENDATIONSREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "getarchitecturerecommendationsrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetArchitectureRecommendationsRequest;

class GetArchitectureRecommendationsRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    GetArchitectureRecommendationsRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   GetArchitectureRecommendationsRequest * const q);
    GetArchitectureRecommendationsRequestPrivate(const GetArchitectureRecommendationsRequestPrivate &other,
                                   GetArchitectureRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetArchitectureRecommendationsRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
