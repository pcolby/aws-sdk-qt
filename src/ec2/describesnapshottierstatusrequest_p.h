// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTTIERSTATUSREQUEST_P_H
#define QTAWS_DESCRIBESNAPSHOTTIERSTATUSREQUEST_P_H

#include "ec2request_p.h"
#include "describesnapshottierstatusrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSnapshotTierStatusRequest;

class DescribeSnapshotTierStatusRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeSnapshotTierStatusRequestPrivate(const Ec2Request::Action action,
                                   DescribeSnapshotTierStatusRequest * const q);
    DescribeSnapshotTierStatusRequestPrivate(const DescribeSnapshotTierStatusRequestPrivate &other,
                                   DescribeSnapshotTierStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotTierStatusRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
