// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREADINESSCHECKREQUEST_H
#define QTAWS_CREATEREADINESSCHECKREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateReadinessCheckRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT CreateReadinessCheckRequest : public Route53RecoveryReadinessRequest {

public:
    CreateReadinessCheckRequest(const CreateReadinessCheckRequest &other);
    CreateReadinessCheckRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReadinessCheckRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
