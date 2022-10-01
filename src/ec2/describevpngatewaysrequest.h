// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPNGATEWAYSREQUEST_H
#define QTAWS_DESCRIBEVPNGATEWAYSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpnGatewaysRequestPrivate;

class QTAWSEC2_EXPORT DescribeVpnGatewaysRequest : public Ec2Request {

public:
    DescribeVpnGatewaysRequest(const DescribeVpnGatewaysRequest &other);
    DescribeVpnGatewaysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpnGatewaysRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
