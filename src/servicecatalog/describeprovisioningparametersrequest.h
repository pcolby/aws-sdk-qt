// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONINGPARAMETERSREQUEST_H
#define QTAWS_DESCRIBEPROVISIONINGPARAMETERSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProvisioningParametersRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeProvisioningParametersRequest : public ServiceCatalogRequest {

public:
    DescribeProvisioningParametersRequest(const DescribeProvisioningParametersRequest &other);
    DescribeProvisioningParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProvisioningParametersRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
