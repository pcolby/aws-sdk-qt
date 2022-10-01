// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREADINESSCHECKRESOURCESTATUSREQUEST_H
#define QTAWS_GETREADINESSCHECKRESOURCESTATUSREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetReadinessCheckResourceStatusRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetReadinessCheckResourceStatusRequest : public Route53RecoveryReadinessRequest {

public:
    GetReadinessCheckResourceStatusRequest(const GetReadinessCheckResourceStatusRequest &other);
    GetReadinessCheckResourceStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReadinessCheckResourceStatusRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
