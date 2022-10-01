// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLACEMENTGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEPLACEMENTGROUPSREQUEST_P_H

#include "ec2request_p.h"
#include "describeplacementgroupsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribePlacementGroupsRequest;

class DescribePlacementGroupsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribePlacementGroupsRequestPrivate(const Ec2Request::Action action,
                                   DescribePlacementGroupsRequest * const q);
    DescribePlacementGroupsRequestPrivate(const DescribePlacementGroupsRequestPrivate &other,
                                   DescribePlacementGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePlacementGroupsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
