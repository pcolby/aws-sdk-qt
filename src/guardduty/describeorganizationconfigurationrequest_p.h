// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "describeorganizationconfigurationrequest.h"

namespace QtAws {
namespace GuardDuty {

class DescribeOrganizationConfigurationRequest;

class DescribeOrganizationConfigurationRequestPrivate : public GuardDutyRequestPrivate {

public:
    DescribeOrganizationConfigurationRequestPrivate(const GuardDutyRequest::Action action,
                                   DescribeOrganizationConfigurationRequest * const q);
    DescribeOrganizationConfigurationRequestPrivate(const DescribeOrganizationConfigurationRequestPrivate &other,
                                   DescribeOrganizationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationConfigurationRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
