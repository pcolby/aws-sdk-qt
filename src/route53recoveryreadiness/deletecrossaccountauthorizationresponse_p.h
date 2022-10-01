// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECROSSACCOUNTAUTHORIZATIONRESPONSE_P_H
#define QTAWS_DELETECROSSACCOUNTAUTHORIZATIONRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteCrossAccountAuthorizationResponse;

class DeleteCrossAccountAuthorizationResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit DeleteCrossAccountAuthorizationResponsePrivate(DeleteCrossAccountAuthorizationResponse * const q);

    void parseDeleteCrossAccountAuthorizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCrossAccountAuthorizationResponse)
    Q_DISABLE_COPY(DeleteCrossAccountAuthorizationResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
