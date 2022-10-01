// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOVERYGROUPREQUEST_H
#define QTAWS_CREATERECOVERYGROUPREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateRecoveryGroupRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT CreateRecoveryGroupRequest : public Route53RecoveryReadinessRequest {

public:
    CreateRecoveryGroupRequest(const CreateRecoveryGroupRequest &other);
    CreateRecoveryGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRecoveryGroupRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
