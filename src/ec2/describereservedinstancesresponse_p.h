// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeReservedInstancesResponse;

class DescribeReservedInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeReservedInstancesResponsePrivate(DescribeReservedInstancesResponse * const q);

    void parseDescribeReservedInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedInstancesResponse)
    Q_DISABLE_COPY(DescribeReservedInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
