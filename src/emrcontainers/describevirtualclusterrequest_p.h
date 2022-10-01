// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALCLUSTERREQUEST_P_H
#define QTAWS_DESCRIBEVIRTUALCLUSTERREQUEST_P_H

#include "emrcontainersrequest_p.h"
#include "describevirtualclusterrequest.h"

namespace QtAws {
namespace Emrcontainers {

class DescribeVirtualClusterRequest;

class DescribeVirtualClusterRequestPrivate : public EmrcontainersRequestPrivate {

public:
    DescribeVirtualClusterRequestPrivate(const EmrcontainersRequest::Action action,
                                   DescribeVirtualClusterRequest * const q);
    DescribeVirtualClusterRequestPrivate(const DescribeVirtualClusterRequestPrivate &other,
                                   DescribeVirtualClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualClusterRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
