// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEPROVISIONEDPRODUCTSERVICEACTIONRESPONSE_H
#define QTAWS_EXECUTEPROVISIONEDPRODUCTSERVICEACTIONRESPONSE_H

#include "servicecatalogresponse.h"
#include "executeprovisionedproductserviceactionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ExecuteProvisionedProductServiceActionResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ExecuteProvisionedProductServiceActionResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ExecuteProvisionedProductServiceActionResponse(const ExecuteProvisionedProductServiceActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExecuteProvisionedProductServiceActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteProvisionedProductServiceActionResponse)
    Q_DISABLE_COPY(ExecuteProvisionedProductServiceActionResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
