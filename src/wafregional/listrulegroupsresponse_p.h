// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULEGROUPSRESPONSE_P_H
#define QTAWS_LISTRULEGROUPSRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class ListRuleGroupsResponse;

class ListRuleGroupsResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit ListRuleGroupsResponsePrivate(ListRuleGroupsResponse * const q);

    void parseListRuleGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRuleGroupsResponse)
    Q_DISABLE_COPY(ListRuleGroupsResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
