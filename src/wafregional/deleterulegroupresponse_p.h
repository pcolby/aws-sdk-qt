// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEGROUPRESPONSE_P_H
#define QTAWS_DELETERULEGROUPRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class DeleteRuleGroupResponse;

class DeleteRuleGroupResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit DeleteRuleGroupResponsePrivate(DeleteRuleGroupResponse * const q);

    void parseDeleteRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRuleGroupResponse)
    Q_DISABLE_COPY(DeleteRuleGroupResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
