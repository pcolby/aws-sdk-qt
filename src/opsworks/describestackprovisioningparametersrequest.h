// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKPROVISIONINGPARAMETERSREQUEST_H
#define QTAWS_DESCRIBESTACKPROVISIONINGPARAMETERSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeStackProvisioningParametersRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeStackProvisioningParametersRequest : public OpsWorksRequest {

public:
    DescribeStackProvisioningParametersRequest(const DescribeStackProvisioningParametersRequest &other);
    DescribeStackProvisioningParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackProvisioningParametersRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
