// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECROSSACCOUNTAUTHORIZATIONREQUEST_H
#define QTAWS_DELETECROSSACCOUNTAUTHORIZATIONREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteCrossAccountAuthorizationRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT DeleteCrossAccountAuthorizationRequest : public Route53RecoveryReadinessRequest {

public:
    DeleteCrossAccountAuthorizationRequest(const DeleteCrossAccountAuthorizationRequest &other);
    DeleteCrossAccountAuthorizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCrossAccountAuthorizationRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
