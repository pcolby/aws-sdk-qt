// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMEATTRIBUTEREQUEST_P_H
#define QTAWS_DESCRIBEVOLUMEATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "describevolumeattributerequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVolumeAttributeRequest;

class DescribeVolumeAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVolumeAttributeRequestPrivate(const Ec2Request::Action action,
                                   DescribeVolumeAttributeRequest * const q);
    DescribeVolumeAttributeRequestPrivate(const DescribeVolumeAttributeRequestPrivate &other,
                                   DescribeVolumeAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVolumeAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
