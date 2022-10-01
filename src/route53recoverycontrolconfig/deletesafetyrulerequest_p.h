// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESAFETYRULEREQUEST_P_H
#define QTAWS_DELETESAFETYRULEREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "deletesafetyrulerequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DeleteSafetyRuleRequest;

class DeleteSafetyRuleRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    DeleteSafetyRuleRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   DeleteSafetyRuleRequest * const q);
    DeleteSafetyRuleRequestPrivate(const DeleteSafetyRuleRequestPrivate &other,
                                   DeleteSafetyRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSafetyRuleRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
