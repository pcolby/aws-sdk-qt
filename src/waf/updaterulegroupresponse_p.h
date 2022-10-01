// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEGROUPRESPONSE_P_H
#define QTAWS_UPDATERULEGROUPRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class UpdateRuleGroupResponse;

class UpdateRuleGroupResponsePrivate : public WafResponsePrivate {

public:

    explicit UpdateRuleGroupResponsePrivate(UpdateRuleGroupResponse * const q);

    void parseUpdateRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRuleGroupResponse)
    Q_DISABLE_COPY(UpdateRuleGroupResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
