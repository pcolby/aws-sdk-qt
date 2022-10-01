// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEGRESSONLYINTERNETGATEWAYSREQUEST_H
#define QTAWS_DESCRIBEEGRESSONLYINTERNETGATEWAYSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeEgressOnlyInternetGatewaysRequestPrivate;

class QTAWSEC2_EXPORT DescribeEgressOnlyInternetGatewaysRequest : public Ec2Request {

public:
    DescribeEgressOnlyInternetGatewaysRequest(const DescribeEgressOnlyInternetGatewaysRequest &other);
    DescribeEgressOnlyInternetGatewaysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEgressOnlyInternetGatewaysRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
