// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESMODIFICATIONSRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDINSTANCESMODIFICATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeReservedInstancesModificationsResponse;

class DescribeReservedInstancesModificationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeReservedInstancesModificationsResponsePrivate(DescribeReservedInstancesModificationsResponse * const q);

    void parseDescribeReservedInstancesModificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedInstancesModificationsResponse)
    Q_DISABLE_COPY(DescribeReservedInstancesModificationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
