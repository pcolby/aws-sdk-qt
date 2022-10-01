// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECROSSACCOUNTAUTHORIZATIONRESPONSE_P_H
#define QTAWS_CREATECROSSACCOUNTAUTHORIZATIONRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateCrossAccountAuthorizationResponse;

class CreateCrossAccountAuthorizationResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit CreateCrossAccountAuthorizationResponsePrivate(CreateCrossAccountAuthorizationResponse * const q);

    void parseCreateCrossAccountAuthorizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCrossAccountAuthorizationResponse)
    Q_DISABLE_COPY(CreateCrossAccountAuthorizationResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
