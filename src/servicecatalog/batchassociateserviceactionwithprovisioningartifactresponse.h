// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATESERVICEACTIONWITHPROVISIONINGARTIFACTRESPONSE_H
#define QTAWS_BATCHASSOCIATESERVICEACTIONWITHPROVISIONINGARTIFACTRESPONSE_H

#include "servicecatalogresponse.h"
#include "batchassociateserviceactionwithprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class BatchAssociateServiceActionWithProvisioningArtifactResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT BatchAssociateServiceActionWithProvisioningArtifactResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    BatchAssociateServiceActionWithProvisioningArtifactResponse(const BatchAssociateServiceActionWithProvisioningArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchAssociateServiceActionWithProvisioningArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateServiceActionWithProvisioningArtifactResponse)
    Q_DISABLE_COPY(BatchAssociateServiceActionWithProvisioningArtifactResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
