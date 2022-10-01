// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDINSTANCEAVAILABILITYRESPONSE_P_H
#define QTAWS_DESCRIBESCHEDULEDINSTANCEAVAILABILITYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeScheduledInstanceAvailabilityResponse;

class DescribeScheduledInstanceAvailabilityResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeScheduledInstanceAvailabilityResponsePrivate(DescribeScheduledInstanceAvailabilityResponse * const q);

    void parseDescribeScheduledInstanceAvailabilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeScheduledInstanceAvailabilityResponse)
    Q_DISABLE_COPY(DescribeScheduledInstanceAvailabilityResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
