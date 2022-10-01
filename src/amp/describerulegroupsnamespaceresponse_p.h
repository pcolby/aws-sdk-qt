// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULEGROUPSNAMESPACERESPONSE_P_H
#define QTAWS_DESCRIBERULEGROUPSNAMESPACERESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class DescribeRuleGroupsNamespaceResponse;

class DescribeRuleGroupsNamespaceResponsePrivate : public AmpResponsePrivate {

public:

    explicit DescribeRuleGroupsNamespaceResponsePrivate(DescribeRuleGroupsNamespaceResponse * const q);

    void parseDescribeRuleGroupsNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRuleGroupsNamespaceResponse)
    Q_DISABLE_COPY(DescribeRuleGroupsNamespaceResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
