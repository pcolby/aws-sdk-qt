// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCCLASSICLINKRESPONSE_P_H
#define QTAWS_DESCRIBEVPCCLASSICLINKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcClassicLinkResponse;

class DescribeVpcClassicLinkResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVpcClassicLinkResponsePrivate(DescribeVpcClassicLinkResponse * const q);

    void parseDescribeVpcClassicLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpcClassicLinkResponse)
    Q_DISABLE_COPY(DescribeVpcClassicLinkResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
