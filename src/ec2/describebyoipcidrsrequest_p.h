// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBYOIPCIDRSREQUEST_P_H
#define QTAWS_DESCRIBEBYOIPCIDRSREQUEST_P_H

#include "ec2request_p.h"
#include "describebyoipcidrsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeByoipCidrsRequest;

class DescribeByoipCidrsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeByoipCidrsRequestPrivate(const Ec2Request::Action action,
                                   DescribeByoipCidrsRequest * const q);
    DescribeByoipCidrsRequestPrivate(const DescribeByoipCidrsRequestPrivate &other,
                                   DescribeByoipCidrsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeByoipCidrsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
