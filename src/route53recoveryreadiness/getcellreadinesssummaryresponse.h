// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELLREADINESSSUMMARYRESPONSE_H
#define QTAWS_GETCELLREADINESSSUMMARYRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "getcellreadinesssummaryrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetCellReadinessSummaryResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetCellReadinessSummaryResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    GetCellReadinessSummaryResponse(const GetCellReadinessSummaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCellReadinessSummaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCellReadinessSummaryResponse)
    Q_DISABLE_COPY(GetCellReadinessSummaryResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
