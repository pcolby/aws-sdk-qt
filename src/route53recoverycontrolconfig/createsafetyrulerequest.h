// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAFETYRULEREQUEST_H
#define QTAWS_CREATESAFETYRULEREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class CreateSafetyRuleRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT CreateSafetyRuleRequest : public Route53RecoveryControlConfigRequest {

public:
    CreateSafetyRuleRequest(const CreateSafetyRuleRequest &other);
    CreateSafetyRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSafetyRuleRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
