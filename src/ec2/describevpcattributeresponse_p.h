// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCATTRIBUTERESPONSE_P_H
#define QTAWS_DESCRIBEVPCATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcAttributeResponse;

class DescribeVpcAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVpcAttributeResponsePrivate(DescribeVpcAttributeResponse * const q);

    void parseDescribeVpcAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpcAttributeResponse)
    Q_DISABLE_COPY(DescribeVpcAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
