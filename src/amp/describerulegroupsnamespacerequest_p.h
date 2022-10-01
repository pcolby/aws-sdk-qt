// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULEGROUPSNAMESPACEREQUEST_P_H
#define QTAWS_DESCRIBERULEGROUPSNAMESPACEREQUEST_P_H

#include "amprequest_p.h"
#include "describerulegroupsnamespacerequest.h"

namespace QtAws {
namespace Amp {

class DescribeRuleGroupsNamespaceRequest;

class DescribeRuleGroupsNamespaceRequestPrivate : public AmpRequestPrivate {

public:
    DescribeRuleGroupsNamespaceRequestPrivate(const AmpRequest::Action action,
                                   DescribeRuleGroupsNamespaceRequest * const q);
    DescribeRuleGroupsNamespaceRequestPrivate(const DescribeRuleGroupsNamespaceRequestPrivate &other,
                                   DescribeRuleGroupsNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRuleGroupsNamespaceRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
