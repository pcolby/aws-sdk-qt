// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULESPACKAGESREQUEST_P_H
#define QTAWS_DESCRIBERULESPACKAGESREQUEST_P_H

#include "inspectorrequest_p.h"
#include "describerulespackagesrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeRulesPackagesRequest;

class DescribeRulesPackagesRequestPrivate : public InspectorRequestPrivate {

public:
    DescribeRulesPackagesRequestPrivate(const InspectorRequest::Action action,
                                   DescribeRulesPackagesRequest * const q);
    DescribeRulesPackagesRequestPrivate(const DescribeRulesPackagesRequestPrivate &other,
                                   DescribeRulesPackagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRulesPackagesRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
