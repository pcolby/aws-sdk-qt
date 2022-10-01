// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONINGARTIFACTRESPONSE_P_H
#define QTAWS_UPDATEPROVISIONINGARTIFACTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateProvisioningArtifactResponse;

class UpdateProvisioningArtifactResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit UpdateProvisioningArtifactResponsePrivate(UpdateProvisioningArtifactResponse * const q);

    void parseUpdateProvisioningArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProvisioningArtifactResponse)
    Q_DISABLE_COPY(UpdateProvisioningArtifactResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
