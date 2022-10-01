// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREADINESSCHECKSTATUSRESPONSE_H
#define QTAWS_GETREADINESSCHECKSTATUSRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "getreadinesscheckstatusrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetReadinessCheckStatusResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetReadinessCheckStatusResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    GetReadinessCheckStatusResponse(const GetReadinessCheckStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReadinessCheckStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReadinessCheckStatusResponse)
    Q_DISABLE_COPY(GetReadinessCheckStatusResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
