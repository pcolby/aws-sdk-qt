// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESERVICEACTIONFROMPROVISIONINGARTIFACTRESPONSE_P_H
#define QTAWS_DISASSOCIATESERVICEACTIONFROMPROVISIONINGARTIFACTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateServiceActionFromProvisioningArtifactResponse;

class DisassociateServiceActionFromProvisioningArtifactResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DisassociateServiceActionFromProvisioningArtifactResponsePrivate(DisassociateServiceActionFromProvisioningArtifactResponse * const q);

    void parseDisassociateServiceActionFromProvisioningArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateServiceActionFromProvisioningArtifactResponse)
    Q_DISABLE_COPY(DisassociateServiceActionFromProvisioningArtifactResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
