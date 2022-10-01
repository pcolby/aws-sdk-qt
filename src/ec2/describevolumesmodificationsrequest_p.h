// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMESMODIFICATIONSREQUEST_P_H
#define QTAWS_DESCRIBEVOLUMESMODIFICATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describevolumesmodificationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVolumesModificationsRequest;

class DescribeVolumesModificationsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVolumesModificationsRequestPrivate(const Ec2Request::Action action,
                                   DescribeVolumesModificationsRequest * const q);
    DescribeVolumesModificationsRequestPrivate(const DescribeVolumesModificationsRequestPrivate &other,
                                   DescribeVolumesModificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVolumesModificationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
