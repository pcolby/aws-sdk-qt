// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDDBINSTANCESOFFERINGSRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDDBINSTANCESOFFERINGSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeReservedDBInstancesOfferingsResponse;

class DescribeReservedDBInstancesOfferingsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeReservedDBInstancesOfferingsResponsePrivate(DescribeReservedDBInstancesOfferingsResponse * const q);

    void parseDescribeReservedDBInstancesOfferingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedDBInstancesOfferingsResponse)
    Q_DISABLE_COPY(DescribeReservedDBInstancesOfferingsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
