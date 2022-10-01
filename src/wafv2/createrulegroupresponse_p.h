// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEGROUPRESPONSE_P_H
#define QTAWS_CREATERULEGROUPRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class CreateRuleGroupResponse;

class CreateRuleGroupResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit CreateRuleGroupResponsePrivate(CreateRuleGroupResponse * const q);

    void parseCreateRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRuleGroupResponse)
    Q_DISABLE_COPY(CreateRuleGroupResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
