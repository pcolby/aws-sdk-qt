// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSREQUEST_H
#define QTAWS_DESCRIBEVPCENDPOINTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointsRequestPrivate;

class QTAWSEC2_EXPORT DescribeVpcEndpointsRequest : public Ec2Request {

public:
    DescribeVpcEndpointsRequest(const DescribeVpcEndpointsRequest &other);
    DescribeVpcEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcEndpointsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
