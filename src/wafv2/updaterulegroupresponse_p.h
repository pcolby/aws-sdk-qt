// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEGROUPRESPONSE_P_H
#define QTAWS_UPDATERULEGROUPRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class UpdateRuleGroupResponse;

class UpdateRuleGroupResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit UpdateRuleGroupResponsePrivate(UpdateRuleGroupResponse * const q);

    void parseUpdateRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRuleGroupResponse)
    Q_DISABLE_COPY(UpdateRuleGroupResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
