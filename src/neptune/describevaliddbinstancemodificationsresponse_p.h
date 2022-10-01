// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class DescribeValidDBInstanceModificationsResponse;

class DescribeValidDBInstanceModificationsResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit DescribeValidDBInstanceModificationsResponsePrivate(DescribeValidDBInstanceModificationsResponse * const q);

    void parseDescribeValidDBInstanceModificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeValidDBInstanceModificationsResponse)
    Q_DISABLE_COPY(DescribeValidDBInstanceModificationsResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
