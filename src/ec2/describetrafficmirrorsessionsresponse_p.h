// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAFFICMIRRORSESSIONSRESPONSE_P_H
#define QTAWS_DESCRIBETRAFFICMIRRORSESSIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrafficMirrorSessionsResponse;

class DescribeTrafficMirrorSessionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeTrafficMirrorSessionsResponsePrivate(DescribeTrafficMirrorSessionsResponse * const q);

    void parseDescribeTrafficMirrorSessionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTrafficMirrorSessionsResponse)
    Q_DISABLE_COPY(DescribeTrafficMirrorSessionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
