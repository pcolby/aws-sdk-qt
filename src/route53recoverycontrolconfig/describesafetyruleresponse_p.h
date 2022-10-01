// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAFETYRULERESPONSE_P_H
#define QTAWS_DESCRIBESAFETYRULERESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeSafetyRuleResponse;

class DescribeSafetyRuleResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit DescribeSafetyRuleResponsePrivate(DescribeSafetyRuleResponse * const q);

    void parseDescribeSafetyRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSafetyRuleResponse)
    Q_DISABLE_COPY(DescribeSafetyRuleResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
