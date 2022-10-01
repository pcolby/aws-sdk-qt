// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIBEDRULEGROUPSRESPONSE_P_H
#define QTAWS_LISTSUBSCRIBEDRULEGROUPSRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class ListSubscribedRuleGroupsResponse;

class ListSubscribedRuleGroupsResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit ListSubscribedRuleGroupsResponsePrivate(ListSubscribedRuleGroupsResponse * const q);

    void parseListSubscribedRuleGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSubscribedRuleGroupsResponse)
    Q_DISABLE_COPY(ListSubscribedRuleGroupsResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
