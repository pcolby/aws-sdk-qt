// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDDBINSTANCESRESPONSE_H
#define QTAWS_DESCRIBERESERVEDDBINSTANCESRESPONSE_H

#include "rdsresponse.h"
#include "describereserveddbinstancesrequest.h"

namespace QtAws {
namespace Rds {

class DescribeReservedDBInstancesResponsePrivate;

class QTAWSRDS_EXPORT DescribeReservedDBInstancesResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeReservedDBInstancesResponse(const DescribeReservedDBInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedDBInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedDBInstancesResponse)
    Q_DISABLE_COPY(DescribeReservedDBInstancesResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
