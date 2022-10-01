// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERPARAMETERSREQUEST_H
#define QTAWS_DESCRIBEDBCLUSTERPARAMETERSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterParametersRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBClusterParametersRequest : public RdsRequest {

public:
    DescribeDBClusterParametersRequest(const DescribeDBClusterParametersRequest &other);
    DescribeDBClusterParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterParametersRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
