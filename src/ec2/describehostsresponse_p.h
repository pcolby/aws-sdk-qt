// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTSRESPONSE_P_H
#define QTAWS_DESCRIBEHOSTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeHostsResponse;

class DescribeHostsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeHostsResponsePrivate(DescribeHostsResponse * const q);

    void parseDescribeHostsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHostsResponse)
    Q_DISABLE_COPY(DescribeHostsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
