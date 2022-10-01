// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOVERYGROUPREQUEST_H
#define QTAWS_UPDATERECOVERYGROUPREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateRecoveryGroupRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT UpdateRecoveryGroupRequest : public Route53RecoveryReadinessRequest {

public:
    UpdateRecoveryGroupRequest(const UpdateRecoveryGroupRequest &other);
    UpdateRecoveryGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRecoveryGroupRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
