// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATESERVICEACTIONWITHPROVISIONINGARTIFACTREQUEST_H
#define QTAWS_BATCHASSOCIATESERVICEACTIONWITHPROVISIONINGARTIFACTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT BatchAssociateServiceActionWithProvisioningArtifactRequest : public ServiceCatalogRequest {

public:
    BatchAssociateServiceActionWithProvisioningArtifactRequest(const BatchAssociateServiceActionWithProvisioningArtifactRequest &other);
    BatchAssociateServiceActionWithProvisioningArtifactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateServiceActionWithProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
