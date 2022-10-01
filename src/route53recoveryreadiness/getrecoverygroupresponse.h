// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYGROUPRESPONSE_H
#define QTAWS_GETRECOVERYGROUPRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "getrecoverygrouprequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetRecoveryGroupResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetRecoveryGroupResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    GetRecoveryGroupResponse(const GetRecoveryGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRecoveryGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecoveryGroupResponse)
    Q_DISABLE_COPY(GetRecoveryGroupResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
