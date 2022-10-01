// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONREQUEST_P_H

#include "macie2request_p.h"
#include "describeorganizationconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class DescribeOrganizationConfigurationRequest;

class DescribeOrganizationConfigurationRequestPrivate : public Macie2RequestPrivate {

public:
    DescribeOrganizationConfigurationRequestPrivate(const Macie2Request::Action action,
                                   DescribeOrganizationConfigurationRequest * const q);
    DescribeOrganizationConfigurationRequestPrivate(const DescribeOrganizationConfigurationRequestPrivate &other,
                                   DescribeOrganizationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
