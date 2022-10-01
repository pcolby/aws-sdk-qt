// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTERESPONSE_P_H
#define QTAWS_DESCRIBEROUTERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class DescribeRouteResponse;

class DescribeRouteResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit DescribeRouteResponsePrivate(DescribeRouteResponse * const q);

    void parseDescribeRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRouteResponse)
    Q_DISABLE_COPY(DescribeRouteResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
