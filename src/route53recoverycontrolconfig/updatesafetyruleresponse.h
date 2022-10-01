// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESAFETYRULERESPONSE_H
#define QTAWS_UPDATESAFETYRULERESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "updatesafetyrulerequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class UpdateSafetyRuleResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT UpdateSafetyRuleResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    UpdateSafetyRuleResponse(const UpdateSafetyRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSafetyRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSafetyRuleResponse)
    Q_DISABLE_COPY(UpdateSafetyRuleResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
