// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYGROUPREADINESSSUMMARYRESPONSE_H
#define QTAWS_GETRECOVERYGROUPREADINESSSUMMARYRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "getrecoverygroupreadinesssummaryrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetRecoveryGroupReadinessSummaryResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetRecoveryGroupReadinessSummaryResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    GetRecoveryGroupReadinessSummaryResponse(const GetRecoveryGroupReadinessSummaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRecoveryGroupReadinessSummaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecoveryGroupReadinessSummaryResponse)
    Q_DISABLE_COPY(GetRecoveryGroupReadinessSummaryResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
