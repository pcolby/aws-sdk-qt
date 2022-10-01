// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEEVENTNOTIFICATIONATTRIBUTESRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCEEVENTNOTIFICATIONATTRIBUTESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceEventNotificationAttributesResponse;

class DescribeInstanceEventNotificationAttributesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeInstanceEventNotificationAttributesResponsePrivate(DescribeInstanceEventNotificationAttributesResponse * const q);

    void parseDescribeInstanceEventNotificationAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceEventNotificationAttributesResponse)
    Q_DISABLE_COPY(DescribeInstanceEventNotificationAttributesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
