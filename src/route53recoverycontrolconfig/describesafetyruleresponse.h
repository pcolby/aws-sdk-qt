// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAFETYRULERESPONSE_H
#define QTAWS_DESCRIBESAFETYRULERESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "describesafetyrulerequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeSafetyRuleResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT DescribeSafetyRuleResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    DescribeSafetyRuleResponse(const DescribeSafetyRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSafetyRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSafetyRuleResponse)
    Q_DISABLE_COPY(DescribeSafetyRuleResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
