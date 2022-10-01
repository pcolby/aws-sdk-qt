// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCESETREQUEST_H
#define QTAWS_CREATERESOURCESETREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateResourceSetRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT CreateResourceSetRequest : public Route53RecoveryReadinessRequest {

public:
    CreateResourceSetRequest(const CreateResourceSetRequest &other);
    CreateResourceSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceSetRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
