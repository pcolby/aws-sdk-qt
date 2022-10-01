// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEGROUPRESPONSE_P_H
#define QTAWS_CREATERULEGROUPRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class CreateRuleGroupResponse;

class CreateRuleGroupResponsePrivate : public WafResponsePrivate {

public:

    explicit CreateRuleGroupResponsePrivate(CreateRuleGroupResponse * const q);

    void parseCreateRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRuleGroupResponse)
    Q_DISABLE_COPY(CreateRuleGroupResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
