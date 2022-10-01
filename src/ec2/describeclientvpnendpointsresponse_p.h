// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNENDPOINTSRESPONSE_P_H
#define QTAWS_DESCRIBECLIENTVPNENDPOINTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnEndpointsResponse;

class DescribeClientVpnEndpointsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeClientVpnEndpointsResponsePrivate(DescribeClientVpnEndpointsResponse * const q);

    void parseDescribeClientVpnEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClientVpnEndpointsResponse)
    Q_DISABLE_COPY(DescribeClientVpnEndpointsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
