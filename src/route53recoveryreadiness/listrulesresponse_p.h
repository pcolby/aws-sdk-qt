// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESRESPONSE_P_H
#define QTAWS_LISTRULESRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListRulesResponse;

class ListRulesResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit ListRulesResponsePrivate(ListRulesResponse * const q);

    void parseListRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRulesResponse)
    Q_DISABLE_COPY(ListRulesResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
