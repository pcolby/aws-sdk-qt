// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCCLASSICLINKDNSSUPPORTRESPONSE_P_H
#define QTAWS_DESCRIBEVPCCLASSICLINKDNSSUPPORTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcClassicLinkDnsSupportResponse;

class DescribeVpcClassicLinkDnsSupportResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVpcClassicLinkDnsSupportResponsePrivate(DescribeVpcClassicLinkDnsSupportResponse * const q);

    void parseDescribeVpcClassicLinkDnsSupportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpcClassicLinkDnsSupportResponse)
    Q_DISABLE_COPY(DescribeVpcClassicLinkDnsSupportResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
