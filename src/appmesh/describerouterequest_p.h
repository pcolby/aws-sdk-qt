// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTEREQUEST_P_H
#define QTAWS_DESCRIBEROUTEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "describerouterequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeRouteRequest;

class DescribeRouteRequestPrivate : public AppMeshRequestPrivate {

public:
    DescribeRouteRequestPrivate(const AppMeshRequest::Action action,
                                   DescribeRouteRequest * const q);
    DescribeRouteRequestPrivate(const DescribeRouteRequestPrivate &other,
                                   DescribeRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRouteRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
