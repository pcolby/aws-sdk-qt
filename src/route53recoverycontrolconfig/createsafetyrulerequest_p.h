// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAFETYRULEREQUEST_P_H
#define QTAWS_CREATESAFETYRULEREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "createsafetyrulerequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class CreateSafetyRuleRequest;

class CreateSafetyRuleRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    CreateSafetyRuleRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   CreateSafetyRuleRequest * const q);
    CreateSafetyRuleRequestPrivate(const CreateSafetyRuleRequestPrivate &other,
                                   CreateSafetyRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSafetyRuleRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
