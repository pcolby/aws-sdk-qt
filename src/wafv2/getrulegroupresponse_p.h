// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULEGROUPRESPONSE_P_H
#define QTAWS_GETRULEGROUPRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class GetRuleGroupResponse;

class GetRuleGroupResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit GetRuleGroupResponsePrivate(GetRuleGroupResponse * const q);

    void parseGetRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRuleGroupResponse)
    Q_DISABLE_COPY(GetRuleGroupResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
