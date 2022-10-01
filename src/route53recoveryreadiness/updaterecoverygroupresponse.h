// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOVERYGROUPRESPONSE_H
#define QTAWS_UPDATERECOVERYGROUPRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "updaterecoverygrouprequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateRecoveryGroupResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT UpdateRecoveryGroupResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    UpdateRecoveryGroupResponse(const UpdateRecoveryGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRecoveryGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRecoveryGroupResponse)
    Q_DISABLE_COPY(UpdateRecoveryGroupResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
