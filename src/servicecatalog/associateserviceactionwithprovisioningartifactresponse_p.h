// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESERVICEACTIONWITHPROVISIONINGARTIFACTRESPONSE_P_H
#define QTAWS_ASSOCIATESERVICEACTIONWITHPROVISIONINGARTIFACTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociateServiceActionWithProvisioningArtifactResponse;

class AssociateServiceActionWithProvisioningArtifactResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit AssociateServiceActionWithProvisioningArtifactResponsePrivate(AssociateServiceActionWithProvisioningArtifactResponse * const q);

    void parseAssociateServiceActionWithProvisioningArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateServiceActionWithProvisioningArtifactResponse)
    Q_DISABLE_COPY(AssociateServiceActionWithProvisioningArtifactResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
