// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONRESOURCECOLLECTIONHEALTHREQUEST_P_H
#define QTAWS_DESCRIBEORGANIZATIONRESOURCECOLLECTIONHEALTHREQUEST_P_H

#include "devopsgururequest_p.h"
#include "describeorganizationresourcecollectionhealthrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeOrganizationResourceCollectionHealthRequest;

class DescribeOrganizationResourceCollectionHealthRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    DescribeOrganizationResourceCollectionHealthRequestPrivate(const DevOpsGuruRequest::Action action,
                                   DescribeOrganizationResourceCollectionHealthRequest * const q);
    DescribeOrganizationResourceCollectionHealthRequestPrivate(const DescribeOrganizationResourceCollectionHealthRequestPrivate &other,
                                   DescribeOrganizationResourceCollectionHealthRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationResourceCollectionHealthRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
