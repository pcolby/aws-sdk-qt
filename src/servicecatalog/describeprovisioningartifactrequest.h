// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONINGARTIFACTREQUEST_H
#define QTAWS_DESCRIBEPROVISIONINGARTIFACTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProvisioningArtifactRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeProvisioningArtifactRequest : public ServiceCatalogRequest {

public:
    DescribeProvisioningArtifactRequest(const DescribeProvisioningArtifactRequest &other);
    DescribeProvisioningArtifactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
