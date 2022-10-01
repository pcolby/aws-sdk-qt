// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEMANAGEDRULEGROUPVERSIONSRESPONSE_P_H
#define QTAWS_LISTAVAILABLEMANAGEDRULEGROUPVERSIONSRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class ListAvailableManagedRuleGroupVersionsResponse;

class ListAvailableManagedRuleGroupVersionsResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit ListAvailableManagedRuleGroupVersionsResponsePrivate(ListAvailableManagedRuleGroupVersionsResponse * const q);

    void parseListAvailableManagedRuleGroupVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAvailableManagedRuleGroupVersionsResponse)
    Q_DISABLE_COPY(ListAvailableManagedRuleGroupVersionsResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
