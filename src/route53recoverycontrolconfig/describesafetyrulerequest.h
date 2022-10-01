// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAFETYRULEREQUEST_H
#define QTAWS_DESCRIBESAFETYRULEREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeSafetyRuleRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT DescribeSafetyRuleRequest : public Route53RecoveryControlConfigRequest {

public:
    DescribeSafetyRuleRequest(const DescribeSafetyRuleRequest &other);
    DescribeSafetyRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSafetyRuleRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
