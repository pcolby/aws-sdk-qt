// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSREQUEST_P_H
#define QTAWS_DESCRIBESNAPSHOTSREQUEST_P_H

#include "ec2request_p.h"
#include "describesnapshotsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSnapshotsRequest;

class DescribeSnapshotsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeSnapshotsRequestPrivate(const Ec2Request::Action action,
                                   DescribeSnapshotsRequest * const q);
    DescribeSnapshotsRequestPrivate(const DescribeSnapshotsRequestPrivate &other,
                                   DescribeSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
