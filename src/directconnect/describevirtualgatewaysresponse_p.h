// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALGATEWAYSRESPONSE_P_H
#define QTAWS_DESCRIBEVIRTUALGATEWAYSRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeVirtualGatewaysResponse;

class DescribeVirtualGatewaysResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeVirtualGatewaysResponsePrivate(DescribeVirtualGatewaysResponse * const q);

    void parseDescribeVirtualGatewaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualGatewaysResponse)
    Q_DISABLE_COPY(DescribeVirtualGatewaysResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
