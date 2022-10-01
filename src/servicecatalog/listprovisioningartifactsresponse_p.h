// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGARTIFACTSRESPONSE_P_H
#define QTAWS_LISTPROVISIONINGARTIFACTSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListProvisioningArtifactsResponse;

class ListProvisioningArtifactsResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListProvisioningArtifactsResponsePrivate(ListProvisioningArtifactsResponse * const q);

    void parseListProvisioningArtifactsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProvisioningArtifactsResponse)
    Q_DISABLE_COPY(ListProvisioningArtifactsResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
