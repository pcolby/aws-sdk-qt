// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGESREQUEST_P_H
#define QTAWS_DESCRIBEIMAGESREQUEST_P_H

#include "ec2request_p.h"
#include "describeimagesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeImagesRequest;

class DescribeImagesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeImagesRequestPrivate(const Ec2Request::Action action,
                                   DescribeImagesRequest * const q);
    DescribeImagesRequestPrivate(const DescribeImagesRequestPrivate &other,
                                   DescribeImagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImagesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
