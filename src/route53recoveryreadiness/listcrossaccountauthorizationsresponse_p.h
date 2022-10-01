// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCROSSACCOUNTAUTHORIZATIONSRESPONSE_P_H
#define QTAWS_LISTCROSSACCOUNTAUTHORIZATIONSRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListCrossAccountAuthorizationsResponse;

class ListCrossAccountAuthorizationsResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit ListCrossAccountAuthorizationsResponsePrivate(ListCrossAccountAuthorizationsResponse * const q);

    void parseListCrossAccountAuthorizationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCrossAccountAuthorizationsResponse)
    Q_DISABLE_COPY(ListCrossAccountAuthorizationsResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
