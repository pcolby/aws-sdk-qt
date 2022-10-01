// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULEGROUPSNAMESPACESRESPONSE_P_H
#define QTAWS_LISTRULEGROUPSNAMESPACESRESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class ListRuleGroupsNamespacesResponse;

class ListRuleGroupsNamespacesResponsePrivate : public AmpResponsePrivate {

public:

    explicit ListRuleGroupsNamespacesResponsePrivate(ListRuleGroupsNamespacesResponse * const q);

    void parseListRuleGroupsNamespacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRuleGroupsNamespacesResponse)
    Q_DISABLE_COPY(ListRuleGroupsNamespacesResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
