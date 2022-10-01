// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEPLOYMENTSREQUEST_H
#define QTAWS_DESCRIBEDEPLOYMENTSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeDeploymentsRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeDeploymentsRequest : public OpsWorksRequest {

public:
    DescribeDeploymentsRequest(const DescribeDeploymentsRequest &other);
    DescribeDeploymentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeploymentsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
