// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTATTRIBUTEREQUEST_P_H
#define QTAWS_DESCRIBESNAPSHOTATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "describesnapshotattributerequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSnapshotAttributeRequest;

class DescribeSnapshotAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeSnapshotAttributeRequestPrivate(const Ec2Request::Action action,
                                   DescribeSnapshotAttributeRequest * const q);
    DescribeSnapshotAttributeRequestPrivate(const DescribeSnapshotAttributeRequestPrivate &other,
                                   DescribeSnapshotAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
