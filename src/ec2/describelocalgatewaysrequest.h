// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYSREQUEST_H
#define QTAWS_DESCRIBELOCALGATEWAYSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewaysRequestPrivate;

class QTAWSEC2_EXPORT DescribeLocalGatewaysRequest : public Ec2Request {

public:
    DescribeLocalGatewaysRequest(const DescribeLocalGatewaysRequest &other);
    DescribeLocalGatewaysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocalGatewaysRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
