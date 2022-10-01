// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAPACITYRESERVATIONSRESPONSE_H
#define QTAWS_DESCRIBECAPACITYRESERVATIONSRESPONSE_H

#include "ec2response.h"
#include "describecapacityreservationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeCapacityReservationsResponsePrivate;

class QTAWSEC2_EXPORT DescribeCapacityReservationsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeCapacityReservationsResponse(const DescribeCapacityReservationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCapacityReservationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCapacityReservationsResponse)
    Q_DISABLE_COPY(DescribeCapacityReservationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
