// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESOFFERINGSREQUEST_H
#define QTAWS_DESCRIBERESERVEDINSTANCESOFFERINGSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeReservedInstancesOfferingsRequestPrivate;

class QTAWSEC2_EXPORT DescribeReservedInstancesOfferingsRequest : public Ec2Request {

public:
    DescribeReservedInstancesOfferingsRequest(const DescribeReservedInstancesOfferingsRequest &other);
    DescribeReservedInstancesOfferingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedInstancesOfferingsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
