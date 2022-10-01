// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALCLUSTERSREQUEST_H
#define QTAWS_DESCRIBEGLOBALCLUSTERSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeGlobalClustersRequestPrivate;

class QTAWSRDS_EXPORT DescribeGlobalClustersRequest : public RdsRequest {

public:
    DescribeGlobalClustersRequest(const DescribeGlobalClustersRequest &other);
    DescribeGlobalClustersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGlobalClustersRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
