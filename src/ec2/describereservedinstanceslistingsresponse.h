// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESLISTINGSRESPONSE_H
#define QTAWS_DESCRIBERESERVEDINSTANCESLISTINGSRESPONSE_H

#include "ec2response.h"
#include "describereservedinstanceslistingsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeReservedInstancesListingsResponsePrivate;

class QTAWSEC2_EXPORT DescribeReservedInstancesListingsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeReservedInstancesListingsResponse(const DescribeReservedInstancesListingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedInstancesListingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedInstancesListingsResponse)
    Q_DISABLE_COPY(DescribeReservedInstancesListingsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
