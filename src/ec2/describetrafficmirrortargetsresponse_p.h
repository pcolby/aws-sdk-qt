// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAFFICMIRRORTARGETSRESPONSE_P_H
#define QTAWS_DESCRIBETRAFFICMIRRORTARGETSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrafficMirrorTargetsResponse;

class DescribeTrafficMirrorTargetsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeTrafficMirrorTargetsResponsePrivate(DescribeTrafficMirrorTargetsResponse * const q);

    void parseDescribeTrafficMirrorTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTrafficMirrorTargetsResponse)
    Q_DISABLE_COPY(DescribeTrafficMirrorTargetsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
