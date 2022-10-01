// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULEGROUPRESPONSE_P_H
#define QTAWS_GETRULEGROUPRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetRuleGroupResponse;

class GetRuleGroupResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetRuleGroupResponsePrivate(GetRuleGroupResponse * const q);

    void parseGetRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRuleGroupResponse)
    Q_DISABLE_COPY(GetRuleGroupResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
