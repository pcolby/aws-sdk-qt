// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESRESPONSE_H
#define QTAWS_DESCRIBERESERVEDINSTANCESRESPONSE_H

#include "ec2response.h"
#include "describereservedinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeReservedInstancesResponsePrivate;

class QTAWSEC2_EXPORT DescribeReservedInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeReservedInstancesResponse(const DescribeReservedInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedInstancesResponse)
    Q_DISABLE_COPY(DescribeReservedInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
