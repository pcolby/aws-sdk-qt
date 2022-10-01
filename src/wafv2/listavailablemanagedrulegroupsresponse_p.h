// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEMANAGEDRULEGROUPSRESPONSE_P_H
#define QTAWS_LISTAVAILABLEMANAGEDRULEGROUPSRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class ListAvailableManagedRuleGroupsResponse;

class ListAvailableManagedRuleGroupsResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit ListAvailableManagedRuleGroupsResponsePrivate(ListAvailableManagedRuleGroupsResponse * const q);

    void parseListAvailableManagedRuleGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAvailableManagedRuleGroupsResponse)
    Q_DISABLE_COPY(ListAvailableManagedRuleGroupsResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
