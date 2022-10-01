// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERREQUEST_P_H

#include "snowballrequest_p.h"
#include "describeclusterrequest.h"

namespace QtAws {
namespace Snowball {

class DescribeClusterRequest;

class DescribeClusterRequestPrivate : public SnowballRequestPrivate {

public:
    DescribeClusterRequestPrivate(const SnowballRequest::Action action,
                                   DescribeClusterRequest * const q);
    DescribeClusterRequestPrivate(const DescribeClusterRequestPrivate &other,
                                   DescribeClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClusterRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
