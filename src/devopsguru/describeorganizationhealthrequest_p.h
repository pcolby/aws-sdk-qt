// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONHEALTHREQUEST_P_H
#define QTAWS_DESCRIBEORGANIZATIONHEALTHREQUEST_P_H

#include "devopsgururequest_p.h"
#include "describeorganizationhealthrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeOrganizationHealthRequest;

class DescribeOrganizationHealthRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    DescribeOrganizationHealthRequestPrivate(const DevOpsGuruRequest::Action action,
                                   DescribeOrganizationHealthRequest * const q);
    DescribeOrganizationHealthRequestPrivate(const DescribeOrganizationHealthRequestPrivate &other,
                                   DescribeOrganizationHealthRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationHealthRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
