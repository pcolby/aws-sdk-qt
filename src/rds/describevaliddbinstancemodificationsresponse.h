// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSRESPONSE_H
#define QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSRESPONSE_H

#include "rdsresponse.h"
#include "describevaliddbinstancemodificationsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeValidDBInstanceModificationsResponsePrivate;

class QTAWSRDS_EXPORT DescribeValidDBInstanceModificationsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeValidDBInstanceModificationsResponse(const DescribeValidDBInstanceModificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeValidDBInstanceModificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeValidDBInstanceModificationsResponse)
    Q_DISABLE_COPY(DescribeValidDBInstanceModificationsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
