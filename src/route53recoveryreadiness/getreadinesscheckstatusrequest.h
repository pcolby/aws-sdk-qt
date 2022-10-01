// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREADINESSCHECKSTATUSREQUEST_H
#define QTAWS_GETREADINESSCHECKSTATUSREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetReadinessCheckStatusRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetReadinessCheckStatusRequest : public Route53RecoveryReadinessRequest {

public:
    GetReadinessCheckStatusRequest(const GetReadinessCheckStatusRequest &other);
    GetReadinessCheckStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReadinessCheckStatusRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
