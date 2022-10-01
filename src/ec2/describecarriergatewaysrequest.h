// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECARRIERGATEWAYSREQUEST_H
#define QTAWS_DESCRIBECARRIERGATEWAYSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeCarrierGatewaysRequestPrivate;

class QTAWSEC2_EXPORT DescribeCarrierGatewaysRequest : public Ec2Request {

public:
    DescribeCarrierGatewaysRequest(const DescribeCarrierGatewaysRequest &other);
    DescribeCarrierGatewaysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCarrierGatewaysRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
