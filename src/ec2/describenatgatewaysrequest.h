// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENATGATEWAYSREQUEST_H
#define QTAWS_DESCRIBENATGATEWAYSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeNatGatewaysRequestPrivate;

class QTAWSEC2_EXPORT DescribeNatGatewaysRequest : public Ec2Request {

public:
    DescribeNatGatewaysRequest(const DescribeNatGatewaysRequest &other);
    DescribeNatGatewaysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNatGatewaysRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
