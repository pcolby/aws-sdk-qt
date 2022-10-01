// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGRULESTATUSESREQUEST_P_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGRULESTATUSESREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeorganizationconfigrulestatusesrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConfigRuleStatusesRequest;

class DescribeOrganizationConfigRuleStatusesRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeOrganizationConfigRuleStatusesRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeOrganizationConfigRuleStatusesRequest * const q);
    DescribeOrganizationConfigRuleStatusesRequestPrivate(const DescribeOrganizationConfigRuleStatusesRequestPrivate &other,
                                   DescribeOrganizationConfigRuleStatusesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationConfigRuleStatusesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
