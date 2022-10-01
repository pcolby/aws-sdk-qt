// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERREQUEST_P_H

#include "emrrequest_p.h"
#include "describeclusterrequest.h"

namespace QtAws {
namespace Emr {

class DescribeClusterRequest;

class DescribeClusterRequestPrivate : public EmrRequestPrivate {

public:
    DescribeClusterRequestPrivate(const EmrRequest::Action action,
                                   DescribeClusterRequest * const q);
    DescribeClusterRequestPrivate(const DescribeClusterRequestPrivate &other,
                                   DescribeClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClusterRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
