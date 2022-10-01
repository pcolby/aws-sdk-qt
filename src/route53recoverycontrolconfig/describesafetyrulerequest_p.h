// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAFETYRULEREQUEST_P_H
#define QTAWS_DESCRIBESAFETYRULEREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "describesafetyrulerequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeSafetyRuleRequest;

class DescribeSafetyRuleRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    DescribeSafetyRuleRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   DescribeSafetyRuleRequest * const q);
    DescribeSafetyRuleRequestPrivate(const DescribeSafetyRuleRequestPrivate &other,
                                   DescribeSafetyRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSafetyRuleRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
