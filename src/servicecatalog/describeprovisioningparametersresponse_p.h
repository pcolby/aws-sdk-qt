// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONINGPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBEPROVISIONINGPARAMETERSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProvisioningParametersResponse;

class DescribeProvisioningParametersResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribeProvisioningParametersResponsePrivate(DescribeProvisioningParametersResponse * const q);

    void parseDescribeProvisioningParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProvisioningParametersResponse)
    Q_DISABLE_COPY(DescribeProvisioningParametersResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
