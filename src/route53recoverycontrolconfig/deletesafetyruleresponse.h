// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESAFETYRULERESPONSE_H
#define QTAWS_DELETESAFETYRULERESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "deletesafetyrulerequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DeleteSafetyRuleResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT DeleteSafetyRuleResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    DeleteSafetyRuleResponse(const DeleteSafetyRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSafetyRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSafetyRuleResponse)
    Q_DISABLE_COPY(DeleteSafetyRuleResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
