// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAPACITYRESERVATIONSREQUEST_H
#define QTAWS_DESCRIBECAPACITYRESERVATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeCapacityReservationsRequestPrivate;

class QTAWSEC2_EXPORT DescribeCapacityReservationsRequest : public Ec2Request {

public:
    DescribeCapacityReservationsRequest(const DescribeCapacityReservationsRequest &other);
    DescribeCapacityReservationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCapacityReservationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
