// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESETREQUEST_H
#define QTAWS_GETRESOURCESETREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetResourceSetRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT GetResourceSetRequest : public Route53RecoveryReadinessRequest {

public:
    GetResourceSetRequest(const GetResourceSetRequest &other);
    GetResourceSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceSetRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
