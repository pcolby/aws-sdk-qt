// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROVISIONEDPRODUCTOUTPUTSRESPONSE_H
#define QTAWS_GETPROVISIONEDPRODUCTOUTPUTSRESPONSE_H

#include "servicecatalogresponse.h"
#include "getprovisionedproductoutputsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class GetProvisionedProductOutputsResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT GetProvisionedProductOutputsResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    GetProvisionedProductOutputsResponse(const GetProvisionedProductOutputsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetProvisionedProductOutputsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProvisionedProductOutputsResponse)
    Q_DISABLE_COPY(GetProvisionedProductOutputsResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
