// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESLISTINGSRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDINSTANCESLISTINGSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeReservedInstancesListingsResponse;

class DescribeReservedInstancesListingsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeReservedInstancesListingsResponsePrivate(DescribeReservedInstancesListingsResponse * const q);

    void parseDescribeReservedInstancesListingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedInstancesListingsResponse)
    Q_DISABLE_COPY(DescribeReservedInstancesListingsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
