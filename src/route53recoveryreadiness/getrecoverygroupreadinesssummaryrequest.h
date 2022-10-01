// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYGROUPREADINESSSUMMARYREQUEST_H
#define QTAWS_GETRECOVERYGROUPREADINESSSUMMARYREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetRecoveryGroupReadinessSummaryRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetRecoveryGroupReadinessSummaryRequest : public Route53RecoveryReadinessRequest {

public:
    GetRecoveryGroupReadinessSummaryRequest(const GetRecoveryGroupReadinessSummaryRequest &other);
    GetRecoveryGroupReadinessSummaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecoveryGroupReadinessSummaryRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
