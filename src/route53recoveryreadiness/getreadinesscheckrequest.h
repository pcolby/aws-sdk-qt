// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREADINESSCHECKREQUEST_H
#define QTAWS_GETREADINESSCHECKREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetReadinessCheckRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetReadinessCheckRequest : public Route53RecoveryReadinessRequest {

public:
    GetReadinessCheckRequest(const GetReadinessCheckRequest &other);
    GetReadinessCheckRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReadinessCheckRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
