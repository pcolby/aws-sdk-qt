// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEDEFAULTCLUSTERPARAMETERSREQUEST_H
#define QTAWS_DESCRIBEENGINEDEFAULTCLUSTERPARAMETERSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeEngineDefaultClusterParametersRequestPrivate;

class QTAWSRDS_EXPORT DescribeEngineDefaultClusterParametersRequest : public RdsRequest {

public:
    DescribeEngineDefaultClusterParametersRequest(const DescribeEngineDefaultClusterParametersRequest &other);
    DescribeEngineDefaultClusterParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEngineDefaultClusterParametersRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
