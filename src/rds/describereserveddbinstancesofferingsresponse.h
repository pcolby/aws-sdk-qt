// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDDBINSTANCESOFFERINGSRESPONSE_H
#define QTAWS_DESCRIBERESERVEDDBINSTANCESOFFERINGSRESPONSE_H

#include "rdsresponse.h"
#include "describereserveddbinstancesofferingsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeReservedDBInstancesOfferingsResponsePrivate;

class QTAWSRDS_EXPORT DescribeReservedDBInstancesOfferingsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeReservedDBInstancesOfferingsResponse(const DescribeReservedDBInstancesOfferingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedDBInstancesOfferingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedDBInstancesOfferingsResponse)
    Q_DISABLE_COPY(DescribeReservedDBInstancesOfferingsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
