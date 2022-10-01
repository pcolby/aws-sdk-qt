// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONINGARTIFACTRESPONSE_P_H
#define QTAWS_CREATEPROVISIONINGARTIFACTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateProvisioningArtifactResponse;

class CreateProvisioningArtifactResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit CreateProvisioningArtifactResponsePrivate(CreateProvisioningArtifactResponse * const q);

    void parseCreateProvisioningArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProvisioningArtifactResponse)
    Q_DISABLE_COPY(CreateProvisioningArtifactResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
