// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXYENDPOINTSREQUEST_H
#define QTAWS_DESCRIBEDBPROXYENDPOINTSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxyEndpointsRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBProxyEndpointsRequest : public RdsRequest {

public:
    DescribeDBProxyEndpointsRequest(const DescribeDBProxyEndpointsRequest &other);
    DescribeDBProxyEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBProxyEndpointsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
