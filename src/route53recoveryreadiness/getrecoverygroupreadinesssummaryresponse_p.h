// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYGROUPREADINESSSUMMARYRESPONSE_P_H
#define QTAWS_GETRECOVERYGROUPREADINESSSUMMARYRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetRecoveryGroupReadinessSummaryResponse;

class GetRecoveryGroupReadinessSummaryResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit GetRecoveryGroupReadinessSummaryResponsePrivate(GetRecoveryGroupReadinessSummaryResponse * const q);

    void parseGetRecoveryGroupReadinessSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRecoveryGroupReadinessSummaryResponse)
    Q_DISABLE_COPY(GetRecoveryGroupReadinessSummaryResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
