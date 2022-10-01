// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCETYPEOFFERINGSREQUEST_H
#define QTAWS_DESCRIBEINSTANCETYPEOFFERINGSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceTypeOfferingsRequestPrivate;

class QTAWSEC2_EXPORT DescribeInstanceTypeOfferingsRequest : public Ec2Request {

public:
    DescribeInstanceTypeOfferingsRequest(const DescribeInstanceTypeOfferingsRequest &other);
    DescribeInstanceTypeOfferingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceTypeOfferingsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
