// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBINSTANCEAUTOMATEDBACKUPSRESPONSE_P_H
#define QTAWS_DESCRIBEDBINSTANCEAUTOMATEDBACKUPSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBInstanceAutomatedBackupsResponse;

class DescribeDBInstanceAutomatedBackupsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBInstanceAutomatedBackupsResponsePrivate(DescribeDBInstanceAutomatedBackupsResponse * const q);

    void parseDescribeDBInstanceAutomatedBackupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBInstanceAutomatedBackupsResponse)
    Q_DISABLE_COPY(DescribeDBInstanceAutomatedBackupsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
