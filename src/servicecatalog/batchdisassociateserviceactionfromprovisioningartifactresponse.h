// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATESERVICEACTIONFROMPROVISIONINGARTIFACTRESPONSE_H
#define QTAWS_BATCHDISASSOCIATESERVICEACTIONFROMPROVISIONINGARTIFACTRESPONSE_H

#include "servicecatalogresponse.h"
#include "batchdisassociateserviceactionfromprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT BatchDisassociateServiceActionFromProvisioningArtifactResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    BatchDisassociateServiceActionFromProvisioningArtifactResponse(const BatchDisassociateServiceActionFromProvisioningArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDisassociateServiceActionFromProvisioningArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateServiceActionFromProvisioningArtifactResponse)
    Q_DISABLE_COPY(BatchDisassociateServiceActionFromProvisioningArtifactResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
