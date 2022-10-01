// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGIONSRESPONSE_P_H
#define QTAWS_DESCRIBEREGIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeRegionsResponse;

class DescribeRegionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeRegionsResponsePrivate(DescribeRegionsResponse * const q);

    void parseDescribeRegionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRegionsResponse)
    Q_DISABLE_COPY(DescribeRegionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
