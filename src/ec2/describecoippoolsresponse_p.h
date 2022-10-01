// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOIPPOOLSRESPONSE_P_H
#define QTAWS_DESCRIBECOIPPOOLSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeCoipPoolsResponse;

class DescribeCoipPoolsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeCoipPoolsResponsePrivate(DescribeCoipPoolsResponse * const q);

    void parseDescribeCoipPoolsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCoipPoolsResponse)
    Q_DISABLE_COPY(DescribeCoipPoolsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
