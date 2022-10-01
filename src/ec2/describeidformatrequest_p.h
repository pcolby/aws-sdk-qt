// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDFORMATREQUEST_P_H
#define QTAWS_DESCRIBEIDFORMATREQUEST_P_H

#include "ec2request_p.h"
#include "describeidformatrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeIdFormatRequest;

class DescribeIdFormatRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeIdFormatRequestPrivate(const Ec2Request::Action action,
                                   DescribeIdFormatRequest * const q);
    DescribeIdFormatRequestPrivate(const DescribeIdFormatRequestPrivate &other,
                                   DescribeIdFormatRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIdFormatRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
