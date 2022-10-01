// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESAFETYRULERESPONSE_P_H
#define QTAWS_DELETESAFETYRULERESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DeleteSafetyRuleResponse;

class DeleteSafetyRuleResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit DeleteSafetyRuleResponsePrivate(DeleteSafetyRuleResponse * const q);

    void parseDeleteSafetyRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSafetyRuleResponse)
    Q_DISABLE_COPY(DeleteSafetyRuleResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
