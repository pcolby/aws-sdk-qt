// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALSERVICEREQUEST_P_H
#define QTAWS_DESCRIBEVIRTUALSERVICEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "describevirtualservicerequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualServiceRequest;

class DescribeVirtualServiceRequestPrivate : public AppMeshRequestPrivate {

public:
    DescribeVirtualServiceRequestPrivate(const AppMeshRequest::Action action,
                                   DescribeVirtualServiceRequest * const q);
    DescribeVirtualServiceRequestPrivate(const DescribeVirtualServiceRequestPrivate &other,
                                   DescribeVirtualServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualServiceRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
