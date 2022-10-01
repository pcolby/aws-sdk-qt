// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETARCHITECTURERECOMMENDATIONSREQUEST_H
#define QTAWS_GETARCHITECTURERECOMMENDATIONSREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetArchitectureRecommendationsRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetArchitectureRecommendationsRequest : public Route53RecoveryReadinessRequest {

public:
    GetArchitectureRecommendationsRequest(const GetArchitectureRecommendationsRequest &other);
    GetArchitectureRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetArchitectureRecommendationsRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
