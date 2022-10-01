// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESERVICEACTIONWITHPROVISIONINGARTIFACTRESPONSE_H
#define QTAWS_ASSOCIATESERVICEACTIONWITHPROVISIONINGARTIFACTRESPONSE_H

#include "servicecatalogresponse.h"
#include "associateserviceactionwithprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociateServiceActionWithProvisioningArtifactResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT AssociateServiceActionWithProvisioningArtifactResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    AssociateServiceActionWithProvisioningArtifactResponse(const AssociateServiceActionWithProvisioningArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateServiceActionWithProvisioningArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateServiceActionWithProvisioningArtifactResponse)
    Q_DISABLE_COPY(AssociateServiceActionWithProvisioningArtifactResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
