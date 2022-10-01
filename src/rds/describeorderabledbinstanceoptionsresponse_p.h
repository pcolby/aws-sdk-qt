// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORDERABLEDBINSTANCEOPTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEORDERABLEDBINSTANCEOPTIONSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeOrderableDBInstanceOptionsResponse;

class DescribeOrderableDBInstanceOptionsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeOrderableDBInstanceOptionsResponsePrivate(DescribeOrderableDBInstanceOptionsResponse * const q);

    void parseDescribeOrderableDBInstanceOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOrderableDBInstanceOptionsResponse)
    Q_DISABLE_COPY(DescribeOrderableDBInstanceOptionsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
