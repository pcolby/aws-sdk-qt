// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMERGATEWAYSREQUEST_H
#define QTAWS_DESCRIBECUSTOMERGATEWAYSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeCustomerGatewaysRequestPrivate;

class QTAWSEC2_EXPORT DescribeCustomerGatewaysRequest : public Ec2Request {

public:
    DescribeCustomerGatewaysRequest(const DescribeCustomerGatewaysRequest &other);
    DescribeCustomerGatewaysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomerGatewaysRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
