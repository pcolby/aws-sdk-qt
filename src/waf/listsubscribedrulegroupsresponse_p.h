// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIBEDRULEGROUPSRESPONSE_P_H
#define QTAWS_LISTSUBSCRIBEDRULEGROUPSRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class ListSubscribedRuleGroupsResponse;

class ListSubscribedRuleGroupsResponsePrivate : public WafResponsePrivate {

public:

    explicit ListSubscribedRuleGroupsResponsePrivate(ListSubscribedRuleGroupsResponse * const q);

    void parseListSubscribedRuleGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSubscribedRuleGroupsResponse)
    Q_DISABLE_COPY(ListSubscribedRuleGroupsResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
