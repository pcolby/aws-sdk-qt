// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDDBINSTANCESREQUEST_H
#define QTAWS_DESCRIBERESERVEDDBINSTANCESREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeReservedDBInstancesRequestPrivate;

class QTAWSRDS_EXPORT DescribeReservedDBInstancesRequest : public RdsRequest {

public:
    DescribeReservedDBInstancesRequest(const DescribeReservedDBInstancesRequest &other);
    DescribeReservedDBInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedDBInstancesRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
