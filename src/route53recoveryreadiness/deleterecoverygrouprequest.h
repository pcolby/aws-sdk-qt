// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOVERYGROUPREQUEST_H
#define QTAWS_DELETERECOVERYGROUPREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteRecoveryGroupRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT DeleteRecoveryGroupRequest : public Route53RecoveryReadinessRequest {

public:
    DeleteRecoveryGroupRequest(const DeleteRecoveryGroupRequest &other);
    DeleteRecoveryGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecoveryGroupRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
