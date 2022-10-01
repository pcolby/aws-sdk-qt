// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULESETREQUEST_P_H
#define QTAWS_DESCRIBERULESETREQUEST_P_H

#include "databrewrequest_p.h"
#include "describerulesetrequest.h"

namespace QtAws {
namespace DataBrew {

class DescribeRulesetRequest;

class DescribeRulesetRequestPrivate : public DataBrewRequestPrivate {

public:
    DescribeRulesetRequestPrivate(const DataBrewRequest::Action action,
                                   DescribeRulesetRequest * const q);
    DescribeRulesetRequestPrivate(const DescribeRulesetRequestPrivate &other,
                                   DescribeRulesetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRulesetRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
