// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAFETYRULERESPONSE_H
#define QTAWS_CREATESAFETYRULERESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "createsafetyrulerequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class CreateSafetyRuleResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT CreateSafetyRuleResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    CreateSafetyRuleResponse(const CreateSafetyRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSafetyRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSafetyRuleResponse)
    Q_DISABLE_COPY(CreateSafetyRuleResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
