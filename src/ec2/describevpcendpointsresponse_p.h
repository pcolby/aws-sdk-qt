// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSRESPONSE_P_H
#define QTAWS_DESCRIBEVPCENDPOINTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointsResponse;

class DescribeVpcEndpointsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVpcEndpointsResponsePrivate(DescribeVpcEndpointsResponse * const q);

    void parseDescribeVpcEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpcEndpointsResponse)
    Q_DISABLE_COPY(DescribeVpcEndpointsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
