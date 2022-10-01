// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEACTIONSFORPROVISIONINGARTIFACTRESPONSE_P_H
#define QTAWS_LISTSERVICEACTIONSFORPROVISIONINGARTIFACTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListServiceActionsForProvisioningArtifactResponse;

class ListServiceActionsForProvisioningArtifactResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListServiceActionsForProvisioningArtifactResponsePrivate(ListServiceActionsForProvisioningArtifactResponse * const q);

    void parseListServiceActionsForProvisioningArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServiceActionsForProvisioningArtifactResponse)
    Q_DISABLE_COPY(ListServiceActionsForProvisioningArtifactResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
