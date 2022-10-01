// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAPACITYRESERVATIONFLEETSRESPONSE_H
#define QTAWS_DESCRIBECAPACITYRESERVATIONFLEETSRESPONSE_H

#include "ec2response.h"
#include "describecapacityreservationfleetsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeCapacityReservationFleetsResponsePrivate;

class QTAWSEC2_EXPORT DescribeCapacityReservationFleetsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeCapacityReservationFleetsResponse(const DescribeCapacityReservationFleetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCapacityReservationFleetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCapacityReservationFleetsResponse)
    Q_DISABLE_COPY(DescribeCapacityReservationFleetsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
