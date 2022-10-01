// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULEGROUPRESPONSE_P_H
#define QTAWS_GETRULEGROUPRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class GetRuleGroupResponse;

class GetRuleGroupResponsePrivate : public WafResponsePrivate {

public:

    explicit GetRuleGroupResponsePrivate(GetRuleGroupResponse * const q);

    void parseGetRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRuleGroupResponse)
    Q_DISABLE_COPY(GetRuleGroupResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
