// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESAFETYRULEREQUEST_H
#define QTAWS_UPDATESAFETYRULEREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class UpdateSafetyRuleRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT UpdateSafetyRuleRequest : public Route53RecoveryControlConfigRequest {

public:
    UpdateSafetyRuleRequest(const UpdateSafetyRuleRequest &other);
    UpdateSafetyRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSafetyRuleRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
