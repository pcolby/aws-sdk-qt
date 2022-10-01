// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYGROUPREQUEST_H
#define QTAWS_GETRECOVERYGROUPREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetRecoveryGroupRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetRecoveryGroupRequest : public Route53RecoveryReadinessRequest {

public:
    GetRecoveryGroupRequest(const GetRecoveryGroupRequest &other);
    GetRecoveryGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecoveryGroupRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
