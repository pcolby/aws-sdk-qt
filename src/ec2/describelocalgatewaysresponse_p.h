// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYSRESPONSE_P_H
#define QTAWS_DESCRIBELOCALGATEWAYSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewaysResponse;

class DescribeLocalGatewaysResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeLocalGatewaysResponsePrivate(DescribeLocalGatewaysResponse * const q);

    void parseDescribeLocalGatewaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocalGatewaysResponse)
    Q_DISABLE_COPY(DescribeLocalGatewaysResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
