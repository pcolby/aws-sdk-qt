// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGARTIFACTSFORSERVICEACTIONRESPONSE_P_H
#define QTAWS_LISTPROVISIONINGARTIFACTSFORSERVICEACTIONRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListProvisioningArtifactsForServiceActionResponse;

class ListProvisioningArtifactsForServiceActionResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListProvisioningArtifactsForServiceActionResponsePrivate(ListProvisioningArtifactsForServiceActionResponse * const q);

    void parseListProvisioningArtifactsForServiceActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProvisioningArtifactsForServiceActionResponse)
    Q_DISABLE_COPY(ListProvisioningArtifactsForServiceActionResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
