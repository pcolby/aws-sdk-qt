// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALROUTERREQUEST_P_H
#define QTAWS_DESCRIBEVIRTUALROUTERREQUEST_P_H

#include "appmeshrequest_p.h"
#include "describevirtualrouterrequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualRouterRequest;

class DescribeVirtualRouterRequestPrivate : public AppMeshRequestPrivate {

public:
    DescribeVirtualRouterRequestPrivate(const AppMeshRequest::Action action,
                                   DescribeVirtualRouterRequest * const q);
    DescribeVirtualRouterRequestPrivate(const DescribeVirtualRouterRequestPrivate &other,
                                   DescribeVirtualRouterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualRouterRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
