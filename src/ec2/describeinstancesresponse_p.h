// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstancesResponse;

class DescribeInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeInstancesResponsePrivate(DescribeInstancesResponse * const q);

    void parseDescribeInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstancesResponse)
    Q_DISABLE_COPY(DescribeInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
