// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESAFETYRULEREQUEST_P_H
#define QTAWS_UPDATESAFETYRULEREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "updatesafetyrulerequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class UpdateSafetyRuleRequest;

class UpdateSafetyRuleRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    UpdateSafetyRuleRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   UpdateSafetyRuleRequest * const q);
    UpdateSafetyRuleRequestPrivate(const UpdateSafetyRuleRequestPrivate &other,
                                   UpdateSafetyRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSafetyRuleRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
