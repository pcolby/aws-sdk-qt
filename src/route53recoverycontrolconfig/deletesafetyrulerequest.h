// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESAFETYRULEREQUEST_H
#define QTAWS_DELETESAFETYRULEREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DeleteSafetyRuleRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT DeleteSafetyRuleRequest : public Route53RecoveryControlConfigRequest {

public:
    DeleteSafetyRuleRequest(const DeleteSafetyRuleRequest &other);
    DeleteSafetyRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSafetyRuleRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
