// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXIESREQUEST_H
#define QTAWS_DESCRIBEDBPROXIESREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxiesRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBProxiesRequest : public RdsRequest {

public:
    DescribeDBProxiesRequest(const DescribeDBProxiesRequest &other);
    DescribeDBProxiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBProxiesRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
