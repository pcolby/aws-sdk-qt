// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESMODIFICATIONSRESPONSE_H
#define QTAWS_DESCRIBERESERVEDINSTANCESMODIFICATIONSRESPONSE_H

#include "ec2response.h"
#include "describereservedinstancesmodificationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeReservedInstancesModificationsResponsePrivate;

class QTAWSEC2_EXPORT DescribeReservedInstancesModificationsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeReservedInstancesModificationsResponse(const DescribeReservedInstancesModificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedInstancesModificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedInstancesModificationsResponse)
    Q_DISABLE_COPY(DescribeReservedInstancesModificationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
