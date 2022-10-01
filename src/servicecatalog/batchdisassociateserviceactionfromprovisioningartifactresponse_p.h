// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATESERVICEACTIONFROMPROVISIONINGARTIFACTRESPONSE_P_H
#define QTAWS_BATCHDISASSOCIATESERVICEACTIONFROMPROVISIONINGARTIFACTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class BatchDisassociateServiceActionFromProvisioningArtifactResponse;

class BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate(BatchDisassociateServiceActionFromProvisioningArtifactResponse * const q);

    void parseBatchDisassociateServiceActionFromProvisioningArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateServiceActionFromProvisioningArtifactResponse)
    Q_DISABLE_COPY(BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
