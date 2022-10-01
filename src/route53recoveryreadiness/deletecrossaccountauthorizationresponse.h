// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECROSSACCOUNTAUTHORIZATIONRESPONSE_H
#define QTAWS_DELETECROSSACCOUNTAUTHORIZATIONRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "deletecrossaccountauthorizationrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteCrossAccountAuthorizationResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT DeleteCrossAccountAuthorizationResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    DeleteCrossAccountAuthorizationResponse(const DeleteCrossAccountAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCrossAccountAuthorizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCrossAccountAuthorizationResponse)
    Q_DISABLE_COPY(DeleteCrossAccountAuthorizationResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
