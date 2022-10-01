// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOVERYGROUPRESPONSE_H
#define QTAWS_DELETERECOVERYGROUPRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "deleterecoverygrouprequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteRecoveryGroupResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT DeleteRecoveryGroupResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    DeleteRecoveryGroupResponse(const DeleteRecoveryGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRecoveryGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecoveryGroupResponse)
    Q_DISABLE_COPY(DeleteRecoveryGroupResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
