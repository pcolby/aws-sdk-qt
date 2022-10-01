// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBESCHEDULEDINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeScheduledInstancesResponse;

class DescribeScheduledInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeScheduledInstancesResponsePrivate(DescribeScheduledInstancesResponse * const q);

    void parseDescribeScheduledInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeScheduledInstancesResponse)
    Q_DISABLE_COPY(DescribeScheduledInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
