// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONINGARTIFACTRESPONSE_P_H
#define QTAWS_DELETEPROVISIONINGARTIFACTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteProvisioningArtifactResponse;

class DeleteProvisioningArtifactResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DeleteProvisioningArtifactResponsePrivate(DeleteProvisioningArtifactResponse * const q);

    void parseDeleteProvisioningArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProvisioningArtifactResponse)
    Q_DISABLE_COPY(DeleteProvisioningArtifactResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
