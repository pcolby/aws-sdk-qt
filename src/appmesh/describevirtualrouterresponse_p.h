// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALROUTERRESPONSE_P_H
#define QTAWS_DESCRIBEVIRTUALROUTERRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualRouterResponse;

class DescribeVirtualRouterResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit DescribeVirtualRouterResponsePrivate(DescribeVirtualRouterResponse * const q);

    void parseDescribeVirtualRouterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualRouterResponse)
    Q_DISABLE_COPY(DescribeVirtualRouterResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
