// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECROSSACCOUNTAUTHORIZATIONRESPONSE_H
#define QTAWS_CREATECROSSACCOUNTAUTHORIZATIONRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "createcrossaccountauthorizationrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateCrossAccountAuthorizationResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT CreateCrossAccountAuthorizationResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    CreateCrossAccountAuthorizationResponse(const CreateCrossAccountAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCrossAccountAuthorizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCrossAccountAuthorizationResponse)
    Q_DISABLE_COPY(CreateCrossAccountAuthorizationResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
