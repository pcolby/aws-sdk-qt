// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAFFECTEDACCOUNTSFORORGANIZATIONREQUEST_P_H
#define QTAWS_DESCRIBEAFFECTEDACCOUNTSFORORGANIZATIONREQUEST_P_H

#include "healthrequest_p.h"
#include "describeaffectedaccountsfororganizationrequest.h"

namespace QtAws {
namespace Health {

class DescribeAffectedAccountsForOrganizationRequest;

class DescribeAffectedAccountsForOrganizationRequestPrivate : public HealthRequestPrivate {

public:
    DescribeAffectedAccountsForOrganizationRequestPrivate(const HealthRequest::Action action,
                                   DescribeAffectedAccountsForOrganizationRequest * const q);
    DescribeAffectedAccountsForOrganizationRequestPrivate(const DescribeAffectedAccountsForOrganizationRequestPrivate &other,
                                   DescribeAffectedAccountsForOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAffectedAccountsForOrganizationRequest)

};

} // namespace Health
} // namespace QtAws

#endif
