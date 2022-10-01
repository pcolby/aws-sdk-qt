// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDDBINSTANCESOFFERINGSREQUEST_H
#define QTAWS_DESCRIBERESERVEDDBINSTANCESOFFERINGSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeReservedDBInstancesOfferingsRequestPrivate;

class QTAWSRDS_EXPORT DescribeReservedDBInstancesOfferingsRequest : public RdsRequest {

public:
    DescribeReservedDBInstancesOfferingsRequest(const DescribeReservedDBInstancesOfferingsRequest &other);
    DescribeReservedDBInstancesOfferingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedDBInstancesOfferingsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
