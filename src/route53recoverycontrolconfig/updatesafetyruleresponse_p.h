// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESAFETYRULERESPONSE_P_H
#define QTAWS_UPDATESAFETYRULERESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class UpdateSafetyRuleResponse;

class UpdateSafetyRuleResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit UpdateSafetyRuleResponsePrivate(UpdateSafetyRuleResponse * const q);

    void parseUpdateSafetyRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSafetyRuleResponse)
    Q_DISABLE_COPY(UpdateSafetyRuleResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
