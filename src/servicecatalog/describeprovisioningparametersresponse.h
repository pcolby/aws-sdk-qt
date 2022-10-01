// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONINGPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBEPROVISIONINGPARAMETERSRESPONSE_H

#include "servicecatalogresponse.h"
#include "describeprovisioningparametersrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProvisioningParametersResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeProvisioningParametersResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribeProvisioningParametersResponse(const DescribeProvisioningParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProvisioningParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProvisioningParametersResponse)
    Q_DISABLE_COPY(DescribeProvisioningParametersResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
