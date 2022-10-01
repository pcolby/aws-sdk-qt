// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLASSICLINKINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBECLASSICLINKINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeClassicLinkInstancesResponse;

class DescribeClassicLinkInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeClassicLinkInstancesResponsePrivate(DescribeClassicLinkInstancesResponse * const q);

    void parseDescribeClassicLinkInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClassicLinkInstancesResponse)
    Q_DISABLE_COPY(DescribeClassicLinkInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
