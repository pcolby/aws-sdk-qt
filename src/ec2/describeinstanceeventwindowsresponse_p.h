// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEEVENTWINDOWSRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCEEVENTWINDOWSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceEventWindowsResponse;

class DescribeInstanceEventWindowsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeInstanceEventWindowsResponsePrivate(DescribeInstanceEventWindowsResponse * const q);

    void parseDescribeInstanceEventWindowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceEventWindowsResponse)
    Q_DISABLE_COPY(DescribeInstanceEventWindowsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
