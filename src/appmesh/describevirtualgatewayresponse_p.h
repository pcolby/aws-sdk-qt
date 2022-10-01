// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALGATEWAYRESPONSE_P_H
#define QTAWS_DESCRIBEVIRTUALGATEWAYRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualGatewayResponse;

class DescribeVirtualGatewayResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit DescribeVirtualGatewayResponsePrivate(DescribeVirtualGatewayResponse * const q);

    void parseDescribeVirtualGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualGatewayResponse)
    Q_DISABLE_COPY(DescribeVirtualGatewayResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
