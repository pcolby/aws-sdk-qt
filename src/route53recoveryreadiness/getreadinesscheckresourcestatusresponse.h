// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREADINESSCHECKRESOURCESTATUSRESPONSE_H
#define QTAWS_GETREADINESSCHECKRESOURCESTATUSRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "getreadinesscheckresourcestatusrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetReadinessCheckResourceStatusResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetReadinessCheckResourceStatusResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    GetReadinessCheckResourceStatusResponse(const GetReadinessCheckResourceStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReadinessCheckResourceStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReadinessCheckResourceStatusResponse)
    Q_DISABLE_COPY(GetReadinessCheckResourceStatusResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
