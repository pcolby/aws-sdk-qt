// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYPAIRSREQUEST_P_H
#define QTAWS_DESCRIBEKEYPAIRSREQUEST_P_H

#include "ec2request_p.h"
#include "describekeypairsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeKeyPairsRequest;

class DescribeKeyPairsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeKeyPairsRequestPrivate(const Ec2Request::Action action,
                                   DescribeKeyPairsRequest * const q);
    DescribeKeyPairsRequestPrivate(const DescribeKeyPairsRequestPrivate &other,
                                   DescribeKeyPairsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeKeyPairsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
