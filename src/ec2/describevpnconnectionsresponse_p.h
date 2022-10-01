// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPNCONNECTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEVPNCONNECTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpnConnectionsResponse;

class DescribeVpnConnectionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVpnConnectionsResponsePrivate(DescribeVpnConnectionsResponse * const q);

    void parseDescribeVpnConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpnConnectionsResponse)
    Q_DISABLE_COPY(DescribeVpnConnectionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
