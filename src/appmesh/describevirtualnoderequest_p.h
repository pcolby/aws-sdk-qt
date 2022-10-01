// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALNODEREQUEST_P_H
#define QTAWS_DESCRIBEVIRTUALNODEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "describevirtualnoderequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualNodeRequest;

class DescribeVirtualNodeRequestPrivate : public AppMeshRequestPrivate {

public:
    DescribeVirtualNodeRequestPrivate(const AppMeshRequest::Action action,
                                   DescribeVirtualNodeRequest * const q);
    DescribeVirtualNodeRequestPrivate(const DescribeVirtualNodeRequestPrivate &other,
                                   DescribeVirtualNodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualNodeRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
