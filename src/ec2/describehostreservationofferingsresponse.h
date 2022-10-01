// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTRESERVATIONOFFERINGSRESPONSE_H
#define QTAWS_DESCRIBEHOSTRESERVATIONOFFERINGSRESPONSE_H

#include "ec2response.h"
#include "describehostreservationofferingsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeHostReservationOfferingsResponsePrivate;

class QTAWSEC2_EXPORT DescribeHostReservationOfferingsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeHostReservationOfferingsResponse(const DescribeHostReservationOfferingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHostReservationOfferingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHostReservationOfferingsResponse)
    Q_DISABLE_COPY(DescribeHostReservationOfferingsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
