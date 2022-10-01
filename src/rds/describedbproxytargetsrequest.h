// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXYTARGETSREQUEST_H
#define QTAWS_DESCRIBEDBPROXYTARGETSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxyTargetsRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBProxyTargetsRequest : public RdsRequest {

public:
    DescribeDBProxyTargetsRequest(const DescribeDBProxyTargetsRequest &other);
    DescribeDBProxyTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBProxyTargetsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
