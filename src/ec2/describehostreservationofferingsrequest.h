// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTRESERVATIONOFFERINGSREQUEST_H
#define QTAWS_DESCRIBEHOSTRESERVATIONOFFERINGSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeHostReservationOfferingsRequestPrivate;

class QTAWSEC2_EXPORT DescribeHostReservationOfferingsRequest : public Ec2Request {

public:
    DescribeHostReservationOfferingsRequest(const DescribeHostReservationOfferingsRequest &other);
    DescribeHostReservationOfferingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHostReservationOfferingsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
