// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCESTATUSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceStatusResponse;

class DescribeInstanceStatusResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeInstanceStatusResponsePrivate(DescribeInstanceStatusResponse * const q);

    void parseDescribeInstanceStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceStatusResponse)
    Q_DISABLE_COPY(DescribeInstanceStatusResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
