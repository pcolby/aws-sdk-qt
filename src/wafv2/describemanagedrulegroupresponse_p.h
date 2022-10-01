// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMANAGEDRULEGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEMANAGEDRULEGROUPRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class DescribeManagedRuleGroupResponse;

class DescribeManagedRuleGroupResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit DescribeManagedRuleGroupResponsePrivate(DescribeManagedRuleGroupResponse * const q);

    void parseDescribeManagedRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeManagedRuleGroupResponse)
    Q_DISABLE_COPY(DescribeManagedRuleGroupResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
