// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABILITYZONESRESPONSE_P_H
#define QTAWS_DESCRIBEAVAILABILITYZONESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeAvailabilityZonesResponse;

class DescribeAvailabilityZonesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeAvailabilityZonesResponsePrivate(DescribeAvailabilityZonesResponse * const q);

    void parseDescribeAvailabilityZonesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAvailabilityZonesResponse)
    Q_DISABLE_COPY(DescribeAvailabilityZonesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
