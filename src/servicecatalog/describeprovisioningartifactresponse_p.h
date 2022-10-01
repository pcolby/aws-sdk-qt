// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONINGARTIFACTRESPONSE_P_H
#define QTAWS_DESCRIBEPROVISIONINGARTIFACTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProvisioningArtifactResponse;

class DescribeProvisioningArtifactResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribeProvisioningArtifactResponsePrivate(DescribeProvisioningArtifactResponse * const q);

    void parseDescribeProvisioningArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProvisioningArtifactResponse)
    Q_DISABLE_COPY(DescribeProvisioningArtifactResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
