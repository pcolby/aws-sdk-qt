// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGRULESREQUEST_P_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGRULESREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeorganizationconfigrulesrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConfigRulesRequest;

class DescribeOrganizationConfigRulesRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeOrganizationConfigRulesRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeOrganizationConfigRulesRequest * const q);
    DescribeOrganizationConfigRulesRequestPrivate(const DescribeOrganizationConfigRulesRequestPrivate &other,
                                   DescribeOrganizationConfigRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationConfigRulesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
