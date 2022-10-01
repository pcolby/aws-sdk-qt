// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAFETYRULESRESPONSE_P_H
#define QTAWS_LISTSAFETYRULESRESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListSafetyRulesResponse;

class ListSafetyRulesResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit ListSafetyRulesResponsePrivate(ListSafetyRulesResponse * const q);

    void parseListSafetyRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSafetyRulesResponse)
    Q_DISABLE_COPY(ListSafetyRulesResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
