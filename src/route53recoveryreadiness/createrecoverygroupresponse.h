// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOVERYGROUPRESPONSE_H
#define QTAWS_CREATERECOVERYGROUPRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "createrecoverygrouprequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateRecoveryGroupResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT CreateRecoveryGroupResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    CreateRecoveryGroupResponse(const CreateRecoveryGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRecoveryGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRecoveryGroupResponse)
    Q_DISABLE_COPY(CreateRecoveryGroupResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
