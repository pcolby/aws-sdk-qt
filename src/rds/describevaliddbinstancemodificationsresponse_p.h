// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeValidDBInstanceModificationsResponse;

class DescribeValidDBInstanceModificationsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeValidDBInstanceModificationsResponsePrivate(DescribeValidDBInstanceModificationsResponse * const q);

    void parseDescribeValidDBInstanceModificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeValidDBInstanceModificationsResponse)
    Q_DISABLE_COPY(DescribeValidDBInstanceModificationsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
