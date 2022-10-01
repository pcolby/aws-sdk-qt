// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERBACKTRACKSREQUEST_H
#define QTAWS_DESCRIBEDBCLUSTERBACKTRACKSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterBacktracksRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBClusterBacktracksRequest : public RdsRequest {

public:
    DescribeDBClusterBacktracksRequest(const DescribeDBClusterBacktracksRequest &other);
    DescribeDBClusterBacktracksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterBacktracksRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
