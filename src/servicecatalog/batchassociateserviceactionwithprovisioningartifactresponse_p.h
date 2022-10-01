// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATESERVICEACTIONWITHPROVISIONINGARTIFACTRESPONSE_P_H
#define QTAWS_BATCHASSOCIATESERVICEACTIONWITHPROVISIONINGARTIFACTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class BatchAssociateServiceActionWithProvisioningArtifactResponse;

class BatchAssociateServiceActionWithProvisioningArtifactResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit BatchAssociateServiceActionWithProvisioningArtifactResponsePrivate(BatchAssociateServiceActionWithProvisioningArtifactResponse * const q);

    void parseBatchAssociateServiceActionWithProvisioningArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchAssociateServiceActionWithProvisioningArtifactResponse)
    Q_DISABLE_COPY(BatchAssociateServiceActionWithProvisioningArtifactResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
