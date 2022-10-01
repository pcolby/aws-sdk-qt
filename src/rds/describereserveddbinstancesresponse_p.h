// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDDBINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDDBINSTANCESRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeReservedDBInstancesResponse;

class DescribeReservedDBInstancesResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeReservedDBInstancesResponsePrivate(DescribeReservedDBInstancesResponse * const q);

    void parseDescribeReservedDBInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedDBInstancesResponse)
    Q_DISABLE_COPY(DescribeReservedDBInstancesResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
